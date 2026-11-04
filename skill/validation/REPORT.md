# 本次验证记录

日期：2026-11-04。对象：zynq-baremetal-hls-validation。

- 脚本回归：11/11 通过，原始输出见 offline.txt 和技能 tests/validation.json。
- skill-creator quick_validate：通过，原始输出见 skill-format.txt；仅结构检查，不是技术认证。
- 文档相对链接：全部可解析，见 checks.json。
- 本次没有运行 Vivado 导出、HLS 综合、RTL 仿真或实板；没有独立智能体行为测试、跨板测试。

哈希与数值边界、负裕量使用合成样例；报告解析用来源包内的历史真实报告。没有把旧 PYNQ 包的 7/7、9/9 测试计入本包。脚本复用来源见 SOURCE.json。

验证环境修正：最初使用系统 Python 及文档运行时执行格式检查，均因缺少 PyYAML 未启动校验；切换到已安装 PyYAML 6.0.1 的 D:/Anaconda/python.exe 后通过。没有修改产品代码或伪装首次通过。

修改内容：技能主流程改为裸机 C/C++ 与 HLS 工程开发验证，新增 BSP/BOOT 来源链、直接 m_axi DDR 接口与缓存检查、HLS 边界检查、通信定位、条件一致的性能比较以及修复记录模板。电脑 Python 辅助工具不改变板端实现语言。

使用限制：这是智能体工作流程与辅助校验工具，不包含通用 ARM 固件、完整加速器或自动部署器。新工程需提供真实接口与工具环境；硬件运行效果需另行测试。
