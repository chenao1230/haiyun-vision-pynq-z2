"""Image-space alarm rules. No metric distance or collision predictions."""
import copy,hashlib,json,math
from datetime import datetime
from protocol import NAMES

LABELS={'ENTER':'进入警戒区','INITIAL_OCCUPANCY':'初始已在区内','EXIT':'离开警戒区',
 'LOST':'目标失联（未确认离开）','CROSS':'定向越线','DETECTION_OCCUPANCY':'区域检测到船',
 'DETECTION_CLEAR':'区域连续未检测到船','OBSERVATION_END':'观察结束时仍在区内'}
def capture_seconds(value):
    try:
        n=float(value)
        return n if math.isfinite(n) else None
    except (ValueError,TypeError):
        try:return datetime.fromisoformat(str(value)).timestamp()
        except (ValueError,TypeError,OverflowError):return None
def cross(a,b,p):return (b[0]-a[0])*(p[1]-a[1])-(b[1]-a[1])*(p[0]-a[0])
def segment_distance(p,a,b):
    dx,dy=b[0]-a[0],b[1]-a[1];den=dx*dx+dy*dy
    u=max(0.,min(1.,((p[0]-a[0])*dx+(p[1]-a[1])*dy)/den)) if den else 0.
    return math.hypot(p[0]-a[0]-u*dx,p[1]-a[1]-u*dy)
def intersects(a,b,c,d):
    if max(a[0],b[0])+1e-10<min(c[0],d[0]) or max(c[0],d[0])+1e-10<min(a[0],b[0]):return False
    if max(a[1],b[1])+1e-10<min(c[1],d[1]) or max(c[1],d[1])+1e-10<min(a[1],b[1]):return False
    return cross(a,b,c)*cross(a,b,d)<=1e-12 and cross(c,d,a)*cross(c,d,b)<=1e-12
def polygon_side(p,vertices,margin):
    if min(segment_distance(p,a,b) for a,b in zip(vertices,vertices[1:]+vertices[:1]))<=margin:return 'boundary'
    inside=False;x,y=p
    for a,b in zip(vertices,vertices[1:]+vertices[:1]):
        if (a[1]>y)!=(b[1]>y) and x<(b[0]-a[0])*(y-a[1])/(b[1]-a[1])+a[0]:inside=not inside
    return 'inside' if inside else 'outside'
def validate_config(config):
    c=copy.deepcopy(config)
    if c.get('version')!=1 or not c.get('sequence_id'):raise ValueError('预警配置版本或组号错误')
    wh=c.get('image_size',[])
    if len(wh)!=2 or any(not isinstance(n,int) or n<=0 for n in wh):raise ValueError('配置原图尺寸错误')
    c.setdefault('enabled',True);c.setdefault('classes',list(range(6)));c.setdefault('det_min_score',.5)
    if not isinstance(c['enabled'],bool) or any(x not in range(6) for x in c['classes']):raise ValueError('无效类别/开关')
    if not 0<=c['det_min_score']<=1:raise ValueError('无效检测分数阈值')
    c.setdefault('zones',[]);c.setdefault('lines',[]);ids=set()
    for kind,key in [('zone','zones'),('line','lines')]:
        for r in c[key]:
            rid=r.get('id')
            if not isinstance(rid,str) or not rid or rid in ids:raise ValueError('规则ID缺失或重复')
            ids.add(rid);r.setdefault('name','警戒区' if kind=='zone' else '越线')
            points=r.get('vertices' if kind=='zone' else 'points',[])
            if (kind=='zone' and len(points)<3) or (kind=='line' and len(points)!=2):raise ValueError('区域至少3点，线段恰好2点')
            if any(len(p)!=2 or not all(isinstance(v,(int,float)) and math.isfinite(v) and 0<=v<=1 for v in p) for p in points):raise ValueError('配置坐标须为0～1')
            if len({tuple(p) for p in points})!=len(points):raise ValueError('顶点重复')
            if kind=='zone':
                area=abs(sum(a[0]*b[1]-a[1]*b[0] for a,b in zip(points,points[1:]+points[:1])))/2
                if area<1e-5:raise ValueError('区域面积过小')
                edges=list(zip(points,points[1:]+points[:1]))
                for i,(a,b) in enumerate(edges):
                    for j,(d,e) in enumerate(edges):
                        if j>i+1 and not(i==0 and j==len(edges)-1) and intersects(a,b,d,e):raise ValueError('多边形边不能交叉')
                r.setdefault('confirm_frames',2);r.setdefault('exit_frames',2);r.setdefault('missing_frames',2)
                if any(not isinstance(r[k],int) or not 1<=r[k]<=20 for k in ['confirm_frames','exit_frames','missing_frames']):raise ValueError('确认/缺失帧数超范围')
            else:
                if math.dist(*points)<.01:raise ValueError('线段太短')
                r.setdefault('direction','both')
                if r['direction'] not in ['both','neg_to_pos','pos_to_neg']:raise ValueError('越线方向错误')
            r.setdefault('margin',.008);r.setdefault('max_gap_s',8.)
            if not 0<=r['margin']<=.1 or not 0<r['max_gap_s']<=120:raise ValueError('边界/间隔参数错误')
    return c
def config_hash(c):return hashlib.sha256(json.dumps(c,sort_keys=True,ensure_ascii=False).encode()).hexdigest()[:16]

class AlarmEngine:
    def __init__(self,configs,namespace='ANALYSIS',origin='OFFLINE_BOARD_RESULTS'):
        self.configs={s:validate_config(c) for s,c in configs.items()}
        if any(s!=c['sequence_id'] for s,c in self.configs.items()):raise ValueError('配置组号不一致')
        self.namespace=namespace;self.origin=origin;self.states={};self.line_states={};self.cache={};self.last={};self.modes={};self.serial=0;self.finished=False
    def _event(self,f,rule,kind,state,obs=None,**extra):
        self.serial+=1;obs=obs or state.get('last_obs',{})
        result=dict(event_id='%s-%06d'%(self.namespace,self.serial),type=kind,title=LABELS[kind],
          run_id=f.get('run_id','REPLAY'),sequence_id=f['sequence_id'],rule_id=rule['id'],rule_name=rule['name'],
          frame_id=f['frame_id'],source_image=f['source_image'],capture_time=f.get('capture_time'),
          track_id=obs.get('track_id'),class_id=obs.get('class_id'),class_name=NAMES[obs['class_id']] if obs.get('class_id') in range(6) else '',
          detection_index=obs.get('detection_index'),box=obs.get('box'),proxy_point=obs.get('point'),
          start_frame_id=state.get('start_frame_id',f['frame_id']),episode_index=state.get('episode',0),
          config_id=config_hash(self.configs[f['sequence_id']]),data_origin=self.origin,
          meaning='image_space_rule_event_not_metric_collision')
        result.update(extra);return result
    def process(self,frame):
        f=copy.deepcopy(frame);seq=f['sequence_id'];fid=f['frame_id'];mode=f['mode']
        key=(f.get('run_id','REPLAY'),seq,fid)
        fingerprint=hashlib.sha256(json.dumps({k:f.get(k) for k in ['run_id','sequence_id','frame_id','source_image','width','height','mode','capture_time','detections','tracks']},sort_keys=True).encode()).hexdigest()
        if key in self.cache:
            digest,result=self.cache[key]
            if digest!=fingerprint:raise ValueError('相同帧身份的内容改变')
            out=copy.deepcopy(result);out['duplicate']=True;out['events']=[];return out
        if self.finished:raise ValueError('已结束的分析不能再接收新帧')
        if seq in self.last and fid<=self.last[seq]:raise ValueError('预警分析必须按帧顺序推进')
        out=dict(status='no_rules',events=[],targets=[],zone_states=[],config=None,config_id=None,duplicate=False)
        c=self.configs.get(seq)
        if c and c['image_size']!=[f['width'],f['height']]:out['status']='config_mismatch';c=None
        if c:
            out.update(config=c,config_id=config_hash(c),status='configured' if c['enabled'] else 'disabled')
        if c and c['enabled']:
            if seq in self.modes and self.modes[seq]!=mode:
                self.states={k:v for k,v in self.states.items() if k[0]!=seq};self.line_states={k:v for k,v in self.line_states.items() if k[0]!=seq}
            self.modes[seq]=mode;t=capture_seconds(f.get('capture_time'));seen=set()
            obs=[]
            for o in f['tracks'] if mode=='TRACK' else f['detections']:
                if o['class_id'] not in c['classes'] or (mode=='DET' and o['score']<c['det_min_score']):continue
                b=o.get('display_box',o['box']);p=[(b[0]+b[2])/2/f['width'],b[3]/f['height']]
                obs.append(dict(track_id=o.get('track_id'),detection_index=o['detection_index'],class_id=o['class_id'],score=o['score'],box=b,point=p))
            for rule in c['zones']:
                candidates=[o for o in obs if polygon_side(o['point'],rule['vertices'],rule['margin'])=='inside']
                boundary=[o for o in obs if polygon_side(o['point'],rule['vertices'],rule['margin'])=='boundary']
                active_region=self.states.get((seq,rule['id'],'REGION'),{}).get('active',False)
                regional=candidates or (boundary if active_region else [])
                zone_obs=obs if mode=='TRACK' else ([regional[0]] if regional else [])
                for o in zone_obs:
                    tid=o['track_id'] if mode=='TRACK' else 'REGION';sk=(seq,rule['id'],tid);seen.add(sk)
                    state=self.states.get(sk)
                    if state and self._gap(state,fid,t,rule):
                        if state['active']:out['events'].append(self._event(f,rule,'LOST' if mode=='TRACK' else 'DETECTION_CLEAR',state))
                        self.states.pop(sk);state=None
                    if state is None:
                        state=dict(active=False,inside_count=0,outside_count=0,missing=0,seen_outside=False,episode=0,last_time=t,last_fid=fid,start_frame_id=fid,last_obs=o)
                        self.states[sk]=state
                    side=polygon_side(o['point'],rule['vertices'],rule['margin'])
                    state.update(missing=0,last_time=t,last_fid=fid,last_obs=o)
                    if side=='inside':
                        state['outside_count']=0
                        if not state['active']:
                            if not state['inside_count']:state['start_frame_id']=fid
                            state['inside_count']+=1
                            needed=rule['confirm_frames'] if mode=='TRACK' else 1
                            if state['inside_count']>=needed:
                                state['active']=True;state['episode']+=1
                                kind=('ENTER' if state['seen_outside'] else 'INITIAL_OCCUPANCY') if mode=='TRACK' else 'DETECTION_OCCUPANCY'
                                out['events'].append(self._event(f,rule,kind,state,o,zone_count=len(candidates)))
                    elif side=='outside':
                        state['inside_count']=0;state['seen_outside']=True;state['outside_count']+=1
                        if state['active'] and state['outside_count']>=rule['exit_frames']:
                            out['events'].append(self._event(f,rule,'EXIT',state,o));state['active']=False
                    else:state['outside_count']=0;state['inside_count']=0
                    out['targets'].append(dict(track_id=o['track_id'],detection_index=o['detection_index'],rule_id=rule['id'],state='active' if state['active'] else 'pending' if state['inside_count'] else 'outside',point=o['point']))
                # Absent tracks are unknown, never treated as measured exit.
                for sk,state in list(self.states.items()):
                    if sk[:2]!=(seq,rule['id']) or sk in seen:continue
                    state['missing']+=1;state['inside_count']=0;state['outside_count']=0
                    limit=rule['exit_frames'] if mode=='DET' else rule['missing_frames']+1
                    elapsed_bad=self._gap(state,fid,t,rule)
                    if state['missing']>=limit or elapsed_bad:
                        if state['active']:out['events'].append(self._event(f,rule,'DETECTION_CLEAR' if mode=='DET' else 'LOST',state))
                        del self.states[sk]
                for sk,state in self.states.items():
                    if sk[:2]==(seq,rule['id']) and (state['active'] or state['inside_count']):
                        out['zone_states'].append(dict(rule_id=rule['id'],track_id=None if sk[2]=='REGION' else sk[2],active=state['active'],missing=state['missing'],state='暂失' if state['missing'] else '区内' if state['active'] else '待确认'))
            if mode=='TRACK':
                for rule in c['lines']:
                    a,b=rule['points'];length=math.dist(a,b)
                    for o in obs:
                        sk=(seq,rule['id'],o['track_id']);d=cross(a,b,o['point'])/length
                        if abs(d)<=rule['margin']:continue
                        side=1 if d>0 else -1;prev=self.line_states.get(sk)
                        if prev and not self._gap(prev,fid,t,rule) and fid-prev['last_fid']<=3:
                            if side!=prev['side'] and intersects(prev['point'],o['point'],a,b):
                                direction='neg_to_pos' if prev['side']<side else 'pos_to_neg'
                                if rule['direction'] in ['both',direction]:
                                    out['events'].append(self._event(f,rule,'CROSS',prev,o,direction=direction,previous_frame_id=prev['last_fid'],previous_capture_time=prev['capture_time'],crossing_time='between_two_observations'))
                        self.line_states[sk]=dict(side=side,point=o['point'],last_time=t,last_fid=fid,capture_time=f.get('capture_time'),start_frame_id=fid,last_obs=o)
        self.last[seq]=fid;self.cache[key]=(fingerprint,copy.deepcopy(out));return out
    @staticmethod
    def _gap(state,fid,t,rule):
        if t is not None and state.get('last_time') is not None:
            delta=t-state['last_time']
            if delta<0 or delta>rule['max_gap_s']:return True
        return fid-state['last_fid']>rule.get('missing_frames',2)+1
    def finish(self,frames,reason='COMPLETED'):
        if self.finished:return []
        self.finished=True;last={f['sequence_id']:f for f in frames};events=[]
        for sk,state in self.states.items():
            if state['active'] and sk[0] in last:
                rule=next(r for r in self.configs[sk[0]]['zones'] if r['id']==sk[1])
                events.append(self._event(last[sk[0]],rule,'OBSERVATION_END',state,end_reason=reason))
        return events

