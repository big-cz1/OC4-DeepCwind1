function [Z, A, D, C, E, J1, J2, J3, NB1, NB2, NB3, MB1, MB2, MB3, BP1, BP2, BP3, TP1, TP2, TP3, rP1, rP2, rP3, rP1_tip, rP2_tip, rP3_tip] = Coordinate_systems(q_Nom, BlPitch, ElastoDyn, Twr, Bld, Platform)
PreCone = ElastoDyn.PreCone;
ShftTilt = ElastoDyn.ShftTilt;
dO1_B1 = Bld.dO1_B1;
dO2_B1 = Bld.dO2_B1;
dO3_B1 = Bld.dO3_B1;
dW1_B1 = Bld.dW1_B1;
dW2_B1 = Bld.dW2_B1;
dW3_B1 = Bld.dW3_B1;
Twist = Bld.Twist;
dO1_TFA = Twr.dO1_TFA;
dO1_TSS = Twr.dO1_TSS;
dO2_TFA = Twr.dO2_TFA;
dO2_TSS = Twr.dO2_TSS;

% dO1_V = Platform.dO1_V;
% dO2_V = Platform.dO2_V;
% dO1_H = Platform.dO1_H;
% dO2_H = Platform.dO2_H;

dO1_B2 = dO1_B1; dO2_B2 = dO2_B1; dO3_B2 = dO3_B1; dW1_B2 = dW1_B1; dW2_B2 = dW2_B1; dW3_B2 = dW3_B1;
dO1_B3 = dO1_B1; dO2_B3 = dO2_B1; dO3_B3 = dO3_B1; dW1_B3 = dW1_B1; dW2_B3 = dW2_B1; dW3_B3 = dW3_B1;

%% Dofs
% q_Sg   = q_Nom(1);
% q_Sw   = q_Nom(2);
% q_Hv   = q_Nom(3);
q_R    = q_Nom(4);
q_P    = q_Nom(5);
q_Y    = q_Nom(6);
q_TFA1 = q_Nom(7);
q_TSS1 = q_Nom(8);
q_TFA2 = q_Nom(9);
q_TSS2 = q_Nom(10);
q_yaw  = q_Nom(11);
q_GeAz = q_Nom(12);
q_DrTr = q_Nom(13);
q_B1F1 = q_Nom(14);
q_B1E1 = q_Nom(15);
q_B1F2 = q_Nom(16);
q_B2F1 = q_Nom(17);
q_B2E1 = q_Nom(18);
q_B2F2 = q_Nom(19);
q_B3F1 = q_Nom(20);
q_B3E1 = q_Nom(21);
q_B3F2 = q_Nom(22);
% --- 提取 OC4 平台新增的 12 个柔性位移自由度 ---
% 紧跟在叶片自由度 q_B3F2 (索引 22) 之后
q_P1H1 = q_Nom(23);
q_P1H2 = q_Nom(24);
q_P1V1 = q_Nom(25);
q_P1V2 = q_Nom(26);
q_P2H1 = q_Nom(27);
q_P2H2 = q_Nom(28);
q_P2V1 = q_Nom(29);
q_P2V2 = q_Nom(30);
q_P3H1 = q_Nom(31);
q_P3H2 = q_Nom(32);
q_P3V1 = q_Nom(33);
q_P3V2 = q_Nom(34);

% qd_Sg   = q_Nom(23+12);
% qd_Sw   = q_Nom(24);
% qd_Hv   = q_Nom(25);
% qd_R    = q_Nom(26);
% qd_P    = q_Nom(27);
% qd_Y    = q_Nom(28);
% qd_TFA1 = q_Nom(29);
% qd_TSS1 = q_Nom(30);
% qd_TFA2 = q_Nom(31);
% qd_TSS2 = q_Nom(32);
% qd_yaw  = q_Nom(33);
% qd_GeAz = q_Nom(34);
% qd_DrTr = q_Nom(35);
% qd_B1F1 = q_Nom(36);
% qd_B1E1 = q_Nom(37);
% qd_B1F2 = q_Nom(38);
% qd_B2F1 = q_Nom(39);
% qd_B2E1 = q_Nom(40);
% qd_B2F2 = q_Nom(41);
% qd_B3F1 = q_Nom(42);
% qd_B3E1 = q_Nom(43);
% qd_B3F2 = q_Nom(44);
% end of Update state

Z = eye(3);                                                                 % Inertial/Earth coordinate system

A = Transform1(FASTTransMat(q_R, q_Y, -q_P), Z);                                             % Tower coordinate system

theta_FA = -dO1_TFA*q_TFA1 - dO2_TFA*q_TFA2;
theta_SS =  dO1_TSS*q_TSS1 + dO2_TSS*q_TSS2;

B = Transform1(FASTTransMat(theta_SS, 0, theta_FA),A);                                      % Tower top/ Base plate coordinate system

D = Transform1([cos(q_yaw), 0, -sin(q_yaw); 0 1 0; sin(q_yaw) 0 cos(q_yaw)],B);         % Nacelle coordinate system
ShftSkew = 0;

C = Transform1([cos(ShftSkew)*cos(ShftTilt), sin(ShftTilt), -sin(ShftSkew)*cos(ShftTilt);                            % Shaft coordinate system
    -cos(ShftSkew)*sin(ShftTilt), cos(ShftTilt),  sin(ShftSkew)*sin(ShftTilt);
     sin(ShftSkew),                     0,         cos(ShftSkew)],D);

E = Transform1([1, 0, 0; 0, cos(q_DrTr+q_GeAz), sin(q_DrTr+q_GeAz);                   % Azimuth coordinate system
      0, -sin(q_DrTr+q_GeAz), cos(q_DrTr+q_GeAz)],C);

G1 = Transform1([1, 0, 0; 0, cos(-pi/2), sin(-pi/2);                                    % Coordinate system for blade 1
      0, -sin(-pi/2), cos(-pi/2)],E);

G2 = Transform1([1, 0, 0; 0, cos(-pi/2 + 2*pi/3), sin(-pi/2 + 2*pi/3);                  % Coordinate system for blade 1
      0, -sin(-pi/2 + 2*pi/3), cos(-pi/2 + 2*pi/3)],E);

G3 = Transform1([1, 0, 0; 0, cos(-pi/2 + 4*pi/3), sin(-pi/2 + 4*pi/3);                  % Coordinate system for blade 1
      0, -sin(-pi/2 + 4*pi/3), cos(-pi/2 + 4*pi/3)],E);

I1 = Transform1([cos(PreCone(1)), 0, -sin(PreCone(1));
            0,         1,       0;                                          % Coned coordinate system for blade 1
      sin(PreCone(1)), 0, cos(PreCone(1))],G1);

I2 = Transform1([cos(PreCone(2)), 0, -sin(PreCone(2));
            0,         1,       0;                                          % Coned coordinate system for blade 1
      sin(PreCone(2)), 0, cos(PreCone(2))],G2);

I3 = Transform1([cos(PreCone(3)), 0, -sin(PreCone(3));
            0,         1,       0;                                          % Coned coordinate system for blade 1
      sin(PreCone(3)), 0, cos(PreCone(3))],G3);

J1 = Transform1([cos(BlPitch(1)), -sin(BlPitch(1)), 0;                                 % Pitched coordinate system for blade 1
      sin(BlPitch(1)),  cos(BlPitch(1)), 0;
            0,                 0,        1],I1);
        
J2 = Transform1([cos(BlPitch(2)), -sin(BlPitch(2)), 0;                                 % Pitched coordinate system for blade 1
                 sin(BlPitch(2)),  cos(BlPitch(2)), 0;
                       0,                 0,        1],I2);
        
J3 = Transform1([cos(BlPitch(3)), -sin(BlPitch(3)), 0;                                 % Pitched coordinate system for blade 1
      sin(BlPitch(3)),  cos(BlPitch(3)), 0;
            0,                 0,        1],I3);
nb = Bld.nb;
Twist = reshape(Twist,1,1,nb);

LB1 = Transform2([cos(Twist), -sin(Twist), zeros(1,1,nb);
                   sin(Twist),  cos(Twist), zeros(1,1,nb);
               zeros(1,1,nb), zeros(1,1,nb), ones(1,1,nb)],J1);
           
LB2 = Transform2([cos(Twist), -sin(Twist), zeros(1,1,nb);
                   sin(Twist),  cos(Twist), zeros(1,1,nb);
               zeros(1,1,nb), zeros(1,1,nb), ones(1,1,nb)],J2);
           
LB3 = Transform2([cos(Twist), -sin(Twist), zeros(1,1,nb);
                   sin(Twist),  cos(Twist), zeros(1,1,nb);
               zeros(1,1,nb), zeros(1,1,nb), ones(1,1,nb)],J3);
   
% Blade Element Fixed Coordinate System

thetaB1_IP  = -(dW1_B1*q_B1F1 + dW2_B1*q_B1F2 + dW3_B1*q_B1E1);
thetaB1_Oop =  (dO1_B1*q_B1F1 + dO2_B1*q_B1F2 + dO3_B1*q_B1E1);

thetaB1_x = cos(Twist).*thetaB1_IP - sin(Twist).*thetaB1_Oop;
thetaB1_y = sin(Twist).*thetaB1_IP + cos(Twist).*thetaB1_Oop;

thetaB2_IP  = -(dW1_B2*q_B2F1 + dW2_B2*q_B2F2 + dW3_B2*q_B2E1);
thetaB2_Oop =  (dO1_B2*q_B2F1 + dO2_B2*q_B2F2 + dO3_B2*q_B2E1);

thetaB2_x = cos(Twist).*thetaB2_IP - sin(Twist).*thetaB2_Oop;
thetaB2_y = sin(Twist).*thetaB2_IP + cos(Twist).*thetaB2_Oop;

thetaB3_IP  = -(dW1_B3*q_B3F1 + dW2_B3*q_B3F2 + dW3_B3*q_B3E1);
thetaB3_Oop =  (dO1_B3*q_B3F1 + dO2_B3*q_B3F2 + dO3_B3*q_B3E1);

thetaB3_x = cos(Twist).*thetaB3_IP - sin(Twist).*thetaB3_Oop;
thetaB3_y = sin(Twist).*thetaB3_IP + cos(Twist).*thetaB3_Oop;

NB1 = Transform3(FASTTransMat(thetaB1_x, thetaB1_y, zeros(1,1,nb)),LB1);    % FASTTransMat must return a 3D matrix for vectors thetaB1_x and thetaB1_y
NB2 = Transform3(FASTTransMat(thetaB2_x, thetaB2_y, zeros(1,1,nb)),LB2);
NB3 = Transform3(FASTTransMat(thetaB3_x, thetaB3_y, zeros(1,1,nb)),LB3);

% Blade Element Fixed Coordinate System for Returning Aerodynamic Loads

MB1 = Transform3([cos(Twist + BlPitch(1)),  sin(Twist + BlPitch(1)), zeros(1,1,nb) ;
                  -sin(Twist + BlPitch(1)),  cos(Twist + BlPitch(1)), zeros(1,1,nb);
                   zeros(1,1,nb),        zeros(1,1,nb),     ones(1,1,nb)],NB1);
       
MB2 = Transform3([cos(Twist + BlPitch(2)),  sin(Twist + BlPitch(2)), zeros(1,1,nb) ;
                  -sin(Twist + BlPitch(2)),  cos(Twist + BlPitch(2)), zeros(1,1,nb);
                   zeros(1,1,nb),        zeros(1,1,nb),     ones(1,1,nb)],NB2);
       
MB3 = Transform3([cos(Twist + BlPitch(3)),  sin(Twist + BlPitch(3)), zeros(1,1,nb) ;
                  -sin(Twist + BlPitch(3)),  cos(Twist + BlPitch(3)), zeros(1,1,nb);
                   zeros(1,1,nb),        zeros(1,1,nb),     ones(1,1,nb)],NB3);

% ================== OC4 浮筒柔性坐标系统与位置向量 ==================
% 注意：此代码段需确保 Coordinate_systems 函数的输入参数中加入了 Platform 结构体
% 也就是：function [Z, A, ..., TP1, TP2, TP3, rP1, rP2, rP3, rP1_tip, rP2_tip, rP3_tip] = Coordinate_systems(q_Nom, BlPitch, ElastoDyn, Twr, Bld, Platform)

% 1. 定义三根浮筒的无变形基准坐标系 (随平台 A 运动，安装角分别为 0, 120, 240 度)
Ang1 = Platform.Angles(1);
Ang2 = Platform.Angles(2);
Ang3 = Platform.Angles(3);

% 构建新的旋转矩阵：
% BP(1,:) 在 A(1) 和 A(3) 构成的水平面内径向向外
% BP(2,:) 在 A(1) 和 A(3) 构成的水平面内横向切向
% BP(3,:) 强制对齐 A(2,:) 垂直向上
RotMat1 = [cos(Ang1), 0,  sin(Ang1);
           sin(Ang1), 0, -cos(Ang1);
           0,         1,  0        ];
BP1 = Transform1(RotMat1, A);

RotMat2 = [cos(Ang2), 0,  sin(Ang2);
           sin(Ang2), 0, -cos(Ang2);
           0,         1,  0        ];
BP2 = Transform1(RotMat2, A);

RotMat3 = [cos(Ang3), 0,  sin(Ang3);
           sin(Ang3), 0, -cos(Ang3);
           0,         1,  0        ];
BP3 = Transform1(RotMat3, A);

% 假设浮筒从吃水深度处水平向外延伸 (局部坐标根部位置)
rP_root = -Platform.MainCol.Draft * A(2,:); % 相对于平台参考点 rZ 的局部向量

% 2. 三根浮筒各节点的位置向量 (3D 张量形式，用于后续分布水动力和质量积分)
% -- 梁 1 --
% 局部 X 向：包含悬臂梁弯曲引起的轴向缩短效应 (Foreshortening)
rP1_X = reshape(Platform.BeamSec, 1, 1, Platform.nt) ...
        - 0.5*(Platform.s11_V*q_P1V1^2 + Platform.s22_V*q_P1V2^2 + 2*Platform.s12_V*q_P1V1*q_P1V2 ...
             + Platform.s11_H*q_P1H1^2 + Platform.s22_H*q_P1H2^2 + 2*Platform.s12_H*q_P1H1*q_P1H2);
% 局部 Y 向和 Z 向：直接由模态乘以广义坐标得到
rP1_Y = Platform.O1_H*q_P1H1 + Platform.O2_H*q_P1H2;
rP1_Z = Platform.O1_V*q_P1V1 + Platform.O2_V*q_P1V2;
% 组合成全局坐标系下的绝对位置 (repmat 拓展维度以匹配)
rP1 = repmat(rP_root, 1, 1, Platform.nt) + coprod(rP1_X, BP1(1,:)) + coprod(rP1_Y, BP1(2,:)) + coprod(rP1_Z, BP1(3,:));

% -- 梁 2 --
rP2_X = reshape(Platform.BeamSec, 1, 1, Platform.nt) ...
        - 0.5*(Platform.s11_V*q_P2V1^2 + Platform.s22_V*q_P2V2^2 + 2*Platform.s12_V*q_P2V1*q_P2V2 ...
             + Platform.s11_H*q_P2H1^2 + Platform.s22_H*q_P2H2^2 + 2*Platform.s12_H*q_P2H1*q_P2H2);
rP2_Y = Platform.O1_H*q_P2H1 + Platform.O2_H*q_P2H2;
rP2_Z = Platform.O1_V*q_P2V1 + Platform.O2_V*q_P2V2;
rP2 = repmat(rP_root, 1, 1, Platform.nt) + coprod(rP2_X, BP2(1,:)) + coprod(rP2_Y, BP2(2,:)) + coprod(rP2_Z, BP2(3,:));

% -- 梁 3 --
rP3_X = reshape(Platform.BeamSec, 1, 1, Platform.nt) ...
        - 0.5*(Platform.s11_V*q_P3V1^2 + Platform.s22_V*q_P3V2^2 + 2*Platform.s12_V*q_P3V1*q_P3V2 ...
             + Platform.s11_H*q_P3H1^2 + Platform.s22_H*q_P3H2^2 + 2*Platform.s12_H*q_P3H1*q_P3H2);
rP3_Y = Platform.O1_H*q_P3H1 + Platform.O2_H*q_P3H2;
rP3_Z = Platform.O1_V*q_P3V1 + Platform.O2_V*q_P3V2;
rP3 = repmat(rP_root, 1, 1, Platform.nt) + coprod(rP3_X, BP3(1,:)) + coprod(rP3_Y, BP3(2,:)) + coprod(rP3_Z, BP3(3,:));

% 3. 端部偏置立柱 (集中质量) 的位置向量 (直接提取端点数据)
O1_H_tip = Platform.O1_H(end); O2_H_tip = Platform.O2_H(end);
O1_V_tip = Platform.O1_V(end); O2_V_tip = Platform.O2_V(end);

rP1_tip_X = Platform.BeamLen - 0.5*(Platform.S11_V*q_P1V1^2 + Platform.S22_V*q_P1V2^2 + 2*Platform.S12_V*q_P1V1*q_P1V2 ...
                                  + Platform.S11_H*q_P1H1^2 + Platform.S22_H*q_P1H2^2 + 2*Platform.S12_H*q_P1H1*q_P1H2);
rP1_tip = rP_root + rP1_tip_X*BP1(1,:) + (O1_H_tip*q_P1H1 + O2_H_tip*q_P1H2)*BP1(2,:) + (O1_V_tip*q_P1V1 + O2_V_tip*q_P1V2)*BP1(3,:);

rP2_tip_X = Platform.BeamLen - 0.5*(Platform.S11_V*q_P2V1^2 + Platform.S22_V*q_P2V2^2 + 2*Platform.S12_V*q_P2V1*q_P2V2 ...
                                  + Platform.S11_H*q_P2H1^2 + Platform.S22_H*q_P2H2^2 + 2*Platform.S12_H*q_P2H1*q_P2H2);
rP2_tip = rP_root + rP2_tip_X*BP2(1,:) + (O1_H_tip*q_P2H1 + O2_H_tip*q_P2H2)*BP2(2,:) + (O1_V_tip*q_P2V1 + O2_V_tip*q_P2V2)*BP2(3,:);

rP3_tip_X = Platform.BeamLen - 0.5*(Platform.S11_V*q_P3V1^2 + Platform.S22_V*q_P3V2^2 + 2*Platform.S12_V*q_P3V1*q_P3V2 ...
                                  + Platform.S11_H*q_P3H1^2 + Platform.S22_H*q_P3H2^2 + 2*Platform.S12_H*q_P3H1*q_P3H2);
rP3_tip = rP_root + rP3_tip_X*BP3(1,:) + (O1_H_tip*q_P3H1 + O2_H_tip*q_P3H2)*BP3(2,:) + (O1_V_tip*q_P3V1 + O2_V_tip*q_P3V2)*BP3(3,:);

% 4. 端部偏置立柱的旋转坐标系矩阵
% 绕局部 Y 轴产生垂向弯曲转角 (负号是因为沿X向的正变形会导致负Y向旋转)
% 绕局部 Z 轴产生水平弯曲转角
thetaP1_y = -(Platform.dO1_V*q_P1V1 + Platform.dO2_V*q_P1V2);
thetaP1_z =   Platform.dO1_H*q_P1H1 + Platform.dO2_H*q_P1H2;
TP1 = Transform1(FASTTransMat(0, thetaP1_y, thetaP1_z), BP1);

thetaP2_y = -(Platform.dO1_V*q_P2V1 + Platform.dO2_V*q_P2V2);
thetaP2_z =   Platform.dO1_H*q_P2H1 + Platform.dO2_H*q_P2H2;
TP2 = Transform1(FASTTransMat(0, thetaP2_y, thetaP2_z), BP2);

thetaP3_y = -(Platform.dO1_V*q_P3V1 + Platform.dO2_V*q_P3V2);
thetaP3_z =   Platform.dO1_H*q_P3H1 + Platform.dO2_H*q_P3H2;
TP3 = Transform1(FASTTransMat(0, thetaP3_y, thetaP3_z), BP3);
% =================================================================
end

