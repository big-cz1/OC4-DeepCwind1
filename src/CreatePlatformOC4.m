function Platform = CreatePlatformOC4()
    % OC4 平台几何与柔性参数初始化 (双向弯曲模态版)
    % 采用 Kane 方法所需的预积分格式
    
    global FLUIDDENSITY;
    if isempty(FLUIDDENSITY), FLUIDDENSITY = 1025; end
    
    %% 1. 中心刚体参数 (主立柱)
    Platform.MainCol.Dia = 6.5; 
    Platform.MainCol.Draft = 20.0;
    
    % --- 新增：兼容老版 Morisons.m 的主立柱水动力切片参数 ---
    Platform.nStrips = 100;
    Platform.StripWidth = Platform.MainCol.Draft / Platform.nStrips;
    Platform.StripDepths = linspace(0, Platform.MainCol.Draft, Platform.nStrips);
    Platform.StripDia = ones(1, Platform.nStrips) * Platform.MainCol.Dia;
    % 附加质量矩阵 (暂时给全零，因为 OC4 附加质量我们已在系统矩阵中通过极化分布质量考虑了)
    Platform.AM = zeros(6,6);
    
    %% 2. 侧向柔性横梁 (通用单根浮筒属性)
    Platform.nBeams = 3;
    % 根据 OC4 官方定义文件，浮筒中心距为 28.867m
    Platform.BeamLen = 28.867; 
    Platform.Angles = [0+60, 120+60, 240+60] * pi/180; % 在全局 XY 平面的安装角
    
    Platform.nt = 15; % 离散节点数
    Platform.BeamSec = linspace(0, Platform.BeamLen, Platform.nt)';
    
    % --- 质量分布计算 ---
    Target_Struct_Mass = 87644; 
    m_struct = Target_Struct_Mass / Platform.BeamLen; % 结构线质量
    
    % 附加质量计算 (水平向与垂向)
    D_hydro = 1.6; 
    Area_disp = pi * (D_hydro/2)^2;
    Ca_V = 1.0; 
    Ca_H = 0.63; 
    m_add_V = FLUIDDENSITY * Ca_V * Area_disp;
    m_add_H = FLUIDDENSITY * Ca_H * Area_disp;
    
    % 生成湿质量分布数组
    dm_V = ones(Platform.nt, 1) * (m_struct + m_add_V); 
    dm_H = ones(Platform.nt, 1) * (m_struct + m_add_H); 
    % 【重要修改】明确导出纯结构质量和附加质量张量 (强制转换为 1 x 1 x nt 的 3D 张量)
    Platform.dm_struct = reshape(ones(Platform.nt, 1) * m_struct, 1, 1, Platform.nt);
    Platform.dm_add_V  = reshape(ones(Platform.nt, 1) * m_add_V, 1, 1, Platform.nt);
    Platform.dm_add_H  = reshape(ones(Platform.nt, 1) * m_add_H, 1, 1, Platform.nt);

    % --- 模态振型定义 ---
    % 将升幂系数转换为 MATLAB polyval 所需的降幂系数
    Coeffs_V1_asc = [0, 0,  0.7004,   2.1963,  -5.6202,   6.2275,  -2.504];
    Coeffs_V2_asc = [0, 0, -70.5319, -63.7623, 289.737, -176.513,  22.0706];
    Coeffs_H1_asc = [0, 0,  1.385,   -1.7684,   3.0871,  -2.2395,   0.5357];
    Coeffs_H2_asc = [0, 0, -121.21,  184.415, -224.904,  298.536, -135.838];
    
    Mode_V1 = fliplr(Coeffs_V1_asc);
    Mode_V2 = fliplr(Coeffs_V2_asc);
    Mode_H1 = fliplr(Coeffs_H1_asc);
    Mode_H2 = fliplr(Coeffs_H2_asc);
    
    % 将归一化系数 (x/L) 转换为绝对坐标系下的多项式系数，以适配 polyder/polyint
    deg = length(Mode_V1) - 1;
    for i = 1:length(Mode_V1)
        power = deg - (i - 1);
        Mode_V1(i) = Mode_V1(i) / (Platform.BeamLen^power);
        Mode_V2(i) = Mode_V2(i) / (Platform.BeamLen^power);
        Mode_H1(i) = Mode_H1(i) / (Platform.BeamLen^power);
        Mode_H2(i) = Mode_H2(i) / (Platform.BeamLen^power);
    end
    
    % --- 求解运动学预积分项 ---
    % 1. 节点位移 (3D 张量形式，适配 coprod 函数)
    Platform.O1_V = reshape(polyval(Mode_V1, Platform.BeamSec), 1, 1, Platform.nt);
    Platform.O2_V = reshape(polyval(Mode_V2, Platform.BeamSec), 1, 1, Platform.nt);
    Platform.O1_H = reshape(polyval(Mode_H1, Platform.BeamSec), 1, 1, Platform.nt);
    Platform.O2_H = reshape(polyval(Mode_H2, Platform.BeamSec), 1, 1, Platform.nt);
    
    % 计算导数
    dMode_V1 = polyder(Mode_V1); dMode_V2 = polyder(Mode_V2);
    dMode_H1 = polyder(Mode_H1); dMode_H2 = polyder(Mode_H2);
    
    % 2. 轴向缩短效应 (Foreshortening) 积分 s_ij 和端部总缩短 S_ij
    Platform.s11_V = reshape(polyval(polyint(conv(dMode_V1, dMode_V1)), Platform.BeamSec), 1, 1, Platform.nt);
    Platform.s12_V = reshape(polyval(polyint(conv(dMode_V1, dMode_V2)), Platform.BeamSec), 1, 1, Platform.nt);
    Platform.s22_V = reshape(polyval(polyint(conv(dMode_V2, dMode_V2)), Platform.BeamSec), 1, 1, Platform.nt);
    
    Platform.S11_V = polyval(polyint(conv(dMode_V1, dMode_V1)), Platform.BeamLen);
    Platform.S12_V = polyval(polyint(conv(dMode_V1, dMode_V2)), Platform.BeamLen);
    Platform.S22_V = polyval(polyint(conv(dMode_V2, dMode_V2)), Platform.BeamLen);
    
    Platform.s11_H = reshape(polyval(polyint(conv(dMode_H1, dMode_H1)), Platform.BeamSec), 1, 1, Platform.nt);
    Platform.s12_H = reshape(polyval(polyint(conv(dMode_H1, dMode_H2)), Platform.BeamSec), 1, 1, Platform.nt);
    Platform.s22_H = reshape(polyval(polyint(conv(dMode_H2, dMode_H2)), Platform.BeamSec), 1, 1, Platform.nt);
    
    Platform.S11_H = polyval(polyint(conv(dMode_H1, dMode_H1)), Platform.BeamLen);
    Platform.S12_H = polyval(polyint(conv(dMode_H1, dMode_H2)), Platform.BeamLen);
    Platform.S22_H = polyval(polyint(conv(dMode_H2, dMode_H2)), Platform.BeamLen);
    
    % 3. 端部转角 (Slope at tip)
    Platform.dO1_V = polyval(dMode_V1, Platform.BeamLen);
    Platform.dO2_V = polyval(dMode_V2, Platform.BeamLen);
    Platform.dO1_H = polyval(dMode_H1, Platform.BeamLen);
    Platform.dO2_H = polyval(dMode_H2, Platform.BeamLen);
    
    % --- 计算模态广义质量 ---
    Platform.M11_V = trapz(Platform.BeamSec, dm_V .* polyval(conv(Mode_V1, Mode_V1), Platform.BeamSec));
    Platform.M22_V = trapz(Platform.BeamSec, dm_V .* polyval(conv(Mode_V2, Mode_V2), Platform.BeamSec));
    Platform.M11_H = trapz(Platform.BeamSec, dm_H .* polyval(conv(Mode_H1, Mode_H1), Platform.BeamSec));
    Platform.M22_H = trapz(Platform.BeamSec, dm_H .* polyval(conv(Mode_H2, Mode_H2), Platform.BeamSec));
    
    % --- 计算模态广义刚度 ---
    f_V1 = 0.8; f_V2 = 2.5; 
    f_H1 = 0.9; f_H2 = 3.0; 
    
    Platform.K11_V = (2*pi*f_V1)^2 * Platform.M11_V;
    Platform.K22_V = (2*pi*f_V2)^2 * Platform.M22_V;
    Platform.K11_H = (2*pi*f_H1)^2 * Platform.M11_H;
    Platform.K22_H = (2*pi*f_H2)^2 * Platform.M22_H;
    
    % 模态阻尼比
    Platform.zeta1_V = 0.015; Platform.zeta2_V = 0.015;
    Platform.zeta1_H = 0.015; Platform.zeta2_H = 0.015;
    
    % 将线质量重塑为张量形式，供 NominalSystemMatrix 积分使用
    Platform.dm_V = reshape(dm_V, 1, 1, Platform.nt);
    Platform.dm_H = reshape(dm_H, 1, 1, Platform.nt);
    
    %% 3. 梁端部集中质量 (侧柱 + 垂荡板)
    Total_OC4_Mass = 1.3473e7;
    M_Main = 1.51e5;
    % 计算单根侧柱的纯结构质量
    M_Tip_Struct = (Total_OC4_Mass - M_Main - 3 * Target_Struct_Mass) / 3;
    
    Vol_Upper = pi * (12/2)^2 * 26;
    Vol_Base  = pi * (24/2)^2 * 6; 
    Ca_global = 0.63;
    
    AM_Tip_H = FLUIDDENSITY * Ca_global * (Vol_Base + Vol_Upper); 
    AM_Tip_V = 14.70e6 / 3; 
    
    % 【重要修改】分别导出结构质量与附加质量，并计算附加部分总质量
    Platform.Target_Struct_Mass = Target_Struct_Mass;
    Platform.M_Tip_Struct = M_Tip_Struct;
    Platform.AM_Tip_V = AM_Tip_V;
    Platform.AM_Tip_H = AM_Tip_H;

    % 汇总需要从总刚体中剥离的"附属体总结构质量"
    Platform.Total_Appendage_Mass = 3 * (Target_Struct_Mass + M_Tip_Struct);

    Platform.TipMass_V = M_Tip_Struct + AM_Tip_V; 
    Platform.TipMass_H = M_Tip_Struct + AM_Tip_H; 
    Platform.TipInertia = diag([3e8, 3e8, 1e8]); 

    %% 4. 计算包含端部质量的总模态广义质量 & 广义刚度
    O1_V_tip = polyval(Mode_V1, Platform.BeamLen);
    O2_V_tip = polyval(Mode_V2, Platform.BeamLen);
    O1_H_tip = polyval(Mode_H1, Platform.BeamLen);
    O2_H_tip = polyval(Mode_H2, Platform.BeamLen);

    % 总广义质量 = 梁分布质量积分 + 端部集中质量项
    Platform.M11_V_tot = Platform.M11_V + O1_V_tip^2 * Platform.TipMass_V;
    Platform.M22_V_tot = Platform.M22_V + O2_V_tip^2 * Platform.TipMass_V;
    Platform.M11_H_tot = Platform.M11_H + O1_H_tip^2 * Platform.TipMass_H;
    Platform.M22_H_tot = Platform.M22_H + O2_H_tip^2 * Platform.TipMass_H;
    
    % 使用总质量反推广义刚度
    f_V1 = 0.8; f_V2 = 2.5; 
    f_H1 = 0.9; f_H2 = 3.0; 
    
    Platform.K11_V = (2*pi*f_V1)^2 * Platform.M11_V_tot;
    Platform.K22_V = (2*pi*f_V2)^2 * Platform.M22_V_tot;
    Platform.K11_H = (2*pi*f_H1)^2 * Platform.M11_H_tot;
    Platform.K22_H = (2*pi*f_H2)^2 * Platform.M22_H_tot;
    
    % 模态阻尼比
    Platform.zeta1_V = 0.015; Platform.zeta2_V = 0.015;
    Platform.zeta1_H = 0.015; Platform.zeta2_H = 0.015;
end