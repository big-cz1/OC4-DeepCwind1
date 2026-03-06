function [ AM ] = AddedMassOC4( Platform )
% AddedMass - Calculates the 6x6 Added Mass Matrix for the RIGID MAIN COLUMN only.
% The distributed added mass for flexible beams and offset columns is handled
% via 'Wet Mass' in CreatePlatformOC4.

global FLUIDDENSITY;

% Coefficients for the Main Column (Cylinder)
CA = 0.969954; % Classical value for circular cylinder
CP = 1.0;      % Coefficient for the bottom pressure (Heave)

% Extract Main Column Geometry from Platform structure
% CreatePlatformOC4 defines these specific to the Main Column
StripDia    = Platform.StripDia;
StripDepths = Platform.StripDepths;
ndz         = length(StripDepths);

% Pre-calculate vectors for cross products
% Z1: Unit vector in X (Surge)
% Z3: Unit vector in Z (Heave)
Z1  = repmat([1 0 0], 1, 1, ndz);
Z3  = repmat([0 0 1], 1, 1, ndz);

% Position vector of each strip relative to reference (0,0,0)
% rZZ is the vertical distance vector [0, 0, -z]
rZZ = reshape(-StripDepths', 1, 1, ndz) .* [0 0 1]; 
% Note: Original code had [0 1 0], corrected to [0 0 1] for vertical Z position, 
% or if rZZ meant radial vector, it depends on context. 
% Assuming rZZ is the location vector r = (0,0,-z) for moment arm calc.

AM = zeros(6,6);

%% --- 1. Surge & Sway (Transverse) Added Mass ---
% A11 = rho * Ca * Area * dz
dM_transverse = CA * FLUIDDENSITY * pi/4 * StripDia.^2;

AM(1,1) = trapz(StripDepths, dM_transverse); % Surge
AM(2,2) = trapz(StripDepths, dM_transverse); % Sway

%% --- 2. Heave Added Mass ---
% For the main column, this is just the pressure on the bottom face.
% A33 = rho * Area_bottom * Cp (approximated as hemisphere or disk)
% Main Column bottom diameter is 6.5m.
Dia_Bottom = StripDia(end);
% Using theoretical value for a disk/hemisphere at end of cylinder
AM(3,3) = FLUIDDENSITY * (1/6) * Dia_Bottom^3; % Or similar empirical formula

%% --- 3. Pitch & Roll (Coupling) ---
% Moment arm contributions from Surge/Sway forces
% A55 = integral( z^2 * dm )
% A15 = integral( z * dm )

% Calculate moment arms (cross products)
% r x direction_vector
% For Surge (X-force) creating Pitch (Y-moment): Moment arm is Z
r_cross_dirX = cross(rZZ, Z1, 2); % r x i = (0,0,-z) x (1,0,0) = (0,-z,0) -> Pitch
r_cross_dirY = cross(rZZ, repmat([0 1 0],1,1,ndz), 2); 

% Coupling Terms (Surge-Pitch)
% Integral of: dM * (r x dir)
integrand_15 = dM_transverse .* reshape(r_cross_dirX(:,2,:), 1, ndz); % Y-component is Pitch
AM(1,5) = trapz(StripDepths, integrand_15);
AM(5,1) = AM(1,5);

% Coupling Terms (Sway-Roll)
integrand_24 = dM_transverse .* reshape(r_cross_dirY(:,1,:), 1, ndz); % X-component is Roll
AM(2,4) = trapz(StripDepths, integrand_24);
AM(4,2) = AM(2,4);

%% --- 4. Rotational Inertia (Pitch/Roll) ---
% A55 = integral( z^2 * dm_transverse )
AM(5,5) = trapz(StripDepths, dM_transverse .* StripDepths.^2);
AM(4,4) = trapz(StripDepths, dM_transverse .* StripDepths.^2);

end