# 验证复跑

官方格式校验使用本机 Codex 附带的未修改 quick_validate.py；来源、SHA256、命令和退出码保存在 checks.json。PyYAML 6.0.3 安装在工作区测试依赖目录，没有修改全局环境。

可在自己的环境安装 PyYAML 后运行：

```text
python -X utf8 /你的/skill-creator/scripts/quick_validate.py ../pynq-fpga-validation
python ../pynq-fpga-validation/scripts/test_offline.py
```

在本目录执行 `python run_trigger.py` 可重跑触发评估（需要已登录的 Codex CLI，会调用模型并消耗额度）。脚本以提交包上一级为工作区，在 `.skill_work/trigger-fixture/.agents/skills/` 建立隔离副本，每例使用全新 ephemeral、read-only 会话，不安装全局 Skill，不连接板卡。输出覆盖本目录 trigger/ 中的同名测试记录。

评分分两层：routing_pass 根据实际最终输出的 selected_skills 和读取 SKILL.md 的工具事件判定；行为要求见 behavior-rubric.json，由评审阅读原始回答确认。该评估不以关键词匹配冒充模型触发测试，也不证明所有模型和会话都会同样触发。每例首次采样一次；T01 修复报告引用后复测一次，初次记录保留在 trigger/history/。可设置 SKILL_TRIGGER_CASES=T01 仅复跑该例；每次复跑仍需重新评审回答。

初次 CLI 沙箱启动失败、插件初始化警告不属于技能失败；正式结果以每例进程退出码、模型回答与工具事件为准。外部插件的启动 HTML/网络诊断未打入发布包。
