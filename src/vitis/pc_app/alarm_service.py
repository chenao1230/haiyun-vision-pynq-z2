"""Background alarm analysis and evidence output. Does not access a serial port."""
import copy,csv,json,queue,threading,time
from pathlib import Path
from datetime import datetime
from alarm_engine import AlarmEngine
def frame_key(f):return (f.get('run_id','REPLAY'),f['sequence_id'],f['frame_id'])
class Session:
    def __init__(self,configs,images,output,origin):
        self.images=Path(images);self.output=Path(output);self.output.mkdir(parents=True,exist_ok=False)
        (self.output/'snapshots').mkdir();self.frames=[];self.events=[];self.snapshot_errors=[]
        self.engine=AlarmEngine(configs,self.output.name,origin);self.origin=origin
        self.snapshot={'created_at':datetime.now().isoformat(),'origin':origin,'rules':configs,'status':'RUNNING'}
        self._json('config_snapshot.json',self.snapshot)
    def _json(self,name,value):(self.output/name).write_text(json.dumps(value,ensure_ascii=False,indent=2),encoding='utf-8')
    def process(self,frame):
        result=self.engine.process(frame)
        if result['duplicate']:return result,[]
        f=copy.deepcopy(frame);f['alarm']=result;self.frames.append(f)
        with (self.output/'alarm_frames.jsonl').open('a',encoding='utf-8') as out:out.write(json.dumps(f,ensure_ascii=False)+'\n')
        self.persist(result['events'],f);return result,result['events']
    def persist(self,events,frame):
        for e in events:
            e['received_at']=datetime.now().isoformat();e['snapshot']=None
            try:
                from rendering import render,histories
                relative='snapshots/'+e['event_id']+'.jpg'
                im=render(frame,self.images,histories(self.frames));im.save(self.output/relative,quality=90)
                e['snapshot']=relative
            except Exception as ex:self.snapshot_errors.append({'event_id':e['event_id'],'error':str(ex)})
            self.events.append(copy.deepcopy(e))
            with (self.output/'events.jsonl').open('a',encoding='utf-8') as out:out.write(json.dumps(e,ensure_ascii=False)+'\n')
    def finish(self,reason='COMPLETED'):
        extra=self.engine.finish(self.frames,reason)
        byseq={f['sequence_id']:f for f in self.frames}
        for e in extra:self.persist([e],byseq[e['sequence_id']])
        fields=['event_id','type','title','sequence_id','track_id','class_name','rule_name','frame_id','start_frame_id','capture_time','data_origin','snapshot']
        with (self.output/'events.csv').open('w',encoding='utf-8-sig',newline='') as out:
            writer=csv.DictWriter(out,fields,extrasaction='ignore');writer.writeheader();writer.writerows(self.events)
        self.snapshot.update(status=reason,finished_at=datetime.now().isoformat(),frames=len(self.frames),events=len(self.events),snapshot_errors=self.snapshot_errors)
        self._json('config_snapshot.json',self.snapshot)
        return extra,dict(output=str(self.output),frames=len(self.frames),events=len(self.events),snapshot_errors=self.snapshot_errors)
class AlarmWorker(threading.Thread):
    def __init__(self,events):super().__init__(daemon=True);self.events=events;self.jobs=queue.Queue();self.sessions={}
    def submit(self,*args):self.jobs.put(args)
    def close(self):self.jobs.put(None)
    def run(self):
        while True:
            job=self.jobs.get()
            if job is None:return
            kind,generation,*args=job
            try:
                if kind in ['batch','begin']:
                    configs,images,path,origin=args[:4];session=Session(configs,images,path,origin)
                    if kind=='begin':self.sessions[generation]=session;self.events.put(('alarm_started',(generation,str(path))));continue
                    self.events.put(('alarm_started',(generation,str(path))))
                    for frame in args[4]:
                        result,events=session.process(frame)
                        self.events.put(('alarm_frame',(generation,frame_key(frame),result)))
                        if events:self.events.put(('alarm_events',(generation,events)))
                    extra,summary=session.finish()
                    if extra:self.events.put(('alarm_events',(generation,extra)))
                    self.events.put(('alarm_finished',(generation,summary)))
                elif kind=='frame':
                    frame=args[0];session=self.sessions[generation];result,events=session.process(frame)
                    self.events.put(('alarm_frame',(generation,frame_key(frame),result)))
                    if events:self.events.put(('alarm_events',(generation,events)))
                elif kind=='finish':
                    session=self.sessions.pop(generation,None)
                    if session:
                        extra,summary=session.finish(args[0])
                        if extra:self.events.put(('alarm_events',(generation,extra)))
                        self.events.put(('alarm_finished',(generation,summary)))
            except Exception as e:self.events.put(('alarm_error',(generation,str(e))))

