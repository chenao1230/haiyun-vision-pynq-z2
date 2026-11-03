import argparse,json,math
from pathlib import Path
def values(path):
    data=json.loads(path.read_text(encoding='utf-8-sig'))
    if not isinstance(data,list) or not data:raise ValueError('expected nonempty JSON numeric list')
    if any(type(x) not in (float,int) or not math.isfinite(x) for x in data):raise ValueError('finite numeric values required')
    return data
def main():
    p=argparse.ArgumentParser();p.add_argument('--reference',type=Path,required=True);p.add_argument('--actual',type=Path,required=True)
    p.add_argument('--atol',type=float,default=0);p.add_argument('--rtol',type=float,default=0);p.add_argument('--output',type=Path,required=True);a=p.parse_args()
    if min(a.atol,a.rtol)<0 or not all(math.isfinite(x) for x in (a.atol,a.rtol)):p.error('tolerances must be finite and nonnegative')
    if a.output.resolve() in (a.reference.resolve(),a.actual.resolve()):p.error('output must not overwrite input')
    try:r=values(a.reference);v=values(a.actual)
    except (ValueError,OSError) as e:p.error(str(e))
    result={'reference_count':len(r),'actual_count':len(v),'atol':a.atol,'rtol':a.rtol,'same_length':len(r)==len(v)}
    if len(r)==len(v):
        diff=[abs(x-y) for x,y in zip(r,v)];bad=[i for i,(x,e) in enumerate(zip(r,diff)) if e>a.atol+a.rtol*abs(x)]
        result.update(max_abs_error=max(diff),mean_abs_error=sum(diff)/len(diff),mismatch_count=len(bad),first_mismatch_indices=bad[:20],passed=not bad)
    else:result['passed']=False
    a.output.parent.mkdir(parents=True,exist_ok=True);a.output.write_text(json.dumps(result,indent=2),encoding='utf-8');print(json.dumps(result));return 0 if result['passed'] else 1
if __name__=='__main__':raise SystemExit(main())
