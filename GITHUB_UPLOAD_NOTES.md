# GitHub 上传范围

本仓库保存本机 `D:/haiyun_fpga_submission/haiyun_fpga_submission` 的完整目录快照，包含新版上位机、模型、原图、板卡运行文件、历史运行结果和构建文件。它不是此前制作的 200MB 精简包。

`data/models/depth_best.pth` 通过 Git LFS 保存。下载完整工程请安装 Git LFS 后使用：

```sh
git lfs install
git clone https://github.com/chenao1230/haiyun-vision-pynq-z2.git
cd haiyun-vision-pynq-z2
git lfs pull
```

随后按 README.md 的顺序操作。GitHub 网页下载的源码 ZIP 是否附带 LFS 模型取决于仓库设置，优先使用上述克隆方式。

## 原目录中缺失的材料

以下路径在此次上传前的原目录中就不存在，并非本次上传时排除：

- `src/vivado/hardware/project/haiyun_pynq_z2.xpr`
- `src/vivado/hardware/create_project.tcl`
- `src/vitis/firmware/app/src`
- `src/vitis_reference_workspace`
- `src/yolov5_experiments`

因此，仓库中的旧报告或复现说明提到这些路径时，需先从原始备份补齐，不能将当前快照当作已具备所有源码的完整硬件复现工程。

`report/file_manifest.json` 为原提交材料中的历史清单，随原文件保留；上位机后续修改及上述原目录缺失可能导致历史清单校验失败。
