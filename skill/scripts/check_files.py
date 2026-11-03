import argparse, hashlib, json
from pathlib import Path
def sha(path):
    h=hashlib.sha256()
    with path.open('rb') as f:
        for block in iter(lambda:f.read(1024*1024),b''):h.update(block)
    return h.hexdigest()
def main():
    p=argparse.ArgumentParser(description='Compare files by SHA256 without modifying inputs')
    p.add_argument('--reference',required=True,type=Path)
    p.add_argument('--candidate',required=True,nargs='+',type=Path)
    p.add_argument('--output',required=True,type=Path);a=p.parse_args()
    if not a.reference.is_file():p.error('reference file not found')
    if a.output.resolve() in [x.resolve() for x in [a.reference,*a.candidate]]:p.error('output must not overwrite input')
    h=sha(a.reference);rows=[]
    for f in a.candidate:
        digest=sha(f) if f.is_file() else None
        rows.append({'file':str(f),'sha256':digest,'status':'missing' if digest is None else 'same' if h==digest else 'different'})
    result={'reference':str(a.reference),'reference_sha256':h,'files':rows}
    a.output.parent.mkdir(parents=True,exist_ok=True)
    a.output.write_text(json.dumps(result,ensure_ascii=False,indent=2),encoding='utf-8')
    print(json.dumps(result,ensure_ascii=False))
    return 0 if all(r['status']=='same' for r in rows) else 1
if __name__=='__main__':raise SystemExit(main())
