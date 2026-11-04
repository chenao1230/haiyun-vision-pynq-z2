---
name: zynq-baremetal-hls-validation
description: Develop, debug and validate Zynq ARM bare-metal C/C++ and HLS accelerator projects, including BSP builds, PS-PL memory/register contracts, numeric and boundary tests, Vivado evidence, and BOOT provenance. Use for Vitis/Vivado hardware-software integration and reproducible handoff; not PYNQ Python Overlay deployment or model training.
---

# Zynq 裸机 C/C++ 与 HLS 工程开发验证

面向 ARM 上的 standalone C/C++ 应用、PL 中由 HLS C/C++ 生成的加速器，以及 Vitis/Vivado 构建与 SD 启动流程。PYNQ-Z2 是可用硬件平台，不意味着使用 PYNQ Linux 框架。电脑端可用 Python 自动化校验；不把 ARM 应用迁移成 Python。

## 先确定本次验证对象

读取需求及已有源码、构建脚本和平台文件，记录器件、工具版本、BSP、时钟、输入输出契约和产物来源。先判定任务是新模块设计、修改 ARM 软件，还是修改 HLS/硬件；保持用户已选架构。已有 PC 基线时冻结复用，不默认重新训练或替换检测器。

## 从需求到交付

1. 需求与任务划分：列明输入、输出、延迟/吞吐目标及资源约束，确定 PC、ARM、PL 各自职责；不预设所有计算都放 PL。
2. 接口设计：先约定数据格式、长度、地址、量化、寄存器和状态协议，再实施各模块；契约模板见 assets/interface-contract.md。
3. 模块实现：ARM 负责调度与适合软件执行的逻辑；HLS 算子结合访存、并行度和片上缓冲设计。小步构建，以独立参考检验每次变化。
4. 联合调试：从最小输入逐级扩大，按实际失败层定位；对数值、边界、时序和通信分别留证据。
5. 优化决策：固定测试条件，比较延迟、资源与效果；没有改善或引入退化的方案保留记录，不宣称优化成功。
6. 交付与经验提炼：绑定源码、工具、平台、模型及启动镜像，标注各阶段状态；把可重复定位的问题写成适用条件、检查步骤和失效边界。

在独立输出目录构建，保留已运行版本。验证只覆盖实际执行阶段，旧 bit、旧报告、旧测试通过记录不能替代新构建结果。

## 按问题选用流程

|任务|读取资源|优先产物|
|Vitis 编译、BSP、FSBL、BOOT 来源不清|[裸机构建与启动](references/baremetal-build.md)|命令、cwd、依赖路径、ELF/BIF/bit 哈希|
|ARM 与 PL 无结果、数值不一致、内存越界|[PS-PL 接口与 HLS 验证](references/hls-interface.md)|接口契约、独立参考、边界测试、分阶段日志|
|资源、时序、性能比较或报告|[验证证据与指标](references/evidence.md)|原始报告、解析结果、测试条件、限制|
|SD、串口或以太网联调|[通信与状态定位](references/communication.md)|同一帧的接收/计算/返回证据|
|YOLO 与跟踪项目迁移|[船舶项目适配示例](references/ship-example.md)|参数布局、检测缓存、逐组轨迹对比|

只有当前任务需要时才读对应资源。具体寄存器偏移、时钟、量化参数和通信命令以工程文件为准，不从示例猜测。

## 执行约束与修复记录

- 区分 AXI-Lite 控制、加速器直接 m_axi 访问 DDR、AXI DMA 流传输；不能因为用了 AXI 就套用 DMA 或 Overlay API。
- 单纯修改 ARM 后处理且硬件接口不变时，先重建应用、核对并重新打包 BOOT；改 HLS 则需要继续验证导出 IP、硬件实现和匹配的软件平台。不要一概要求重做 bit，也不要把新 C++ 源码配旧 bit 称为硬件修复已部署。
- 记录现象、复现命令及 cwd、失败日志、定位依据、修改差异、重跑结果和未验证范围；可用 [修复记录模板](assets/repair-record.md)。测试工具自身错误与产品错误分开。
- C 仿真、HLS 综合、RTL 协同仿真、完整硬件实现、ARM 链接、BOOT 封装、实板运行分别列状态。候选包完成封装但未运行时标明“未上板”。
- 文件比较和报告分析不操作板卡。SD 替换、下载 bit、复位等动作需属于用户授权范围；技能被调用本身不扩大该范围。

## 可运行辅助工具

命令均在本 Skill 根目录执行，Python 3.9+，仅标准库；路径替换为实际输入。

```text
python scripts/check_files.py --reference "reference.bit" --candidate "candidate.bit" --output "results/hash.json"
python scripts/compare_values.py --reference "examples/numeric/reference.json" --actual "examples/numeric/actual.json" --atol 0.01 --rtol 0 --output "results/numeric.json"
vivado -mode batch -source scripts/export_reports.tcl -tclargs "routed.dcp" "results/vivado"
python scripts/summarize_reports.py --reports "results/vivado" --output "results/summary.json"
python tests/run_tests.py
```

Vivado 导出需要兼容 DCP 的工具、器件支持与许可证；输出目录需新建或为空。脚本不重新综合，不生成 bit，不下载硬件。报告解析适配英文 7 系列 Slice 资源标签，其他系列须先验证解析器。具体退出码和使用限制见 [验证证据与指标](references/evidence.md)。

## 交付

给出可复现命令、关键输入及哈希、修改清单、实际测试结果和明确下一步。只归纳有日志支持的效果。换算法或板卡时替换接口契约、器件约束和测试数据；复用方法不等于跨板已验证。
