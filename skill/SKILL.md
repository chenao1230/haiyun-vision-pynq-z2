---
name: fpga-evidence-workflow
description: 校验 FPGA 交付文件一致性，从 Vivado 实现检查点导出资源和时序报告，比对参考数值，并按启动、链路、协议和计算阶段排查 Zynq 以太网问题。用于工程验证和报告证据整理。
---

# FPGA 实现验证与证据整理

先确认目标：报告导出、交付一致性、数值对照或启动通信排查。读 README.md 获取命令和验证范围。保留输入原件，在独立目录写结果。

## 执行
1. 交付一致性：用 scripts/check_files.py 比较参考文件与候选文件。文件名相同不代表内容相同；哈希不同也不等于硬件逻辑一定不同，位流头可能含元数据。没有读取 SD 启动镜像时，只能确认交付包文件。
2. 实现报告：确认检查点与目标构建的来源，使用对应 Vivado 读取 routed.dcp，运行 scripts/export_reports.tcl，再运行 scripts/summarize_reports.py。解析不完整时保留失败状态，不能把缺失指标补为零。
3. 数据比对：显式确认形状、类型、排列、缩放和单位后使用 scripts/compare_values.py。脚本只比较数值序列；RGB/CHW、字节序、预处理和坐标变换须先由调用方统一。合成样例只验证脚本，不代表实板精度。
4. 启动通信问题：读 references/diagnosis.md。区分 DONE、PHY 链路、TCP 和应用 READY，按证据定位。不要把网口灯闪烁判定为 FPGA 已配置，不要为了连接板卡直接关闭用户全部联网功能。
5. 输出结论绑定来源、工具环境、检查条件和结果。时序约束频率与运行时钟分别记录，功耗工具估算与仪器测量分别记录。

## 模型协作
需要辅助分析时使用 prompts/workflows.md，并根据实际输出继续判断。cases/collaboration.md 是本项目真实对话的节选与归纳，展示曾纠正的判断；不能将其改写成未发生的实验。
