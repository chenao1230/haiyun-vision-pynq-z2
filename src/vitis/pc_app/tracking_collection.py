"""Run separate scene IDs sequentially and retain one ordered result journal."""
import csv,json,secrets,time
from pathlib import Path
from datetime import datetime
from tkinter import messagebox

class TrackingCollectionUI:
    def start_collection(self):
        ids=list(getattr(self,'tracking_collection',[]))
        if not ids or len(ids)!=len(set(ids)) or any(self.scene_meta.get(g,{}).get('mode')!='TRACK' for g in ids):
            messagebox.showerror('合集无效','请加载配套的展示91帧清单。');return
        selected=[r for g in ids for r in self.rows if r['sequence_id']==g]
        if not selected or any(not any(r['sequence_id']==g for r in selected) for g in ids):
            messagebox.showerror('缺少场景','合集中的场景不完整。');return
        missing=[r['source_image'] for r in selected if not (self.image_dir/r['source_image']).is_file()]
        if missing:messagebox.showerror('缺少原图',missing[0]);return
        cid='C'+f'{int(time.time()):08X}'+secrets.token_hex(2).upper()
        directory=self.runs/('COLLECTION_'+cid)
        try:directory.mkdir(parents=True,exist_ok=False)
        except OSError as e:messagebox.showerror('无法保存合集',str(e));return
        self.collection=dict(collection_id=cid,status='RUNNING',started=datetime.now().isoformat(),manifest_crc32=self.local_crc,mode='DET' if self.mode.get()=='仅检测' else 'TRACK',groups=ids,pending=ids.copy(),expected_counts={g:sum(r['sequence_id']==g for r in selected) for g in ids},expected_frames=len(selected),completed=[],current=None,current_received=0,waiting_next=False,cancel_requested=False,directory=str(directory))
        self.range_generation+=1;self.range_pending.clear();self.frame_lookup={}
        self.frames=[];self.index=0;self.playing=False;self.active=True;self.total=len(selected)
        self.progress['maximum']=self.total;self.progress['value']=0
        self.startbtn['state']='disabled';self.source.set('显示来源：当前板卡运行 · 跟踪合集')
        self.begin_live_alarm();self._next_collection_run()
    def _save_collection_summary(self):
        if self.collection:
            (Path(self.collection['directory'])/'collection.json').write_text(json.dumps(self.collection,ensure_ascii=False,indent=2),encoding='utf-8')
    def _next_collection_run(self,expected_collection_id=None):
        c=getattr(self,'collection',None)
        if not c:return
        if expected_collection_id is not None and c['collection_id']!=expected_collection_id:return
        if c['cancel_requested']:self.finish_collection('STOPPED');return
        if not c['pending']:self.finish_collection('SUCCESS');return
        group=c['pending'].pop(0);c['current']=group;c['current_received']=0;c['waiting_next']=False
        self.run_id='R'+f'{int(time.time()):08X}'+secrets.token_hex(2).upper()[:3];c['current_run_id']=self.run_id  # Board limit: 12 ASCII ID characters.
        self._save_collection_summary()
        self.worker.command(f"RUN,{self.run_id},{c['mode']},{group}")
        self.status.set('合集：'+self.scene_meta.get(group,{}).get('title',group)+' · 等待板卡确认…');self.last_frame_time=time.monotonic()
    def record_collection_frame(self,frame):
        c=getattr(self,'collection',None)
        if not c:return True
        if frame['sequence_id']!=c['current'] or frame['frame_id']!=c['current_received']:
            self.worker.command('STOP,'+self.run_id);self.finish_collection('FRAME_ORDER_ERROR');return False
        frame['collection_id']=c['collection_id'];frame['collection_frame']=len(self.frames)+1
        frame['scene_title']=self.scene_meta.get(frame['sequence_id'],{}).get('title',frame['sequence_id'])
        with (Path(c['directory'])/'frames.jsonl').open('a',encoding='utf-8') as f:f.write(json.dumps(frame,ensure_ascii=False)+'\n')
        c['current_received']+=1
        return True
    def collection_done(self,message):
        c=getattr(self,'collection',None)
        if not c:return False
        if message[1]!=self.run_id:return True
        self.board_state='READY';group=c['current']
        count=int(message[3]);expected=c['expected_counts'][group]
        valid=count==expected and c['current_received']==expected
        c['completed'].append(dict(sequence_id=group,run_id=self.run_id,board_status=message[2],board_frames=count,received_frames=c['current_received'],expected_frames=expected))
        if c['cancel_requested']:self.finish_collection('STOPPED');return True
        if message[2]!='SUCCESS' or not valid:
            self.finish_collection(message[2] if message[2]!='SUCCESS' else 'INCOMPLETE');return True
        if c['pending']:
            c['waiting_next']=True;self._save_collection_summary();self.status.set('合集已接收 %d/%d 帧，正在切换场景…'%(len(self.frames),self.total));self.w.after(200,lambda cid=c['collection_id']:self._next_collection_run(cid))
        else:self.finish_collection('SUCCESS')
        return True
    def cancel_collection(self):
        c=getattr(self,'collection',None)
        if not c:return False
        c['cancel_requested']=True;c['pending']=[]
        if c['waiting_next']:self.finish_collection('STOPPED');return True
        self._save_collection_summary();return False
    def finish_collection(self,reason):
        c=getattr(self,'collection',None)
        if not c:return
        c['status']=reason;c['finished']=datetime.now().isoformat();c['received_frames']=len(self.frames);c['pending']=[]
        self._save_collection_summary();self.end_live_alarm(reason);self.collection=None
        self.active=False;self.playing=False;self.startbtn['state']='normal' if self.board_state=='READY' else 'disabled';
        self.status.set('跟踪合集：%s，收到 %d/%d 帧；可导出一个完整视频。'%(reason,len(self.frames),self.total));self.addlog('合集 '+reason+' · '+c['directory'])

