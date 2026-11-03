from pathlib import Path
import tempfile,subprocess,sys,json,shutil
root=Path(__file__).resolve().parents[1]
results=[]
def run(name,script,args,expected,check=None):
    r=subprocess.run([sys.executable,str(root/'scripts'/script),*map(str,args)],capture_output=True,text=True,encoding='utf-8')
    ok=r.returncode==expected
    if ok and check:ok=bool(check())
    results.append({'name':name,'expected_exit':expected,'actual_exit':r.returncode,'passed':ok,'stderr':r.stderr})
with tempfile.TemporaryDirectory(dir=root/'tests',prefix='fixtures_') as td:
    t=Path(td);(t/'a').write_bytes(b'abc');(t/'b').write_bytes(b'abc');(t/'c').write_bytes(b'abd')
    for name,candidate,code in [('same','b',0),('different','c',1),('missing','missing',1)]:
        run('hash_'+name,'check_files.py',['--reference',t/'a','--candidate',t/candidate,'--output',t/'hash.json'],code)
    run('hash_input_protection','check_files.py',['--reference',t/'a','--candidate',t/'b','--output',t/'a'],2)
    for name,data,code in [('within_tolerance',[0,0.501,-1,2],0),('outside_tolerance',[0,0.6,-1,2],1),('wrong_length',[0],1),('nonfinite',[float('nan')],2)]:
        (t/'values.json').write_text(json.dumps(data),encoding='utf-8')
        run('numeric_'+name,'compare_values.py',['--reference',root/'examples/numeric/reference.json','--actual',t/'values.json','--atol','0.01','--output',t/'numeric.json'],code)
    output=root/'examples/project_summary.json'
    def check():
        d=json.loads(output.read_text(encoding='utf-8'))
        return d['resource']['Slice LUTs']['used']==36743 and d['resource']['DSPs']['used']==220 and d['timing']['wns_ns']==0.062 and d['power']['estimated_on_chip_w']==2.827
    run('actual_vivado_report','summarize_reports.py',['--reports',root/'examples/project_reports','--output',output],0,check)
    run('missing_report','summarize_reports.py',['--reports',t/'no_reports','--output',t/'missing.json'],2)
    shutil.copytree(root/'examples/project_reports',t/'negative')
    p=t/'negative/timing_summary.rpt'
    p.write_text(p.read_text(encoding='utf-8').replace('0.062','-0.062'),encoding='utf-8')
    run('negative_slack_fixture','summarize_reports.py',['--reports',t/'negative','--output',t/'negative.json'],1)
report={'tests':results,'all_passed':all(x['passed'] for x in results),'fixture_note':'Hash and numeric edge cases and negative slack are synthetic. Actual report test uses included project reports.'}
(root/'tests/validation.json').write_text(json.dumps(report,ensure_ascii=False,indent=2),encoding='utf-8')
print(json.dumps(report,ensure_ascii=False,indent=2))
raise SystemExit(0 if report['all_passed'] else 1)
