% ===== OpenMoor 独立通信诊断测试 =====
clear; clc;
loadlibrary('MoorApiwin64', 'moorapi.h'); 

% 1. 测试初始化 (注意修改为你真实的 XML 文件名)
% 1. 获取绝对路径，并严格使用单引号
file_path = fullfile(pwd, 'CaseOC4.xml'); 

% 2. 强制转为 C-style 的空字符结尾字符串 (极其关键！)
c_str = [file_path, char(0)]; 

% 3. 传给底层引擎
status1 = calllib('MoorApiwin64', 'initialize', c_str);
disp(['初始化状态码 (0为成功): ', num2str(status1)]);

% 2. 测试时间步推进
ptr = libpointer('doublePtr', zeros(1,6));
status2 = calllib('MoorApiwin64', 'update', ptr, zeros(1,6), zeros(1,6), 0.1, 0.1, 0);
disp(['更新状态码 (0为成功): ', num2str(status2)]);

% 3. 测试数据抓取
F = zeros(1,6);
for i=0:5
   F(i+1) = calllib('MoorApiwin64', 'get_mooring_load', i);
end
disp('测试抓取到的锚链力:');
disp(F);

% 4. 释放内存
calllib('MoorApiwin64', 'finish');
unloadlibrary('MoorApiwin64');