# 通用 PYNQ / FPGA 验证技能包

本包仅包含一份技能：**pynq-fpga-validation**。入口为 [SKILL.md](pynq-fpga-validation/SKILL.md)，人工操作见 [使用说明](pynq-fpga-validation/README.md)。

适用于 PYNQ 流式 FIR、逐元素运算、图像算子的 Overlay/寄存器/DMA 校验，以及 HLS 分块边界、数值契约和构建产物追溯。无需船舶数据、YOLO 或 ByteTrack。

- `pynq-fpga-validation/`：可独立安装的唯一 Skill；含 Python 工具、配置示例与复现参考。
- `validation/`：官方格式校验、触发/行为测试与离线脚本结果，见 REPORT.md。

跨板卡复用指主机代码与验证流程复用；每块板需匹配的 bit/HWH 和接口配置。实板、跨板迁移及原工程历史实验本次不执行。

失效条件、依赖与失败经验来源见技能 README。官方格式检查不等于官方认证，触发测试样例也不保证所有未来请求都能正确选择技能。
