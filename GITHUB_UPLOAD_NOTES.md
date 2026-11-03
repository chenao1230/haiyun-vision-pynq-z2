# 完整工程版本

当前主分支已用 `D:/haiyun_fpga_submission/haiyun_fpga_complete` 完整目录替换旧工程快照。原来缺失的 Vivado 工程、ARM 应用源码、参考 Vitis 工作区及算法实验代码已包含；旧快照中不属于完整目录的文件已从当前版本移除，历史提交保留。

新版上位机和最新 skill 保持完整目录中的版本。当前是完整工程，不是 200MB 源码精简包。

## 下载完整模型

所有 .pt/.pth 模型使用 Git LFS。请安装 Git LFS 后执行：

```sh
git lfs install
git clone https://github.com/chenao1230/haiyun-vision-pynq-z2.git
cd haiyun-vision-pynq-z2
git lfs pull
```

按 README.md 操作上位机，组合来源见 ASSEMBLY_NOTES.md。文件齐全和哈希校验不代表本次重新完成了 Vivado/Vitis 全流程构建或实板回归；原有验证报告保留其原始含义。
