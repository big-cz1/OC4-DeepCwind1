function AnimateOC4_Vibration(t, q, Platform, ampFactor, skipFrames)
    % OC4 半潜式平台双视角振动动画演示
    % 输入:
    %   t          - 时间向量
    %   q          - 状态变量矩阵 (每行是一个时间步，列是自由度)
    %   Platform   - CreatePlatformOC4 输出的结构体
    %   ampFactor  - 柔性振动放大系数 (建议设为 20~50)
    %   skipFrames - 跳帧数 (用于加速渲染，建议设为 5~10)

    if nargin < 4, ampFactor = 50; end
    if nargin < 5, skipFrames = 10; end

    % --- 1. 提取基础参数 ---
    nt = Platform.nt;
    BeamSec = squeeze(Platform.BeamSec);
    Draft = Platform.MainCol.Draft; % 20m
    
    O1_H = squeeze(Platform.O1_H);
    O2_H = squeeze(Platform.O2_H);
    O1_V = squeeze(Platform.O1_V);
    O2_V = squeeze(Platform.O2_V);
    
    % 端部偏置柱的高度 (由 -14m 到 +12m，总长 26m)
    OffsetCol_Length = 26+6; 

    % --- 2. 初始化图形窗口 ---
    fig = figure('Name', 'OC4 Platform Vibration', 'Position', [100, 100, 1400, 600], 'Color', 'w');
    
    % 子图 1: 固定坐标系 (Global Frame)
    ax1 = subplot(1, 2, 1); hold(ax1, 'on'); grid(ax1, 'on'); view(ax1, 3);
    title(ax1, '固定坐标系 (Global Frame) - 刚弹耦合运动', 'FontSize', 14);
    xlabel(ax1, 'Surge/X (m)'); ylabel(ax1, 'Sway/Y (m)'); zlabel(ax1, 'Heave/Z (m)');
    axis(ax1, 'equal'); xlim(ax1, [-60 60]); ylim(ax1, [-60 60]); zlim(ax1, [-40 40]);
    % 画海平面
    patch(ax1, [-60 60 60 -60], [-60 -60 60 60], [0 0 0 0], 'b', 'FaceAlpha', 0.1, 'EdgeColor', 'none');

    % 子图 2: 塔基/平台局部坐标系 (Local Frame)
    ax2 = subplot(1, 2, 2); hold(ax2, 'on'); grid(ax2, 'on'); view(ax2, 3);
    title(ax2, sprintf('塔基坐标系 (Local Frame) - 柔性振动放大 %dX', ampFactor), 'FontSize', 14);
    xlabel(ax2, 'X_A (m)'); ylabel(ax2, 'Y_A (m)'); zlabel(ax2, 'Z_A (m)');
    axis(ax2, 'equal'); xlim(ax2, [-40 40]); ylim(ax2, [-40 40]); zlim(ax2, [-30 30]);
    
    % 图形对象句柄预分配
    h_Global = gobjects(7, 1); % 主柱(1) + 浮筒(3) + 端柱(3)
    h_Local  = gobjects(7, 1);

    % --- 3. 动画主循环 ---
    for i = 1:skipFrames:length(t)
        % 清除上一帧的结构线
        delete(h_Global(isgraphics(h_Global)));
        delete(h_Local(isgraphics(h_Local)));
        
        % 提取当前时刻刚体自由度 (请根据你的 q 矩阵实际排布核对索引，通常 1-6 为平台刚体)
        Sg = q(i, 1); Sw = q(i, 2); Hv = q(i, 3);
        R  = q(i, 4); P  = q(i, 5); Y  = q(i, 6);
        
        % 提取并放大当前时刻柔性自由度 (索引 23-34)
        qF = q(i, 23:34) * ampFactor; 
        
        % --- 计算局部坐标系下节点的 3D 坐标 ---
        % (Z轴垂直向上, X轴向前, Y轴向左)
        [Nodes1_L, Tip1_L] = CalcBeamNodes(qF(1:4), BeamSec, O1_H, O2_H, O1_V, O2_V, Platform.Angles(1), Draft, OffsetCol_Length);
        [Nodes2_L, Tip2_L] = CalcBeamNodes(qF(5:8), BeamSec, O1_H, O2_H, O1_V, O2_V, Platform.Angles(2), Draft, OffsetCol_Length);
        [Nodes3_L, Tip3_L] = CalcBeamNodes(qF(9:12), BeamSec, O1_H, O2_H, O1_V, O2_V, Platform.Angles(3), Draft, OffsetCol_Length);
        MainCol_L = [0 0 0; 0 0 -Draft]; % 主立柱
        
        % 绘制子图 2 (局部坐标系 - 纯振动)
        h_Local = DrawPlatform(ax2, MainCol_L, Nodes1_L, Nodes2_L, Nodes3_L, Tip1_L, Tip2_L, Tip3_L);
        
        % --- 计算全局坐标系下节点的 3D 坐标 ---
        % 欧拉角旋转矩阵 (Yaw-Pitch-Roll)
        Rx = [1 0 0; 0 cos(R) -sin(R); 0 sin(R) cos(R)];
        Ry = [cos(P) 0 sin(P); 0 1 0; -sin(P) 0 cos(P)];
        Rz = [cos(Y) -sin(Y) 0; sin(Y) cos(Y) 0; 0 0 1];
        RotMat = Rz * Ry * Rx;
        PosVec = [Sg, Sw, Hv];
        
        % 映射到全局坐标
        MainCol_G = (RotMat * MainCol_L')' + PosVec;
        Nodes1_G  = (RotMat * Nodes1_L')'  + PosVec;
        Nodes2_G  = (RotMat * Nodes2_L')'  + PosVec;
        Nodes3_G  = (RotMat * Nodes3_L')'  + PosVec;
        Tip1_G    = (RotMat * Tip1_L')'    + PosVec;
        Tip2_G    = (RotMat * Tip2_L')'    + PosVec;
        Tip3_G    = (RotMat * Tip3_L')'    + PosVec;
        
        % 绘制子图 1 (全局坐标系 - 包含刚体运动)
        h_Global = DrawPlatform(ax1, MainCol_G, Nodes1_G, Nodes2_G, Nodes3_G, Tip1_G, Tip2_G, Tip3_G);
        
        sgtitle(fig, sprintf('Time: %.2f s', t(i)), 'FontSize', 16, 'FontWeight', 'bold');
        drawnow;
    end
end

% ====== 辅助函数：计算局部坐标系下的节点位置 ======
function [Nodes, TipCol] = CalcBeamNodes(qF_beam, Sec, O1_H, O2_H, O1_V, O2_V, Angle, Draft, TipLen)
    % 提取单根梁的 4 个模态坐标
    qH1 = qF_beam(1); qH2 = qF_beam(2);
    qV1 = qF_beam(3); qV2 = qF_beam(4);
    
    % 本地坐标系变形 (忽略微小的缩短效应，主要展示弯曲)
    X_def = Sec; 
    Y_def = O1_H * qH1 + O2_H * qH2;
    Z_def = O1_V * qV1 + O2_V * qV2;
    
    % 转换到塔基绘图坐标系 (X-Y水平, Z垂直向上)
    e1 = [cos(Angle), sin(Angle), 0];
    e2 = [sin(Angle), -cos(Angle), 0];
    e3 = [0, 0, 1];
    
    % 计算 nt 个点的位置
    Nodes = repmat([0, 0, -Draft], length(Sec), 1) + X_def*e1 + Y_def*e2 + Z_def*e3;
    
    % 计算端部偏置立柱的位置 (近似垂直向上)
    TipRoot = Nodes(end, :);
    TipTop  = TipRoot + [0, 0, TipLen];
    TipCol  = [TipRoot; TipTop];
end

% ====== 辅助函数：执行绘制线条 ======
function h = DrawPlatform(ax, MainCol, N1, N2, N3, T1, T2, T3)
    % 主立柱 (黑色粗线)
    h(1) = plot3(ax, MainCol(:,1), MainCol(:,2), MainCol(:,3), 'k', 'LineWidth', 5);
    % 3 个柔性浮筒 (红色，展示弯曲)
    h(2) = plot3(ax, N1(:,1), N1(:,2), N1(:,3), 'r', 'LineWidth', 3);
    h(3) = plot3(ax, N2(:,1), N2(:,2), N2(:,3), 'r', 'LineWidth', 3);
    h(4) = plot3(ax, N3(:,1), N3(:,2), N3(:,3), 'r', 'LineWidth', 3);
    % 3 个端部偏置立柱 (蓝色粗线)
    h(5) = plot3(ax, T1(:,1), T1(:,2), T1(:,3), 'b', 'LineWidth', 4);
    h(6) = plot3(ax, T2(:,1), T2(:,2), T2(:,3), 'b', 'LineWidth', 4);
    h(7) = plot3(ax, T3(:,1), T3(:,2), T3(:,3), 'b', 'LineWidth', 4);
end