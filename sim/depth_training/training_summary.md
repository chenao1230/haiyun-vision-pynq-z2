# SeePerSea 稀疏深度微调总结（2026-11-01）

## 实验设置

- 基础模型：Depth Anything V2 Metric Depth ViT-S（VKITTI 预训练）
- 训练方式：冻结图像编码器，仅微调深度预测头
- 训练集：3435 帧，20 段视频
- 验证集：561 帧，4 段视频
- 测试集：497 帧，7 段视频
- 输入尺寸：518
- batch size：1
- 学习率：3e-5
- 训练轮数：3
- 深度范围：1–80 m
- 总训练时间：约 38 分钟

## 验证集曲线

| Epoch | Train loss | Val MAE (m) | Val RMSE (m) | AbsRel | Delta1 |
|---:|---:|---:|---:|---:|---:|
| 1 | 0.2284 | **14.1780** | **18.7586** | **0.3523** | 0.3025 |
| 2 | 0.1500 | 15.9899 | 20.8018 | 0.3892 | **0.3091** |
| 3 | 0.1277 | 18.3030 | 23.0605 | 0.4364 | 0.2747 |

验证 MAE 的最佳点在第 1 轮；后续训练损失下降但验证误差上升，存在过拟合。最终应使用 `best.pth`，不应使用 `last.pth`。

## 保留测试集结果

| 模型 | MAE (m) | RMSE (m) | AbsRel | Delta1 | 平均纯模型推理 |
|---|---:|---:|---:|---:|---:|
| 原始预训练模型 | 7.0500 | 10.5061 | 0.3199 | **0.6901** | 122.35 ms/帧 |
| 微调最佳模型 | **6.5209** | **8.9191** | **0.1983** | 0.6566 | 122.82 ms/帧 |

相对原始模型，微调后 MAE 下降约 7.5%，RMSE 下降约 15.1%，AbsRel 下降约 38.0%；Delta1 下降约 3.36 个百分点。这说明微调减少了大误差和平均距离误差，但并未同时改善所有比例精度指标。

## 产物

- 最佳权重：`E:\Ship_Depth_Finetune_20261031\runs\b3_full_balanced_20261101\best.pth`
- 最后一轮权重：`E:\Ship_Depth_Finetune_20261031\runs\b3_full_balanced_20261101\last.pth`
- 训练历史：`E:\Ship_Depth_Finetune_20261031\runs\b3_full_balanced_20261101\history.json`
- 最佳模型测试报告：`E:\Ship_Depth_Finetune_20261031\runs\b3_full_balanced_20261101\test_best.json`
- 原始模型测试报告：`E:\Ship_Depth_Finetune_20261031\runs\b3_full_balanced_20261101\test_pretrained_baseline.json`
- `best.pth` SHA-256：`E942DAE1A9FF0658F467A346050592B6493533474F6A5DF11220E25A437197AB`

