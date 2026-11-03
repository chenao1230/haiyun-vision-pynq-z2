# 单份 Skill 验证报告

日期：2026-11-03（Asia/Shanghai）。交付技能：pynq-fpga-validation。

| 验证项 | 结果 | 证据 |
|---|---|---|
| Codex 自带官方 quick_validate.py | PASS，退出码 0 | official-format.txt、checks.json（含原脚本 SHA256） |
| Python 离线测试 | 7/7 PASS | offline.txt |
| 真实技能发现与触发 | 9/9 PASS | trigger/T01.json～T09.json、summary.json |
| 按行为要求人工评审 | 9/9 PASS | behavior-rubric.json、behavior-review.json |
| 单技能结构/名称/隐式调用/语法/JSON/相对链接 | PASS | package-audit.json |
| PYNQ 实板、跨板卡、缓存硬件、AXI 时序 | 未执行 | 按用户要求留待后续 |

## 测试方法与边界

官方校验器来自当前安装的 Codex skill-creator，未经修改，使用 Python 3.13.2 与工作区 PyYAML 6.0.3 执行。离线脚本依赖 numpy 2.2.4。官方格式通过不是 OpenAI 认证。

触发评估把唯一技能复制到隔离项目 `.agents/skills/pynq-fpga-validation/`，每例单独启动全新 Codex CLI ephemeral、read-only 会话。使用环境默认配置模型，未指定替代模型。统一测试提示限制文件修改/联网/硬件操作，并要求结构化返回实际选择的技能；未给模型预期选择答案。正例同时核对读取 SKILL.md 的命令事件；反例核对未选择本技能。原始回答与工具事件随包保存，省略外部插件启动 HTML 诊断。

每例首次采样一次；T01 补齐随技能验证摘要后另行复测一次，初次记录保留在 trigger/history/。模型仍有随机性；这些结果不等于所有模型/全部自然语言请求的触发保证。行为由主代理按预先保存的 rubric 阅读评审，不是独立盲评。测试不含真实 bit/HWH 或板端调用。首次 T01 读取尚未生成的报告时得到缺文件提示，随后已补齐随技能摘要并复测；其余用例没有这个缺文件问题。复测 T01 的只读 CLI 子环境找不到 python，模型如实报告未执行离线测试；主工作区 Python 的 7 项测试已通过。因此 9/9 是选择与行为用例通过，不代表每个会话的所有命令成功，也不是端到端板端执行通过。

## 用例结果

- **T01 PASS**：显式调用读取技能；给出 FIR 独立参考与离线步骤，指出 --inspect 会下载 Overlay；未虚构板端结果。
- **T02 PASS**：间接 DMA 故障请求触发；检查 TLAST、字节数、启动/背压；保留超时活动缓冲区。
- **T03 PASS**：间接 HLS 故障请求触发；区分写越界和先读后 mask；要求独立地址检查。
- **T04 PASS**：缺输入请求触发；列出 HWH、shape/dtype、独立参考；不猜地址、不执行板端步骤。
- **T05 PASS**：普通 Python 列表去重未触发，直接给出函数。
- **T06 PASS**：YOLO 训练未触发，回答数据划分与训练流程。
- **T07 PASS**：显式调用后识别 VDMA/cyclic 超出支持范围，不运行 simple DMA 脚本。
- **T08 PASS**：审查 BOOT 与综合报告的证据边界，不把文件存在或综合成功当作实板通过。
- **T09 PASS**：LUT 基础概念未触发，不强加工程复现流程。

## 改进与来源

原本两个技能已合并为一个入口；HLS/FPGA 方法放在 references/fpga-reproduction.md。description 明确适用请求和排除范围，正文补齐缺参处理、非支持 DMA 类型和离线操作边界；配置允许隐式调用。修复上一轮缺少 PyYAML 导致格式校验未完成的问题。

原船舶工程的保护区越界、BSP 路径与 BOOT 产物错配记录仅作为经验来源，未继承为本次 PYNQ 实板证据。此次未重跑原工程。

复跑步骤和评估脚本见 README.md、run_trigger.py。每次重跑需重新人工评审行为并重新生成报告，不能直接沿用本报告结论。
