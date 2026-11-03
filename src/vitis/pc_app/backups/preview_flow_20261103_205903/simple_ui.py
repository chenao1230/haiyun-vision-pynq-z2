"""Simple drag-to-draw controls over the existing alarm implementation."""
import copy,json,os,sys
from pathlib import Path
from datetime import datetime
import tkinter as tk
from tkinter import ttk,messagebox
from alarm_ui import AlarmUI
from alarm_engine import validate_config
from alarm_service import AlarmWorker
WARNING_TYPES={'ENTER','INITIAL_OCCUPANCY','CROSS','LOST','DETECTION_OCCUPANCY'}

class SimpleAlarmUI(AlarmUI):
    def setup_alarm(self):
        self.alarm_generation=0;self.alarm_busy=False;self.alarm_live=False;self.alarm_output=None
        self.alarm_rules={};self.alarm_records=[];self.alarm_event_index={};self.alarm_positions={}
        self.draw_mode=None;self.draw_points=[];self.draw_sequence=None;self.alarm_view=None;self.drag_start=None
        self.alarm_worker=AlarmWorker(self.events);self.alarm_worker.start()
        self.alarm_enabled_last=True;self.alarm_enabled=tk.BooleanVar(value=True)
        self.line_direction=tk.StringVar(value='双向');self.confirm_frames=tk.StringVar(value='2');self.max_gap=tk.StringVar(value='8')
        self.show_all_events=tk.BooleanVar(value=False);self._shown_rule_group=None
        self.alarm_status=tk.StringVar(value='画框即可设置警戒区，松开鼠标自动保存。')
        self.rule_hint=tk.StringVar(value='未预设警戒区或越线；请自行画区。')
        self.alarm_root=Path(__file__).resolve().parent.parent;self.alarm_config_dir=self.alarm_root/'configs'
        self.alarm_config_dir.mkdir(parents=True,exist_ok=True)
        for p in self.alarm_config_dir.glob('*.json'):
            try:
                c=validate_config(json.loads(p.read_text(encoding='utf-8-sig')));self.alarm_rules[c['sequence_id']]=c
            except (ValueError,OSError) as e:self.addlog('预警配置未加载：'+p.name+' '+str(e))
        bar=ttk.Frame(self.w,padding=(12,0,12,5));bar.pack(fill='x',before=self.progress)
        row=ttk.Frame(bar);row.pack(fill='x')
        ttk.Checkbutton(row,text='预警',variable=self.alarm_enabled,command=self.toggle_alarm).pack(side='left',padx=(0,8))
        self.zone_button=ttk.Button(row,text='画矩形区',command=lambda:self.begin_draw('zone'));self.zone_button.pack(side='left',padx=3)
        self.line_button=ttk.Button(row,text='画越线',command=lambda:self.begin_draw('line'));self.line_button.pack(side='left',padx=3)
        ttk.Button(row,text='清除本组',command=self.clear_alarm_group).pack(side='left',padx=3)
        ttk.Button(row,text='更多设置',command=self.open_settings).pack(side='left',padx=3)
        ttk.Label(row,textvariable=self.rule_hint).pack(side='left',padx=12)
        ttk.Label(bar,textvariable=self.alarm_status).pack(anchor='w',pady=(3,0))
        self.canvas.bind('<ButtonPress-1>',self.draw_click)
        self.canvas.bind('<B1-Motion>',self.draw_motion)
        self.canvas.bind('<ButtonRelease-1>',self.draw_release)
        self.canvas.bind('<Escape>',lambda e:self.cancel_draw())
        self.table.configure(height=5,displaycolumns=('id','class','score'))
        self.log.pack_forget()
        if hasattr(self,'log_label'):self.log_label.pack_forget()
        if hasattr(self,'range_note'):self.range_note.pack_forget()
        panel=ttk.Frame(self.table.master);panel.pack(fill='x',before=self.table,pady=4)
        ttk.Label(panel,text='警示记录（单击回看）').pack(anchor='w')
        frame=ttk.Frame(panel);frame.pack(fill='x')
        self.alarm_table=ttk.Treeview(frame,columns=('frame','id','type'),show='headings',height=6)
        for key,title,width in [('frame','组/帧',90),('id','ID',30),('type','警示',180)]:
            self.alarm_table.heading(key,text=title);self.alarm_table.column(key,width=width,anchor='center')
        scroll=ttk.Scrollbar(frame,orient='vertical',command=self.alarm_table.yview)
        self.alarm_table.configure(yscrollcommand=scroll.set);self.alarm_table.pack(side='left',fill='x',expand=True);scroll.pack(side='right',fill='y')
        self.alarm_table.bind('<<TreeviewSelect>>',self.jump_alarm_event)
        self.w.geometry('1360x860');self.w.minsize(1160,760)
    def begin_draw(self,mode):
        if self.active:self.alarm_status.set('先停止运行，再画区域或线。');return
        if not self.frames:self.alarm_status.set('先打开结果，或点击“看演示”，再画。');return
        self.cancel_draw();self.playing=False;self.draw_mode=mode
        self.draw_sequence=self.frames[self.index]['sequence_id'];self.canvas.focus_set();self.canvas.configure(cursor='crosshair')
        self.alarm_status.set('按住鼠标左键拖出矩形，松开自动保存；Esc取消。' if mode=='zone' else '按住左键从A拖到B画线，松开自动保存；Esc取消。')
        self.zone_button.configure(text='拖拽画框…' if mode=='zone' else '画矩形区')
        self.line_button.configure(text='拖拽画线…' if mode=='line' else '画越线')
    def _position(self,event,clamp=False):
        if not self.alarm_view:return None
        x,y,w,h=self.alarm_view
        if w<=0 or h<=0:return None
        px,py=(event.x-x)/w,(event.y-y)/h
        if not clamp and not(0<=px<=1 and 0<=py<=1):return None
        return [min(1.,max(0.,px)),min(1.,max(0.,py))]
    def draw_click(self,event):
        if not self.draw_mode:return
        p=self._position(event)
        if p is None:return
        self.drag_start=p;self.draw_points=[p,p];self.draw_preview()
    def draw_motion(self,event):
        if not self.draw_mode or self.drag_start is None:return
        p=self._position(event,True)
        if p is None:return
        self.draw_points=[self.drag_start,p];self.draw_preview()
    def draw_release(self,event):
        if not self.draw_mode or self.drag_start is None:return
        if not self.frames or self.frames[self.index]['sequence_id']!=self.draw_sequence:self.cancel_draw();return
        end=self._position(event,True)
        if end is None:return
        a,b=self.drag_start,end;_,_,w,h=self.alarm_view
        if self.draw_mode=='zone':
            if abs(a[0]-b[0])*w<8 or abs(a[1]-b[1])*h<8:
                self.drag_start=None;self.draw_points=[];self.draw_preview();self.alarm_status.set('框太小，请重新拖拽。Esc取消。');return
            x1,x2=sorted([a[0],b[0]]);y1,y2=sorted([a[1],b[1]])
            self.draw_points=[[x1,y1],[x2,y1],[x2,y2],[x1,y2]]
        else:
            if ((a[0]-b[0])*w)**2+((a[1]-b[1])*h)**2<12**2:
                self.drag_start=None;self.draw_points=[];self.draw_preview();self.alarm_status.set('线太短，请重新拖拽。Esc取消。');return
            self.draw_points=[a,b]
        self.finish_draw()
    def draw_preview(self):
        self.canvas.delete('alarm_drawing')
        if not self.draw_points or not self.alarm_view:return
        x,y,w,h=self.alarm_view;pts=[(x+p[0]*w,y+p[1]*h) for p in self.draw_points]
        if self.draw_mode=='zone' and len(pts)==2:
            self.canvas.create_rectangle(*pts[0],*pts[1],outline='#ffdc60',width=3,tags='alarm_drawing')
        elif self.draw_mode=='line' and len(pts)==2:
            self.canvas.create_line(*pts[0],*pts[1],fill='#65e5ef',width=3,tags='alarm_drawing')
            self.canvas.create_text(pts[0][0]+8,pts[0][1]-10,text='A',fill='#65e5ef',tags='alarm_drawing')
            self.canvas.create_text(pts[1][0]+8,pts[1][1]-10,text='B',fill='#65e5ef',tags='alarm_drawing')
    def finish_draw(self):
        mode=self.draw_mode
        super().finish_draw()
        if self.draw_mode is None and mode:self.alarm_status.set('矩形区已保存，正在更新警示。' if mode=='zone' else '通行线已保存，正在更新警示。')
    def cancel_draw(self):
        self.drag_start=None
        super().cancel_draw()
        if hasattr(self,'zone_button'):self.zone_button.configure(text='画矩形区');self.line_button.configure(text='画越线')
    def after_alarm_show(self):
        if not self.frames:return
        f=self.frames[self.index];seq=f['sequence_id'];c=self.alarm_rules.get(seq)
        if self.draw_mode and seq!=self.draw_sequence:self.cancel_draw()
        if c and c.get('enabled',True):
            parts=[]
            if c.get('zones'):parts.append(str(len(c['zones']))+'个区域已设')
            if c.get('lines'):parts.append('越线已设')
            self.rule_hint.set(seq+'：'+'、'.join(parts)+('（演示）' if c.get('source')=='demo_virtual_rule' else ''))
        else:self.rule_hint.set(seq+'：未设置预警')
        if self._shown_rule_group!=seq:
            self._shown_rule_group=seq
            if c:
                z=next(iter(c.get('zones',[])),{});l=next(iter(c.get('lines',[])),{})
                self.confirm_frames.set(str(z.get('confirm_frames',2)));self.max_gap.set(str(z.get('max_gap_s',l.get('max_gap_s',8))))
                self.line_direction.set({'both':'双向','neg_to_pos':'负→正','pos_to_neg':'正→负'}[l.get('direction','both')])
        self.frame_details.set(self.info.get())
        self.info.set('%s · 第%d帧\n检测 %d 艘 · 轨迹 %d 条'%(f.get('scene_title',seq),f['frame_id']+1,len(f['detections']),len(f['tracks'])))
        valid_ranges=[r for r in f.get('range_results',[]) if r.get('valid')]
        if valid_ranges:
            self.info.set(self.info.get()+'\n单目估距：'+'，'.join('~%.1f m'%r['distance_m'] for r in valid_ranges))
        elif self.range_enabled() and (f.get('detections') or f.get('tracks')):
            self.info.set(self.info.get()+'\n单目估距：正在计算或当前结果不可用')
        if seq in {'DETECT10','DETECT06'}:
            catalog=self.manifest.with_suffix('.scenes.json')
            if catalog.is_file():
                meta=json.loads(catalog.read_text(encoding='utf-8-sig'))
                item=next((r for r in meta.get('independent_images',[]) if r['source_image']==f['source_image']),None)
                if item:self.info.set(item['number']+' '+item['title']+'\n检测 %d 艘'%len(f['detections']))
        show_distance=self.range_enabled() or bool(f.get('range_results'))
        self.table.configure(displaycolumns=('id','class','score','distance') if show_distance else ('id','class','score'))
        self.simple_timing.set('本帧计算 %.2f 秒'%(f['timing_us']['compute']/1e6) if not str(f.get('execution_origin','')).startswith('PC') else '电脑预演 · 非本次板卡结果')
        self.draw_preview()
    def alarm_event(self,kind,value):
        super().alarm_event(kind,value)
        if value[0]!=self.alarm_generation:return
        if kind=='alarm_events':
            self.refresh_alarm_list()
            self.alarm_status.set('已记录 %d 条警示，单击右侧记录可回看。'%self._warning_count())
        elif kind=='alarm_finished':
            self.alarm_status.set('已更新：%d 帧 · %d 条警示。'%(value[1]['frames'],self._warning_count()))
            if value[1]['snapshot_errors']:self.alarm_status.set(self.alarm_status.get()+' 有截图未保存，详见日志。')
    def _warning_count(self):return sum(e['type'] in WARNING_TYPES for e in self.alarm_records)
    def refresh_alarm_list(self):
        selected=self.alarm_table.selection()
        for i in self.alarm_table.get_children():self.alarm_table.delete(i)
        for e in self.alarm_records:
            if self.show_all_events.get() or e['type'] in WARNING_TYPES:
                self.alarm_table.insert('','end',iid=e['event_id'],values=(e['sequence_id']+'/'+str(e['frame_id']+1),e['track_id'] if e['track_id'] is not None else '—',e['title']))
        if selected and self.alarm_table.exists(selected[0]):self.alarm_table.selection_set(selected[0])
    def open_settings(self):
        if self.active:self.alarm_status.set('先停止运行，再修改设置。');return
        d=tk.Toplevel(self.w);d.title('更多设置');d.geometry('600x650');d.transient(self.w);d.grab_set()
        content=ttk.Frame(d,padding=16);content.pack(fill='both',expand=True)
        ttk.Label(content,text='预警规则',font=('Microsoft YaHei UI',12,'bold')).pack(anchor='w')
        row=ttk.Frame(content);row.pack(fill='x',pady=7)
        ttk.Label(row,text='区内确认帧').pack(side='left');cf=tk.StringVar(value=self.confirm_frames.get())
        ttk.Spinbox(row,from_=1,to=20,textvariable=cf,width=4).pack(side='left',padx=8)
        ttk.Label(row,text='最大观测间隔(秒)').pack(side='left');gap=tk.StringVar(value=self.max_gap.get())
        ttk.Spinbox(row,from_=1,to=120,textvariable=gap,width=5).pack(side='left',padx=8)
        direction=tk.StringVar(value={'双向':'双向','负→正':'右侧→左侧','正→负':'左侧→右侧'}[self.line_direction.get()])
        row=ttk.Frame(content);row.pack(fill='x',pady=6)
        ttk.Label(row,text='越线方向').pack(side='left')
        ttk.Combobox(row,textvariable=direction,values=['双向','左侧→右侧','右侧→左侧'],state='readonly',width=15).pack(side='left',padx=8)
        ttk.Label(content,text='左右侧相对于画线的 A→B 方向。',foreground='#666666').pack(anchor='w')
        ttk.Checkbutton(content,text='事件表也显示离开、观察结束等状态记录',variable=self.show_all_events,command=self.refresh_alarm_list).pack(anchor='w',pady=6)
        ttk.Separator(content).pack(fill='x',pady=10)
        ttk.Label(content,text='数据与文件',font=('Microsoft YaHei UI',12,'bold')).pack(anchor='w')
        preset=tk.StringVar(value='展示91帧' if len(self.rows)==91 else '展示95帧' if len(self.rows)==95 else '原143帧' if len(self.rows)==143 else '含点云146帧' if len(self.rows)==146 else '保持当前清单')
        row=ttk.Frame(content);row.pack(fill='x',pady=6)
        ttk.Label(row,text='输入数据包').pack(side='left')
        ttk.Combobox(row,textvariable=preset,values=['展示91帧','展示95帧','原143帧','含点云146帧','保持当前清单'],state='readonly',width=18).pack(side='left',padx=8)
        row=ttk.Frame(content);row.pack(fill='x',pady=6)
        ttk.Button(row,text='选择其他清单',command=lambda:(preset.set('保持当前清单'),self.choose_manifest())).pack(side='left',padx=2)
        ttk.Button(row,text='选择原图目录',command=self.choose_images).pack(side='left',padx=2)
        ttk.Button(row,text='打开事件文件夹',command=self.open_alarm_output).pack(side='left',padx=2)
        ttk.Label(content,text='串口固定为115200 / 8N1；板卡与电脑清单需一致。',wraplength=550).pack(anchor='w',pady=6)
        ttk.Label(content,text='清单：'+str(self.manifest),wraplength=550).pack(anchor='w')
        ttk.Separator(content).pack(fill='x',pady=10)
        ttk.Label(content,text='详细信息',font=('Microsoft YaHei UI',12,'bold')).pack(anchor='w')
        ttk.Label(content,textvariable=self.frame_details,wraplength=550).pack(anchor='w',pady=4)
        ttk.Label(content,textvariable=self.timing,wraplength=550).pack(anchor='w',pady=4)
        ttk.Button(content,text='查看运行日志',command=self.open_log).pack(anchor='w',pady=4)
        def apply():
            try:
                n=int(cf.get());g=float(gap.get())
                if not 1<=n<=20 or not 0<g<=120:raise ValueError('确认帧需1～20，观测间隔需大于0且不超过120秒。')
            except ValueError as e:messagebox.showerror('参数错误',str(e),parent=d);return
            self.confirm_frames.set(str(n));self.max_gap.set(str(g));self.line_direction.set({'双向':'双向','左侧→右侧':'正→负','右侧→左侧':'负→正'}[direction.get()])
            profile={'展示91帧':'manifest_showcase91.csv','展示95帧':'manifest_showcase.csv','原143帧':'manifest143.csv','含点云146帧':'manifest146.csv'}.get(preset.get())
            if profile:
                self.manifest=self.alarm_root/'profiles'/profile;self.image_dir=self.alarm_root/'data/images';self.load_manifest()
            self.save_alarm_group();d.destroy()
        buttons=ttk.Frame(content);buttons.pack(side='bottom',fill='x',pady=5)
        ttk.Button(buttons,text='应用并关闭',command=apply).pack(side='right');ttk.Button(buttons,text='关闭',command=d.destroy).pack(side='right',padx=5)
    def open_log(self):
        d=tk.Toplevel(self.w);d.title('运行日志');d.geometry('700x420')
        t=tk.Text(d,wrap='word',font=('Microsoft YaHei UI',10));t.pack(fill='both',expand=True)
        t.insert('end',self.log.get('1.0','end'));t.configure(state='disabled')

