import argparse,json
from pathlib import Path

def main():
 p=argparse.ArgumentParser();p.add_argument('--reports',type=Path,required=True);p.add_argument('--output',type=Path,required=True);a=p.parse_args()
 data={'resource':{},'timing':{},'clock':{},'power':{},'errors':[]};files={}
 for name in ['utilization.rpt','timing_summary.rpt','clocks.rpt','power_estimate.rpt']:
  f=a.reports/name
  if a.output.resolve()==f.resolve():p.error('output cannot overwrite input')
  files[name]=f.read_text(encoding='utf-8',errors='replace').splitlines() if f.is_file() else []
 labels=['Slice LUTs','Slice Registers','Block RAM Tile','DSPs']
 for line in files['utilization.rpt']:
  c=[s.strip() for s in line.split('|')]
  if len(c)>=6 and c[1] in labels:
   try:data['resource'][c[1]]=dict(zip(['used','available','percent'],[float(c[i].replace(',','')) for i in [2,4,5]]))
   except ValueError:pass
 for label in labels:
  if label not in data['resource']:data['errors'].append('Missing resource: '+label)
 lines=files['timing_summary.rpt']
 for i,line in enumerate(lines):
  if line.strip().startswith('WNS(ns)'):
   for row in lines[i+1:i+5]:
    try:v=list(map(float,row.split()))
    except ValueError:continue
    if len(v)==12:
     data['timing']=dict(zip(['wns_ns','tns_ns','setup_failing_endpoints','setup_total_endpoints','whs_ns','ths_ns','hold_failing_endpoints','hold_total_endpoints','wpws_ns','tpws_ns','pulse_failing_endpoints','pulse_total_endpoints'],v));break
   break
 if not data['timing']:data['errors'].append('Missing timing summary')
 for line in files['clocks.rpt']:
  v=line.split()
  if len(v)>=4 and v[2].startswith('{'):
   try:
    period=float(v[1])
    if period>0:data['clock'][v[0]]={'period_ns':period,'constraint_mhz':1000/period}
   except ValueError:pass
 if not data['clock']:data['errors'].append('Missing clocks')
 for line in files['power_estimate.rpt']:
  v=[s.strip() for s in line.split('|')]
  if len(v)>3 and v[1]=='Total On-Chip Power (W)':
   try:data['power']={'estimated_on_chip_w':float(v[2]),'method':'Vivado estimate; inspect source activity settings'}
   except ValueError:pass
 if not data['power']:data['errors'].append('Missing power estimate')
 data['source_directory']=str(a.reports);data['parse_complete']=not data['errors']
 data['timing_met']=None if not data['timing'] else all(data['timing'][k]>=0 for k in ['wns_ns','whs_ns','wpws_ns'])
 a.output.parent.mkdir(parents=True,exist_ok=True);a.output.write_text(json.dumps(data,ensure_ascii=False,indent=2),encoding='utf-8')
 print(json.dumps(data));return 2 if data['errors'] else 0 if data['timing_met'] else 1
if __name__=='__main__':raise SystemExit(main())
