---
name: pynq-fpga-validation
description: Validate PYNQ Overlay/register interfaces, diagnose simple-mode AXI DMA and cache issues, compare accelerator outputs with golden references, and audit FPGA/HLS reproduction evidence. Use for PYNQ board migration, stream-accelerator testing, HLS numeric/boundary failures, or build-to-bit provenance; not generic Python debugging, model training, or unrelated FPGA design tutorials.
---

# PYNQ 与 FPGA 可复现验证

这是一个技能，按用户任务选择下列流程。用户明确指定的范围优先；用户要求只做离线工作时，不加载 Overlay、不写寄存器、不连接板卡。

## 选择流程

- PYNQ Overlay、寄存器、DMA 卡住、缓存或黄金参考：读取 [README](README.md)，按需检查 `scripts/check.py` 与 `example.json`。程序只支持顶层 AXI DMA simple mode 的单输入单输出定长流。
- HLS 数值/边界失败、BSP/BOOT 构建或产物证据：读取 [FPGA 复现参考](references/fpga-reproduction.md)。不要求原船舶工程或旧数据集。
- 普通 Python 异常、训练模型、纯概念教程无需启动本工作流。显式调用但提出 SG/VDMA/XRT 等任务时，说明工具不适用，保留可复用的诊断方法，不强行运行 DMA 脚本。

## 输入与处理边界

PYNQ 执行需要匹配板卡的 bit/HWH、PYNQ 版本、顶层 DMA 名称、shape/dtype、独立黄金参考和真实寄存器契约。缺项时先检查已提供的文件，列出缺失项并完成可做的离线校验；不猜基址、启动偏移、TLAST 或黄金输出。`--inspect` 也会下载 Overlay，不是纯只读命令。

先运行 `python scripts/test_offline.py`。确认用户要求进入板端执行后再运行 README 中的命令；已明确授权无需反复询问。同一 bit 文件不能跨不同板卡直接迁移，复用的是工作流和配置。

确认 simple mode、收发长度、DRE/对齐、TLAST/TKEEP、时钟复位。超时后记录 DMA 状态，停止提交，保留可能仍被 PL 使用的缓冲区；由操作者确认所有相关 AXI master 静止后回收。不要自动重试或直接释放活动内存。

## 输出要求

给出：所选流程、检查结果、实际执行的命令/输入与产物哈希、错误及下一步、验证阶段。使用脚本 JSON 报告记录运行结果。区分离线测试、模型触发评估、RTL、实现和实板证据；mock 通过不算实板通过。主机传输与比较耗时不是纯 IP 延迟，资源数据需来自同配置的实现报告。

当前已验证范围查阅提交包 `validation/REPORT.md`；在未读到证据时不要预设任何验证已通过。
