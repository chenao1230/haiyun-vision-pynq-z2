"""Tk alarm controls. Rule processing lives on AlarmWorker, not canvas redraw."""
import copy,json,time,os
from pathlib import Path
from datetime import datetime
import tkinter as tk
from tkinter import ttk,messagebox
from alarm_engine import validate_config
from alarm_service import AlarmWorker,frame_key

class AlarmUI:
    def setup_alarm(self):
        self.alarm_generation=0;self.alarm_busy=False;self.alarm_live=False;self.alarm_output=None
        self.alarm_rules={};self.alarm_records=[];self.alarm_event_index={};self.alarm_positions={}
        self.draw_mode=None;self.draw_points=[];self.draw_sequence=None;self.alarm_view=None
        self.alarm_worker=AlarmWorker(self.events);self.alarm_worker.start()
        self.alarm_enabled_last=True;self.alarm_enabled=tk.BooleanVar(value=True);self.line_direction=tk.StringVar(value='双向')
        self.confirm_frames=tk.StringVar(value='2');self.max_gap=tk.StringVar(value='8')
        self.alarm_status=tk.StringVar(value='预警：打开历史结果，或连接板卡。绘制规则后分析。')
        self.rule_hint=tk.StringVar(value='位置代理：当前船框底边中心；图像规则不代表米制距离。')
        self.alarm_root=Path(__file__).resolve().parent.parent
        config_dir=self.alarm_config_dir=self.alarm_root/'configs'
        for p in config_dir.glob('*.json'):
            c=validate_config(json.loads(p.read_text(encoding='utf-8-sig')));self.alarm_rules[c['sequence_id']]=c
        bar=ttk.Frame(self.w,padding=(12,0,12,5));bar.pack(fill='x',before=self.progress)
        r1=ttk.Frame(bar);r1.pack(fill='x')
        ttk.Checkbutton(r1,text='启用预警',variable=self.alarm_enabled,command=self.toggle_alarm).pack(side='left')
        for text,cmd in [('画警戒区',lambda:self.begin_draw('zone')),('画越线',lambda:self.begin_draw('line')),
                         ('完成绘制',self.finish_draw),('取消绘制',self.cancel_draw),
                         ('清除本组',self.clear_alarm_group),('保存本组',self.save_alarm_group),
                         ('分析当前结果',self.analyze_alarms)]:
            ttk.Button(r1,text=text,command=cmd).pack(side='left',padx=2)
        r2=ttk.Frame(bar);r2.pack(fill='x',pady=3)
        ttk.Label(r2,text='越线方向').pack(side='left')
        ttk.Combobox(r2,textvariable=self.line_direction,values=['双向','负→正','正→负'],width=7,state='readonly').pack(side='left',padx=3)
        ttk.Label(r2,text='区内确认帧').pack(side='left');ttk.Spinbox(r2,from_=1,to=20,textvariable=self.confirm_frames,width=3).pack(side='left',padx=3)
        ttk.Label(r2,text='最大观测间隔(秒)').pack(side='left');ttk.Spinbox(r2,from_=1,to=120,textvariable=self.max_gap,width=4).pack(side='left',padx=3)
        ttk.Button(r2,text='载入143帧历史实板结果',command=self.load_alarm_demo).pack(side='left',padx=5)
        ttk.Button(r2,text='打开事件输出',command=self.open_alarm_output).pack(side='left')
        ttk.Label(bar,textvariable=self.rule_hint).pack(anchor='w')
        ttk.Label(bar,textvariable=self.alarm_status).pack(anchor='w')
        self.canvas.bind('<Button-1>',self.draw_click)
        self.canvas.bind('<Escape>',lambda e:self.cancel_draw())
        self.canvas.bind('<Return>',lambda e:self.finish_draw())
        self.table.configure(height=4);self.log.configure(height=4)
        panel=ttk.Frame(self.table.master);panel.pack(fill='x',before=self.table,pady=3)
        ttk.Label(panel,text='预警事件（双击定位触发帧）').pack(anchor='w')
        self.alarm_table=ttk.Treeview(panel,columns=('frame','id','type'),show='headings',height=5)
        for k,t,w in [('frame','组/帧',95),('id','ID',30),('type','事件',190)]:
            self.alarm_table.heading(k,text=t);self.alarm_table.column(k,width=w,anchor='center')
        self.alarm_table.pack(fill='x');self.alarm_table.bind('<Double-1>',self.jump_alarm_event)
        self.w.geometry('1440x960');self.w.minsize(1220,900)
    def toggle_alarm(self):
        if self.active:
            self.alarm_enabled.set(self.alarm_enabled_last)
            self.alarm_status.set('运行中保持本次预警设置；停止后再切换。');return
        self.alarm_enabled_last=self.alarm_enabled.get();self.analyze_alarms()
    def _alarm_configs(self):
        configs=copy.deepcopy(self.alarm_rules)
        for c in configs.values():c['enabled']=c.get('enabled',True) and self.alarm_enabled.get()
        return configs
    def _new_alarm_context(self,live=False):
        self.alarm_generation+=1;self.alarm_busy=True;self.alarm_records=[];self.alarm_event_index={}
        for iid in self.alarm_table.get_children():self.alarm_table.delete(iid)
        self.alarm_positions={frame_key(f):i for i,f in enumerate(self.frames)}
        stamp=datetime.now().strftime('%Y%m%d_%H%M%S')+'_'+str(time.time_ns()%1000000)
        self.alarm_output=self.alarm_root/('runs' if live else 'analysis')/('LIVE_' if live else 'OFFLINE_')/stamp
        self.alarm_output.parent.mkdir(parents=True,exist_ok=True)
        return self.alarm_generation,self.alarm_output
    def begin_live_alarm(self,origin="LIVE_BOARD_SERIAL"):
        self.alarm_live=True;gen,path=self._new_alarm_context(True)
        self.alarm_worker.submit('begin',gen,self._alarm_configs(),self.image_dir,path,origin)
        self.alarm_status.set('预警：等待本次板卡帧；未配置的组不会触发。')
    def queue_alarm(self,frame):
        self.alarm_positions[frame_key(frame)]=len(self.frames)-1
        if self.alarm_live:self.alarm_worker.submit('frame',self.alarm_generation,copy.deepcopy(frame))
    def end_live_alarm(self,reason):
        if self.alarm_live:
            self.alarm_worker.submit('finish',self.alarm_generation,reason);self.alarm_live=False
    def analyze_alarms(self):
        if self.active:
            self.alarm_status.set('运行中保持本次规则；停止后可重新配置。');return
        if not self.frames:return
        self.playing=False;gen,path=self._new_alarm_context(False)
        for f in self.frames:
            row=self.data_index.get((f['sequence_id'],f['frame_id']))
            if row and row['source_image']==f['source_image']:f['capture_time']=row['timestamp']
            f.pop('alarm',None)
        origin='OFFLINE_PC_PREVIEW' if any(str(f.get('execution_origin','')).startswith('PC') for f in self.frames) else 'OFFLINE_SAVED_BOARD_RESULTS'
        self.alarm_worker.submit('batch',gen,self._alarm_configs(),self.image_dir,path,origin,copy.deepcopy(self.frames))
        self.alarm_status.set('预警：后台按原始帧顺序分析，回放速度不参与规则判断。')
        self.show(self.index)
    def alarm_event(self,kind,value):
        generation=value[0]
        if generation!=self.alarm_generation:return
        if kind=='alarm_started':self.alarm_output=Path(value[1])
        elif kind=='alarm_frame':
            _,key,result=value;position=self.alarm_positions.get(key)
            if position is not None:
                self.frames[position]['alarm']=result
                if position==self.index:self.show(position)
        elif kind=='alarm_events':
            for e in value[1]:
                self.alarm_records.append(e);self.alarm_event_index[e['event_id']]=e
                self.alarm_table.insert('','end',iid=e['event_id'],values=(e['sequence_id']+'/'+str(e['frame_id']+1),e['track_id'] if e['track_id'] is not None else '—',e['title']))
            self.alarm_status.set('预警事件 %d 条；区内持续提示不逐帧重复记录。'%len(self.alarm_records))
        elif kind=='alarm_finished':
            self.alarm_busy=False;summary=value[1]
            self.alarm_status.set('分析完成：%d 帧，%d 条状态/越线事件，截图异常 %d。'%(summary['frames'],summary['events'],len(summary['snapshot_errors'])))
            self.addlog('预警输出：'+summary['output'])
        elif kind=='alarm_error':
            self.alarm_busy=False;self.alarm_status.set('预警异常：'+value[1]);self.addlog(value[1])
    def after_alarm_show(self):
        if not self.frames:return
        f=self.frames[self.index];c=self.alarm_rules.get(f['sequence_id'])
        if c:
            self.rule_hint.set('规则：%s · %s · A→B左侧为正侧；%d 区 / %d 线'%(f['sequence_id'],'人工演示配置' if c.get('source')=='demo_virtual_rule' else '用户绘制',len(c['zones']),len(c['lines'])))
        else:self.rule_hint.set('本组 %s 未配置；可在图上绘制警戒区或越线。'%f['sequence_id'])
        self.draw_preview()
    def begin_draw(self,mode):
        if self.active:return
        if not self.frames:messagebox.showinfo('绘制规则','先打开结果，或点击“载入143帧历史实板结果”。');return
        self.playing=False;self.draw_mode=mode;self.draw_points=[];self.draw_sequence=self.frames[self.index]['sequence_id']
        self.canvas.focus_set();self.canvas.configure(cursor='crosshair')
        self.alarm_status.set('绘制：警戒区点击至少3个点；越线点击A、B两点。完成后点“完成绘制”或按Enter，Esc取消。')
    def draw_click(self,event):
        if self.draw_mode is None or not self.alarm_view:return
        x,y,w,h=self.alarm_view
        if not (x<=event.x<=x+w and y<=event.y<=y+h):return
        if self.draw_mode=='line' and len(self.draw_points)>=2:return
        self.draw_points.append([(event.x-x)/w,(event.y-y)/h]);self.draw_preview()
    def draw_preview(self):
        self.canvas.delete('alarm_drawing')
        if not self.draw_points or not self.alarm_view:return
        x,y,w,h=self.alarm_view;pts=[(x+p[0]*w,y+p[1]*h) for p in self.draw_points]
        if len(pts)>1:self.canvas.create_line(*[v for p in pts for v in p],fill='#ffdd55',width=3,tags='alarm_drawing')
        for p in pts:self.canvas.create_oval(p[0]-4,p[1]-4,p[0]+4,p[1]+4,fill='#ffdd55',tags='alarm_drawing')
    def cancel_draw(self):
        self.draw_mode=None;self.draw_points=[];self.canvas.delete('alarm_drawing');self.canvas.configure(cursor='')
    def finish_draw(self):
        if self.active or not self.draw_mode:return
        if not self.frames or self.frames[self.index]['sequence_id']!=self.draw_sequence:self.cancel_draw();return
        f=self.frames[self.index];seq=f['sequence_id']
        c=copy.deepcopy(self.alarm_rules.get(seq,dict(version=1,sequence_id=seq,image_size=[f['width'],f['height']],zones=[],lines=[])))
        c.update(source='user_drawn',reference_image=f['source_image'],enabled=True)
        try:
            confirm=int(self.confirm_frames.get());gap=float(self.max_gap.get())
            if self.draw_mode=='zone':
                used={r['id'] for r in c.get('zones',[])+c.get('lines',[])}
                number=1
                while 'zone'+str(number) in used:number+=1
                c.setdefault('zones',[]).append(dict(id='zone'+str(number),name='警戒区'+str(number),vertices=self.draw_points,confirm_frames=confirm,max_gap_s=gap))
            else:
                c['lines']=[dict(id='line1',name='通行线',points=self.draw_points,direction={'双向':'both','负→正':'neg_to_pos','正→负':'pos_to_neg'}[self.line_direction.get()],max_gap_s=gap)]
            self.alarm_rules[seq]=validate_config(c)
        except (ValueError,KeyError) as e:messagebox.showerror('规则无效',str(e));return
        self.cancel_draw();self._save_config(seq);self.analyze_alarms()
    def _save_config(self,seq):
        self.alarm_config_dir.mkdir(parents=True,exist_ok=True)
        p=self.alarm_config_dir/(seq+'.json')
        p.write_text(json.dumps(self.alarm_rules[seq],ensure_ascii=False,indent=2),encoding='utf-8')
    def save_alarm_group(self):
        if self.active or not self.frames:return
        seq=self.frames[self.index]['sequence_id']
        if seq not in self.alarm_rules:return
        try:
            c=copy.deepcopy(self.alarm_rules[seq])
            for rule in c['zones']:rule['confirm_frames']=int(self.confirm_frames.get());rule['max_gap_s']=float(self.max_gap.get())
            for rule in c['lines']:rule['max_gap_s']=float(self.max_gap.get());rule['direction']={'双向':'both','负→正':'neg_to_pos','正→负':'pos_to_neg'}[self.line_direction.get()]
            self.alarm_rules[seq]=validate_config(c);self._save_config(seq);self.analyze_alarms()
        except (ValueError,KeyError) as e:messagebox.showerror('规则无效',str(e))
    def clear_alarm_group(self):
        if self.active or not self.frames:return
        f=self.frames[self.index];seq=f['sequence_id']
        # Persist an explicit disabled config, never delete unrelated files.
        self.alarm_rules[seq]=dict(version=1,sequence_id=seq,image_size=[f['width'],f['height']],enabled=False,source='user_disabled',zones=[],lines=[])
        self._save_config(seq);self.analyze_alarms()
    def load_alarm_demo(self):
        if self.active:return
        p=Path('E:/Ship_Serial_V3_20261029/runs/R6AE48D123D/frames.jsonl')
        if not p.exists():messagebox.showinfo('历史结果','此电脑缺少原143帧板卡结果，请用“打开结果”选择文件。');return
        self.frames=[json.loads(s) for s in p.read_text(encoding='utf-8-sig').splitlines() if s.strip()]
        self.index=0;self.playing=False;self.refresh_ranges();self.source.set('显示来源：143帧历史实板结果，离线预警分析')
        self.analyze_alarms();self.show(0)
    def jump_alarm_event(self,event=None):
        if self.active:return
        selected=self.alarm_table.selection()
        if not selected:return
        e=self.alarm_event_index[selected[0]]
        for i,f in enumerate(self.frames):
            if f.get('run_id','REPLAY')==e['run_id'] and f['sequence_id']==e['sequence_id'] and f['frame_id']==e['frame_id']:
                self.playing=False;self.show(i);return
    def open_alarm_output(self):
        if self.alarm_output and self.alarm_output.is_dir():os.startfile(str(self.alarm_output))

