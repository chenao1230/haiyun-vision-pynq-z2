# 海云智视 FPGA 自主选题参赛工程

平台：PYNQ-Z2，XC7Z020-1CLG400C。PL 执行 YOLOv4-Tiny 计算，ARM 执行调度、后处理、ByteTrack 与以太网通信；电脑运行上位机、告警及单目深度预测。

## 先看这些入口
- 使用：`start_pc.cmd`，或 `python src/vitis/pc_app/app.py`。
- 当前上板文件：`board/BOOT.bin`；完整演示启动分区内容：`board/sd_card/`。
- Vivado 工程：`src/vivado/hardware/project/haiyun_pynq_z2.xpr`。
- Vivado 重建入口：`build/recreate_vivado.cmd`。
- 当前 Vitis/ARM 应用：`src/vitis/firmware/app/src/`，Makefile 位于其上级。
- 当前 BSP 与 FSBL：`src/vitis/build/official_generated_fast2/`、`src/vitis/build/official_generated/`。
- 设计报告：`report/design_report.docx`。
- 提交检查：`report/submission_checklist.md`；复现：`report/reproduction.md`。

## 与官方推荐目录的对应
|目录|内容|
|---|---|
|src/vivado|匹配交付位流的 Vivado 工程、IP、BD、DCP|
|src/hls|HLS 算子源码与 HLS 工程|
|src/vitis|当前以太网软件工程，保留 firmware/build/pc_app 相对关系|
|src/vitis_reference_workspace|原生 Vitis 平台及应用工作区，供 IDE 导入和平台结构核对；当前运行应用以 src/vitis 为准|
|src/yolov5_experiments|本项目 YOLOv5 算法实验代码|
|src/depth_anything_v2、src/depth_training|单目深度依赖与训练脚本|
|sim|硬件验证记录、算法训练指标、离线分析|
|build|构建脚本、板卡定义、资源与时序报告|
|board|当前 BOOT、组成文件、SD数据与实板结果|
|data|电脑91帧图片及深度权重|
|skill|可复用流程、校验工具、提示词与案例|
|report|报告、协作记录、复现步骤与材料索引|

所有原工程均未改动。本目录是独立提交副本。目录名使用英文；工具生成的 Makefile、BOOT.bin、IP 名称等保留原大小写，避免破坏工具或源码依赖。中文说明文件重命名映射见 report/source_map.json。

## 快速运行
1. 使用带 Tk 的 Python，执行 `python -m pip install -r requirements.txt`；需要指定环境时设置 SHIP_PYTHON 为 python.exe 完整路径。
2. 板卡断电后，将 board/sd_card 内文件复制到 FAT32 SD 启动分区根目录；插回板卡，选择 SD 启动并上电。
3. 网线连接，电脑有线 IPv4 为 192.168.1.20，掩码 255.255.255.0；板卡为 192.168.1.10:5000。
4. 启动上位机，连接并等待 READY；点击“加载电脑91帧数据”，或保留 SD 图片入口。摄像头使用 Windows 可枚举的视频设备。
5. 三种处理模式为检测、检测+跟踪、检测+跟踪+测距；告警可画矩形区域或越线规则。
6. 单目依赖和权重已随包放置，默认相对路径；无需原 E 盘模型目录。

工具链沿用实际工程的 Vivado/Vitis 2019.2。使用该版本是为了保持现有工程、HLS IP、BSP 与已验证启动产物的兼容组合。新路径下完成了文件与依赖检查；完整重综合、重新训练、全量上板验证的状态见检查表。

SD 默认清单与上位机统一为91帧；历史117帧清单归档在 data/manifest_extended_117.csv，额外输入文件保留。91帧电脑图像与SD输入的量化一致性记录见 sim/dataset_alignment.json。
