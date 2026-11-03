# 自主选题提交核对

依据指南3.3.3—3.3.5整理。状态描述本目录所含材料。

|要求|位置/状态|
|---|---|
|RTL、HLS、PS源码|src/vivado、src/hls、src/vitis|
|仿真或验证结果|sim/hardware_validation、sim/analysis、board/results|
|资源/时序/功耗估算|build/reports；功耗为工具估算|
|板端运行产物|board/BOOT.bin、board/components、board/sd_card|
|构建脚本|build/*.cmd、src/vivado/hardware/create_project.tcl、src/vitis/firmware/app/Makefile|
|测试图片与模型|data/pc_files、data/models、board/sd_card/folded_weights|
|技能包|skill，包含11项测试和实际DCP导出记录|
|设计报告|report/design_report.docx，复制当前报告，不在此次目录整理中重写|
|大模型协作|report/model_collaboration.md 为已有真实对话节选及整理，不是完整聊天导出|
|版本说明|README 与 reproduction.md 记录实际2019.2工具链|
|模型优化数据|sim/depth_training、src/yolov5_experiments；YOLOv5与板端Tiny分别标识|

## 提交前完成
1. 按 reproduction.md 在新目录执行完整构建、上板回归，并保存日志；本次整理未宣称完成全流程清洁构建。
2. 补齐统一条件的板端基线/优化耗时及资源对照，现有实现报告是当前实现快照。
3. 检查正式报告最终队伍信息和协作章节，并归档完整可提交的关键交互原文。
4. 开源发布前明确本队代码许可证并保留第三方许可；本包保留已有 LICENSE，不代替第三方授权。未代为上传GitHub/Gitee。
5. 决赛的一页英文海报和演示视频单独提交，未把目录整理当作已制作海报。
6. 工具生成大小写名称予以保留；严格小写命名要求需在工具依赖确认后处理，不能整体强制改名导致Linux/IDE不可用。

## 本次整理验证
包内图片/SD清单、位流一致性和可移植模型路径已检查。电脑预处理/TCP回归退出码：0；当前 ARM 应用在提交目录编译退出码：0。详细日志见 sim/pc_regression.log 和 sim/arm_build.log。
