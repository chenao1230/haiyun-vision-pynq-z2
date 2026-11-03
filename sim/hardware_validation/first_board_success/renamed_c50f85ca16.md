# PYNQ-Z2首次单图完整链路验证

日期：2026-10-21。

已完成：外接适配器独立供电、SD启动、FSBL初始化、DDR检查、FPGA配置、ARM应用、权重读取、28次加速器调用、输出写卡、PC解码画框。使用pynq_z2_sd_fix版本，不连接电脑串口。

实物日志DIAG.TXT末尾为DONE: both output files closed successfully。out0.bin=22308字节，out1.bin=89232字节。解码程序检查输出数量和数值有限性通过，成功生成board_result.jpg。

解码结果：ore carrier，置信度约0.89，检测框像素坐标(left,top,right,bottom)=(588,400,1387,518)。人工查看结果图，框覆盖图中的船体。此结果支持单图功能链路通过，不等于独立精度评估、批处理稳定性或报告性能已复现。

本目录保存实际上板BOOT.bin、FSBL.TXT、DIAG.TXT、yolo_test输入和两个输出、board_result.jpg。请保留，不要使用后续测试覆盖。

已确认修正：PS参考时钟由错误33.333333MHz改为PYNQ-Z2实际50MHz，CPU650MHz、DDR525MHz、FCLK0保持120MHz；应用文件系统开启长文件名支持。现有诊断程序关闭数据缓存并记录SD日志，不能用其耗时作为最终性能结论。

后续顺序：将正确初始化配置同步到正式Vivado工程/XSA和构建流程，避免旧工程重生成覆盖修正；准备数张新图片进行预处理和重复实测；对照同模型软件参考；通过后再批处理评估和优化性能。PC YOLOv5不是该YOLOv4-tiny硬件网络的逐值参考。
