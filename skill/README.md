# FPGA 实现验证与报告技能包

用途：供其他队伍整理 FPGA 交付证据、导出实现报告、核对数值以及定位启动通信问题。所有路径由命令行输入，不依赖船舶类别、固定图片尺寸或 IP。本包为通用 FPGA/Zynq Skill，不宣称已完成 PYNQ Overlay 框架适配。

## 环境与快速开始
Python 3.9+，脚本仅用标准库。报告导出需要与输入检查点兼容的 Vivado。本项目实测环境为 Windows、Vivado 2019.2、XC7Z020。
以下命令在 skill 目录执行，把路径替换为实际文件。路径包含空格时保留引号。

```text
python scripts/check_files.py --reference "reference.bit" --candidate "candidate.bit" --output "results/hash.json"
vivado -mode batch -source scripts/export_reports.tcl -tclargs "routed.dcp" "results/vivado"
python scripts/summarize_reports.py --reports "results/vivado" --output "results/summary.json"
python scripts/compare_values.py --reference "examples/numeric/reference.json" --actual "examples/numeric/actual.json" --atol 0.01 --rtol 0 --output "results/numeric.json"
```

报告导出要求输出目录为空，避免覆盖既有证据。运行 Vivado 的命令环境需能找到 vivado。脚本不重新综合、不生成新位流、不修改板端启动文件。

## 每项适用范围、效果和失效条件
|项目|使用方法|已验证效果|失效条件与边界|
|交付校验|输入参考和一个或多个候选文件|本项目五份位流与交付文件一致；脚本测试覆盖相同、不同和缺失|文件不可读；哈希只判字节一致，不证明电路等价或 SD 内容|
|实现报告|输入 DCP，导出后解析英文文本报告|本项目 routed.dcp 的资源、时序和时钟可提取|工具版本/许可证/器件支持不兼容；当前解析适配 7 系列 Slice 资源标签，其他系列报告需扩展映射|
|数值对照|输入两个 JSON 数值数组和容差|合成数据验证通过、超差、长度不一致与非法数值分支|双方形状、单位、定点缩放不同需先转换；本脚本未直接验证真实网络精度|
|启动通信|按 references/diagnosis.md 逐层收集证据|来源为本项目启动与以太网调试观察|其他平台或操作系统需替换检查；没有日志时不推断唯一原因|

报告解析退出码：0=字段完整且建立、保持及脉宽裕量非负，1=检测到负裕量，2=缺字段或参数错误。它不代替完整时序签核，未约束路径和约束完整性等仍查看原报告。
校验和数值比对：0=通过，1=不一致/缺失/超差，2=参数或输入格式错误。

## 模型协作和案例
读取 SKILL.md 执行工作流；prompts/workflows.md 提供可替换参数的提示词；cases/collaboration.md 记录项目对话节选、纠错与提炼过程。
examples/project_reports 保存本项目导出的文本报告；examples/project_summary.json 为自动汇总。tests/validation.json 为脚本验证记录。合成案例与实际工程案例分开存放。
数据/工程换题时替换输入，换板卡时核对器件支持、资源名称、时钟和工具版本。尚未宣称跨板卡验证成功。

## 复现检查
运行 python tests/run_tests.py。核对 validation.json 各项通过，再用自己的工程试跑；保留源报告和生成结果。核心新增 Python/Tcl 脚本为本技能包编写；项目报告作为验证样例提供，具体完整工程另行交付。
