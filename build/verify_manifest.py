from pathlib import Path
import hashlib,json,sys
root=Path(__file__).resolve().parents[1]
manifest=json.loads((root/'report/file_manifest.json').read_text(encoding='utf-8'))
bad=[]
for item in manifest:
 p=root/item['path']
 if not p.is_file():bad.append(item['path']+': missing');continue
 h=hashlib.sha256()
 with p.open('rb') as f:
  for b in iter(lambda:f.read(1048576),b''):h.update(b)
 if h.hexdigest()!=item['sha256']:bad.append(item['path']+': changed')
print(json.dumps({'checked':len(manifest),'errors':bad},ensure_ascii=False))
sys.exit(bool(bad))
