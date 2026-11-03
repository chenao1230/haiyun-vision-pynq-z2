import concurrent.futures, hashlib, json, os, shutil, subprocess, time
from pathlib import Path
root=Path(__file__).resolve().parents[2]
fixture=root/'.skill_work/trigger-fixture'
installed=fixture/'.agents/skills/pynq-fpga-validation'
shutil.copytree(root/'skill/pynq-fpga-validation',installed,dirs_exist_ok=True,ignore=shutil.ignore_patterns('__pycache__'))
output=root/'skill/validation/trigger'
output.mkdir(parents=True,exist_ok=True)
cases=[
('T01','请用 $pynq-fpga-validation 检查我的 PYNQ 流式 FIR 加速器的接口与黄金参考验证步骤。bit/HWH 和板卡稍后提供，本次只给离线方案。',True,'explicit'),
('T02','PYNQ 的 dma.recvchannel.wait() 一直卡住，发送好像结束了。请帮我列出排查顺序，本次不要连接硬件。',True,'implicit-dma'),
('T03','HLS 卷积正常输出区数值对，但单 tile 的后缀保护区被改写；我还发现输入先读再 mask。怎么验证这两个问题？只分析，不改工程。',True,'implicit-hls'),
('T04','请帮我在 PYNQ 上检查加速器是否正确，我现在只有一个 bit 文件，没有 hwh，也没提供 dtype、输入输出形状或参考数据。本次先告诉我能做什么。',True,'missing-input'),
('T05','帮我写一个普通 Python 列表去重函数，保持元素原来的顺序。',False,'negative-python'),
('T06','我想训练一个新的 YOLO 检测模型，帮我整理训练集划分和训练步骤，不涉及 FPGA 或板卡部署。',False,'negative-training'),
('T07','使用 $pynq-fpga-validation 处理我的 AXI VDMA 循环视频流。我想直接运行包内 DMA 脚本。请先评估适用性，本次不要操作硬件。',True,'unsupported-mode'),
('T08','我只有 BOOT.bin 和综合报告，没有板端运行记录。请审查这些 FPGA 工程复现证据能支持哪些验收结论。',True,'evidence-boundary'),
('T09','请解释 FPGA 查找表 LUT 的基本原理，给初学者一个简单例子，不需要工程验证。',False,'negative-concept')]
(root/'.skill_work/trigger-cases.json').write_text(json.dumps(cases,ensure_ascii=False,indent=2),encoding='utf-8')
(output/'cases.json').write_text(json.dumps([{'id':i,'prompt':p,'expected_activation':e,'category':c} for i,p,e,c in cases],ensure_ascii=False,indent=2),encoding='utf-8')
exe=shutil.which('codex')

def run(case):
    ident,prompt,expected,category=case
    last=root/'.skill_work'/f'{ident}-last.txt'
    instruction='这是只读的技能选择与行为评估。请正常处理下面的用户请求；若适用已安装技能，按通常技能机制读取它。不要操作硬件、不要修改文件、不要联网查资料。最后只输出 JSON 对象，含 selected_skills（实际采用的技能名称数组）、answer（给用户的中文回答）、missing_inputs（缺少输入数组）、hardware_executed（布尔值）。不要为了测试刻意选择任何技能。用户请求：\n'+prompt
    cmd=[exe,'exec','--ephemeral','--sandbox','read-only','--skip-git-repo-check','-C',str(fixture),'--json','-o',str(last),'-']
    start=time.monotonic()
    try:
        proc=subprocess.run(cmd,input=instruction,capture_output=True,text=True,encoding='utf-8',errors='replace',timeout=240)
        raw=proc.stdout
        # Preserve model output and tool events; omit external plugin startup HTML diagnostics.
        events=[]
        for line in raw.splitlines():
            try:
                event=json.loads(line)
            except ValueError:
                continue
            if event.get('type') in ('item.completed','turn.completed','turn.failed','error'):
                events.append(event)
        response=last.read_text(encoding='utf-8') if last.exists() else ''
        clean=response.strip()
        if clean.startswith('```'): clean='\n'.join(clean.splitlines()[1:-1])
        try: parsed=json.loads(clean)
        except ValueError: parsed={}
        activated='pynq-fpga-validation' in parsed.get('selected_skills',[])
        read_evidence=any('SKILL.md' in json.dumps(e,ensure_ascii=False) and 'pynq-fpga-validation' in json.dumps(e,ensure_ascii=False) and e.get('item',{}).get('type')=='command_execution' for e in events)
        result={'id':ident,'category':category,'expected_activation':expected,'exit_code':proc.returncode,'elapsed_s':round(time.monotonic()-start,2),'response':response,'parsed':parsed,'actual_activation':activated,'skill_read_event':read_evidence,'routing_pass':bool(parsed) and activated==expected and (not expected or read_evidence),'hardware_executed':parsed.get('hardware_executed'),'events':events}
    except subprocess.TimeoutExpired:
        result={'id':ident,'category':category,'expected_activation':expected,'routing_pass':False,'error':'CLI timeout 240s'}
    (output/(ident+'.json')).write_text(json.dumps(result,ensure_ascii=False,indent=2),encoding='utf-8')
    print(ident,'PASS' if result['routing_pass'] else 'REVIEW',flush=True)
    return result
selected_ids=set(os.environ.get('SKILL_TRIGGER_CASES','').split(',')) - {''}
cases_to_run=[c for c in cases if not selected_ids or c[0] in selected_ids]
with concurrent.futures.ThreadPoolExecutor(max_workers=3) as pool:
    list(pool.map(run,cases_to_run))
results=[json.loads((output/(c[0]+'.json')).read_text(encoding='utf-8')) for c in cases if (output/(c[0]+'.json')).exists()]
(output/'summary.json').write_text(json.dumps({'method':'fresh ephemeral Codex CLI session per case; installed project skill discovery; read-only; default configured model; one sample per case','skill_sha256':hashlib.sha256((installed/'SKILL.md').read_bytes()).hexdigest(),'cases':[{k:v for k,v in r.items() if k not in ('events','response','parsed')} for r in results]},ensure_ascii=False,indent=2),encoding='utf-8')
