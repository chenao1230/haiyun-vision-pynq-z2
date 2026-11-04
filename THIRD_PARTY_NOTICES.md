# 许可证适用范围与第三方声明

## 项目原创代码

Copyright (c) 2026 Haiyun Vision contributors.

本项目贡献者有权授权的原创源代码、构建脚本及其配套源码说明，采用 **GNU Affero General Public License version 3 only（SPDX: AGPL-3.0-only）**。完整协议见根目录 [LICENSE](LICENSE)。允许在遵守协议条件的前提下使用、修改和再分发；应保留版权和许可声明、标注修改，并按协议提供对应源码。修改后的程序用于通过网络向用户提供服务时，还需遵守第13节的源码提供要求。

采用该主许可证，是为了与当前 ARM 跟踪代码中已经明确的 `AGPL-3.0-only` 声明保持一致。本声明不取消原文件中的第三方权利、许可义务或明确的其他协议；也不构成将第三方代码重新授权为 AGPL 的声明。

## 随仓库分发的第三方代码

| 组件 | 仓库位置 | 已有协议与声明 |
|---|---|---|
| ByteTrack / XYAH 跟踪移植 | `src/vitis/firmware/app/src/byte_tracker.cpp`、`byte_tracker.h` | 文件头声明 `AGPL-3.0-only`，注明来源为 Ultralytics 8.0.196 的跟踪与 Kalman 工作流；完整许可保留在该目录的 `LICENSE`。 |
| YOLOv5 算法实验代码 | `src/yolov5_experiments/` | GPL-3.0，保留原 `LICENSE`、项目说明和文件头声明。独立分发该组件时继续遵守其原协议。 |
| Depth Anything V2 源码 | `src/depth_anything_v2/` | Apache-2.0，保留原 `LICENSE` 及原有声明。 |
| pySerial 3.5 | `src/vitis/pc_app/vendor/serial/` | BSD-3-Clause；版权归 Chris Liechti 及相应贡献者。保留源码版权头，并随附上游 `LICENSE.txt`。 |
| lwIP | BSP 中的 `libsrc/lwip211_v1_1/src/lwip-2.1.1/` | 保留各副本的 `COPYING` 和源码版权头；其中许可正文为三条款 BSD 形式。 |
| Xilinx/AMD 平台支持代码、驱动及生成文件 | `src/vitis/firmware/`、`src/vitis/build/`、`src/vitis_reference_workspace/`、`src/vivado/` 等目录中的相关文件 | 适用相应文件头、原始许可和供应商工具/IP条款。目录中包含 BSD 形式、MIT 形式以及其他版权声明，不能用项目主许可证统一覆盖。 |

同一组件可能在 BSP、参考工作区和构建快照中存在多个副本；本表适用于这些副本，不改变其原有协议。其他 Python 包和供应商开发工具未因此获得新的授权，仍适用各自许可。

## 模型、数据与报告

代码许可证不自动授予第三方模型权重、照片、点云、数据集、报告插图、商标及其他非代码材料的新权利。相关材料继续遵守其来源的许可、版权和使用条件；本项目只能授权贡献者实际拥有权利的部分。仅凭同目录中的代码许可证，不能推定某个权重或数据集获得了同样的授权。

编译后的 ELF、BOOT、位流和其他组合产物，应结合其所包含的代码、库和供应商 IP 的实际许可判断分发条件。分发受 AGPL/GPL 约束的产物时，应按相应协议提供对应源码和构建所需材料；根目录许可证不豁免第三方义务。

## 上游与协议参考

- [GNU AGPL version 3](https://www.gnu.org/licenses/agpl-3.0.html)
- [GNU 关于许可证兼容性的说明](https://www.gnu.org/licenses/license-compatibility.en.html)
- [YOLOv5 上游](https://github.com/ultralytics/yolov5)
- [Ultralytics 8.0.196](https://github.com/ultralytics/ultralytics/tree/v8.0.196)
- [Depth Anything V2 上游](https://github.com/DepthAnything/Depth-Anything-V2)
- [pySerial 3.5 原始许可证](https://github.com/pyserial/pyserial/blob/v3.5/LICENSE.txt)
- [lwIP 上游](https://savannah.nongnu.org/projects/lwip/)
- [Xilinx embeddedsw 上游](https://github.com/Xilinx/embeddedsw)

本文件说明已观察到的组件及授权范围，不替代各组件的完整原始协议，也不声称完成了所有权重、数据来源和供应商 IP 的逐项权利审计。
