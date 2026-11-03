# 完整工程组合说明

本目录由以下已存在材料组成，两个来源目录均未覆盖或删除：

- 工程文件、数据、板卡文件、Vivado、HLS、Vitis/ARM、参考工作区与算法实验：来自原始 haiyun_fpga_submission 目录。
- `src/vitis/pc_app/`：来自 D:/haiyun_fpga_submission/haiyun_fpga_submission 下最新上位机。
- 根 README.md、start_pc.cmd：沿用新版上位机的操作说明和启动脚本。
- `skill/`：沿用最新 skill.zip（31个文件），保持 skill/README.md 的目录结构。

新版上位机包含“加载电脑数据”、照片组首帧自动预览和多矩形绘制；已移除场景停止按钮、任意图片按钮和下拉框合集项。默认图片、清单及板卡工程均使用原始完整工程中的材料。原始目录中的历史日志和报告仅代表其原始记录。

原 report/file_manifest.json 已按本组合目录重新生成。文件内容已按来源逐项比对，组合过程未重跑完整 Vivado/Vitis 综合、编译或上板测试。
