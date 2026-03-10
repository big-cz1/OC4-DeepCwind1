function [IM, f, Controls] = SystemMatrices(t, q, Controls, DOFs, ElastoDyn, Airfoils, Twr, Bld, Platform, Wind, WindNom, wave, mooring_load_ptr, Servo)
%#Codegen
ep = 1e-15;
OnePlusEps = 1+ep;
persistent LastTime
global MooringLoadHistory
if isempty(LastTime)
    LastTime = 0;
    fprintf('Persistent variables in System Matrices initialized.\n');
end

%% Update state
% Dofs
Comq = zeros(DOFs.Avail*2,1);
IndexActive = [DOFs.Active, DOFs.Active+DOFs.Avail];
IndexNominal = [DOFs.ActNominal, DOFs.ActNominal+DOFs.Avail];

Comq(IndexActive) = q';
q_Nom  = zeros(44+12*2,1);
q_Nom([DOFs.ActNominal, DOFs.ActNominal+22+12]) = Comq(IndexNominal);
q_Sg   = Comq(1);
q_Sw   = Comq(2);
q_Hv   = Comq(3);
q_R    = Comq(4);
q_P    = Comq(5);
q_Y    = Comq(6);
% q_TFA1 = Comq(7);
% q_TSS1 = Comq(8);
% q_TFA2 = Comq(9);
% q_TSS2 = Comq(10);
% q_yaw  = Comq(11);
% q_GeAz = Comq(12);
% q_DrTr = Comq(13);
% q_B1F1 = Comq(14);
% q_B1E1 = Comq(15);
% q_B1F2 = Comq(16);
% q_B2F1 = Comq(17);
% q_B2E1 = Comq(18);
% q_B2F2 = Comq(19);
% q_B3F1 = Comq(20);
% q_B3E1 = Comq(21);
% q_B3F2 = Comq(22);
%--------------------
% q_P1H1 = q_Nom(23); 
% q_P1H2 = q_Nom(24); 
% q_P1V1 = q_Nom(25);
% q_P1V2 = q_Nom(26);
% q_P2H1 = q_Nom(27); 
% q_P2H2 = q_Nom(28); 
% q_P2V1 = q_Nom(29); 
% q_P2V2 = q_Nom(30);
% q_P3H1 = q_Nom(31); 
% q_P3H2 = q_Nom(32); 
% q_P3V1 = q_Nom(33); 
% q_P3V2 = q_Nom(34);

% qd_Sg   = Comq(23);
% qd_Sw   = Comq(24);
% qd_Hv   = Comq(25);
% qd_R    = Comq(26);
% qd_P    = Comq(27);
% qd_Y    = Comq(28);
% qd_TFA1 = Comq(29);
% qd_TSS1 = Comq(30);
% qd_TFA2 = Comq(31);
% qd_TSS2 = Comq(32);
% qd_yaw  = Comq(33);
% qd_GeAz = Comq(34);

% qd_DrTr = Comq(35);
% qd_B1F1 = Comq(36);
% qd_B1E1 = Comq(37);
% qd_B1F2 = Comq(38);
% qd_B2F1 = Comq(39);
% qd_B2E1 = Comq(40);
% qd_B2F2 = Comq(41);
% qd_B3F1 = Comq(42);
% qd_B3E1 = Comq(43);
% qd_B3F2 = Comq(44);

qd_Sg   = q_Nom(23+12);
qd_Sw   = q_Nom(24+12);
qd_Hv   = q_Nom(25+12);
qd_R    = q_Nom(26+12);
qd_P    = q_Nom(27+12);
qd_Y    = q_Nom(28+12);

% qd_TFA1 = q_Nom(29+12);
% qd_TSS1 = q_Nom(30+12);
% qd_TFA2 = q_Nom(31+12);
% qd_TSS2 = q_Nom(32+12);
% qd_yaw  = q_Nom(33+12);
qd_GeAz = q_Nom(34+12);
% qd_DrTr = q_Nom(35+12);
% qd_B1F1 = q_Nom(36+12);
% qd_B1E1 = q_Nom(37+12);
% qd_B1F2 = q_Nom(38+12);
% qd_B2F1 = q_Nom(39+12);
% qd_B2E1 = q_Nom(40+12);
% qd_B2F2 = q_Nom(41+12);
% qd_B3F1 = q_Nom(42+12);
% qd_B3E1 = q_Nom(43+12);
% qd_B3F2 = q_Nom(44+12);

% 这里直接列出浮筒的广义速度提取
% qd_P1H1 = q_Nom(45+12);
% qd_P1H2 = q_Nom(46+12);
% qd_P1V1 = q_Nom(47+12);
% qd_P1V2 = q_Nom(48+12);
% qd_P2H1 = q_Nom(49+12);
% qd_P2H2 = q_Nom(50+12);
% qd_P2V1 = q_Nom(51+12);
% qd_P2V2 = q_Nom(52+12);
% qd_P3H1 = q_Nom(53+12);
% qd_P3H2 = q_Nom(54+12);
% qd_P3V1 = q_Nom(55+12);
% qd_P3V2 = q_Nom(56+12);

% end of Update state

%% Call baseline controllers
BlPitch = Controls(2:4);
GenSpeed = ElastoDyn.GBRatio*(qd_GeAz);
if WindNom.PitchControl
    [GenTrq, BlPitch] = BaselineControllers(t, GenSpeed, BlPitch, Servo);
else
    [GenTrq, ~] = BaselineControllers(t, GenSpeed, BlPitch, Servo);
end

%% Update additional output vector
Controls(1:4) = [GenTrq, BlPitch];

%% Mooring loads
X  = [q_Sg, q_Sw, q_Hv, q_R, q_P, q_Y];
XD = [qd_Sg, qd_Sw, qd_Hv, qd_R, qd_P, qd_Y];

dt = t*OnePlusEps - LastTime; if dt < 0; disp(LastTime); disp(t); error('Time step negative'); end
if t == 0 || dt >= 1.25e-2
    if Platform.Mooring == 1
        calllib('MoorDyn', 'LinesCalc', X, XD, mooring_load_ptr, t, dt);
    elseif Platform.Mooring == 2
        calllib('MoorApiwin64','update', mooring_load_ptr, X', XD', t, dt, 0); 
    end
    LastTime = t;
    % 新增：存储时间 t 与 6个自由度上的系泊力/力矩 (1x7 的行向量)
    % ========================================================
    MooringLoadHistory = [MooringLoadHistory; t, mooring_load_ptr.value];
end

mooring_load = mooring_load_ptr.value;

Z = eye(3); 
EwX = qd_R*Z(1,:) + qd_Y*Z(2,:) - qd_P*Z(3,:);
EvZ   = qd_Sg*Z(1,:) + qd_Hv*Z(2,:) - qd_Sw*Z(3,:);

f_Morison = Morisons(t, Z, EwX, EvZ, wave, Platform, Platform.WaveLoads);
% ====== 新增这行：强制将行向量转换为 6x1 的列向量，以匹配 MEX 文件的接口 ======
f_Morison = f_Morison(:);

%% Get the nominal system matrixes
WindNom.velocity = zeros(3,31,31);

qr = {t, [1 2 3], Wind.y, Wind.z};
WindNom.velocity(:) = Wind.Velocity(qr);

% [IM_nom, f_nom, Controls] = NominalSystemMatrix_mex(q_Nom, Controls, ElastoDyn, Airfoils, Twr, Bld, Platform, WindNom, mooring_load, f_Morison);

%[IM_nom, f_nom, Controls] = NominalSystemMatrix(q_Nom, Controls, ElastoDyn, Airfoils, Twr, Bld, Platform, WindNom, mooring_load, f_Morison);
[IM_nom, f_nom, Controls] = NominalSystemMatrix_mex(q_Nom, Controls, ElastoDyn, Airfoils, Twr, Bld, Platform, WindNom, mooring_load, f_Morison);
%% Assemble Initial Inertia matrix and force vector
IM = zeros(DOFs.Avail,DOFs.Avail);
f  = zeros(DOFs.Avail,1);

IM(1:22+12,1:22+12) = IM_nom;
f(1:22+12,1)     = f_nom;

IM = IM(DOFs.Active,DOFs.Active);

f = f(DOFs.Active);

end
