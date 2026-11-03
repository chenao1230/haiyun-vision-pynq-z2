# PYNQ Overlay / DMA / 黄金参考校验

适用：PYNQ Linux，AXI DMA simple mode，一次定长输入和输出，处理器可访问的连续缓冲区。适合流式 FIR、逐元素变换、图像算子。每块板提供同名 bit/HWH。依赖 Python 3、numpy、板端 pynq。

不支持：SG/cyclic DMA、VDMA、多个并发流、自动 ap_ctrl_chain、XRT、多内存 bank、自动复位恢复。直接 m_axi 地址传参需另写适配器。不同 PYNQ 版本驱动需实测；本版本未在实板验证。

## 用法

1. 复制 example.json，设置 bit 路径、DMA 名称和数组契约。路径相对于配置文件。准备 input.npy 和由独立算法生成的 golden.npy（禁止用 DUT 输出充当参考）。
2. `python scripts/check.py contract.json --inspect`：加载前检查文件，下载 Overlay，打印 IP 与寄存器映射。此命令会重配置 PL。
3. 对照映射填写 start_writes；每项为 `[IP名, 字节偏移, 整数值]`。仅适用于确认可写的32位寄存器。HLS 常见启动写值为1，但必须由实际接口确认，避免破坏其他控制位。自由运行算子使用空列表。
4. `python scripts/check.py contract.json --report report.json`：接收先于发送启动，限时轮询 DMA，比较并输出报告。正常完成时退出码0通过、1比较失败；硬件异常时先写失败报告并保留进程，待确认硬件静止后手动结束。默认禁止 NaN/Inf。
5. `python scripts/test_offline.py`：无需板卡，验证比较器和 DMA 状态处理。

查看映射范式：`ol.ip_dict` 列可见 IP；`getattr(ol, name).register_map` 查看字段；在交互环境可按真实字段名设置，例如 `ip.register_map.CTRL.AP_START = 1`。本脚本使用配置化 write，不猜测字段名。层级 IP 应按目标 Overlay 的可访问属性适配，示例仅支持顶层 IP。

## 故障定位

| 触发条件 | 排查步骤 |
|---|---|
| IP 不存在/映射错误 | 检查 bit/HWH 同源、文件名、实际 ip_dict；不要套旧地址 |
| DMA 超时 | 查看报告状态；检查 TLAST、TKEEP、输出字节数、算子启动和流背压，再检查时钟复位 |
| DMA error/halted | 检查状态位、合法地址、长度、DRE/对齐和硬件 simple mode 配置 |
| 输出陈旧 | 确认输入 flush、输出 invalidate；不要用普通 ndarray 替代已分配缓冲区 |
| 数值错但传输完成 | 检查 dtype/端序/layout/定点契约；定点舍入饱和需独立参考 |
| 超时后退出 | 不继续传输、不释放活动缓冲区；确认硬件停止后再回收 |

## 来源与已验证效果

源自船舶工程中 dtype/字节长度混淆、保护区漏检、旧硬件产物错配和分阶段验收经验。PYNQ 调用封装是本次新增，不能继承原裸机工程的验证结论。离线测试只验证软件分支；不证明 AXI 时序、缓存硬件行为或跨板兼容。

建议在正式提交前于两种不同算法接口上运行，保存输入/参考哈希、板卡型号、PYNQ版本、bit/HWH来源、报告；如有第二板卡再补迁移证据。当前这些实验均待完成。

API依据：[PYNQ allocate](https://pynq.readthedocs.io/en/latest/pynq_libraries/allocate.html)、[官方 DMA 驱动](https://github.com/Xilinx/PYNQ/blob/master/pynq/lib/dma.py)。本工具限 simple DMA，按驱动完成语义调用 wait 以完成驱动内部状态更新。


## FPGA/HLS 流程

本技能同时提供 [FPGA 复现参考](references/fpga-reproduction.md)，用于定点数值、分块边界、BSP 路径与 BOOT 产物追溯。它是同一技能的辅助流程。

## 安装与测试

将整个 `pynq-fpga-validation` 目录复制到目标 Codex 支持的技能搜索目录，例如项目 `.agents/skills/` 下，重新开始会话。显式调用：`$pynq-fpga-validation 帮我排查 DMA 接收卡住，先只分析日志。` 不需要安装到全局才能运行 Python 工具。

离线依赖：numpy。官方格式校验另需 PyYAML，板端 pynq 由目标板环境提供，不在 Windows 上安装 pynq。所有 Python 命令均在本技能目录执行。验收记录位于外层提交目录的 `validation/`。
