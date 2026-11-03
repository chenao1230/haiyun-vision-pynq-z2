"""PYNQ-Z2 desktop: Ethernet/serial board frames, replay and export."""
import csv,json,queue,secrets,sys,threading,time,zlib
from pathlib import Path
from collections import defaultdict
import tkinter as tk
from tkinter import ttk,filedialog,messagebox
from PIL import Image,ImageTk
ROOT=Path(__file__).resolve().parent
sys.path.insert(0,str(ROOT/'vendor'))
from protocol import NAMES
from transport import TcpWorker
from rendering import render,histories,export_videos
from range_pipeline import RangeService,RangeWorker,range_for,range_text
from simple_ui import SimpleAlarmUI as AlarmUI
from tracking_collection import TrackingCollectionUI
from image_upload import prepare_image,prepare_pil_image
from camera_input import CameraWorker
class App(TrackingCollectionUI,AlarmUI):
    def __init__(self,window):
        self.w=window;window.title('船舶监测');window.geometry('1280x850');window.minsize(1050,720)
        self.stop_requested_run=None;self.events=queue.Queue();self.worker=None;self.frames=[];self.active=False;self.playing=False;self.index=0;self.photo=None
        self.board_crc='';self.board_state='';self.run_id='';self.recovering_stale_run=False;self.image_dir=ROOT.parent/'data/images';self.manifest=ROOT.parent/'data/manifest.csv';self.runs=ROOT.parent/'runs'
        self.sd_manifest=self.manifest;self.sd_image_dir=self.image_dir
        self.data_index={};self.total=0;self.last_frame_time=None;self.collection=None;self.upload_inputs={};self.upload_queue=[];self.upload_batch=False
        self.pc_dataset_root=None;self.dataset_image_dir=self.image_dir;self.pc_batch=None;self.pc_batch_frames={}
        self.camera=None;self.camera_detecting=False;self.camera_result=None;self.camera_photo=None;self.camera_index=tk.StringVar(value='0')
        self.camera_session=None;self.camera_paused=False;self.camera_restart_pending=False
        self.range_service=RangeService(mode='monocular');self.range_worker=RangeWorker(self.events,self.range_service);self.range_worker.start()
        self.range_generation=0;self.range_pending=set();self.frame_lookup={};self.show_depth=tk.BooleanVar(value=True)
        self.status=tk.StringVar(value='未连接：默认使用以太网。也可切换串口或打开结果回放。')
        self.timing=tk.StringVar(value='读取 —   FPGA推理 —   后处理 —   跟踪 —')
        self.simple_timing=tk.StringVar(value='');self.frame_details=tk.StringVar(value='')
        self.info=tk.StringVar(value='等待结果');self.source=tk.StringVar(value='显示来源：无')
        self.host=tk.StringVar(value='192.168.1.10');self.tcp_port=tk.StringVar(value='5000')
        self.group=tk.StringVar(value='ALL');self.mode=tk.StringVar(value='检测＋跟踪＋测距');self.fps=tk.StringVar(value='2')
        style=ttk.Style();style.theme_use('clam');style.configure('TLabel',font=('Microsoft YaHei UI',10));style.configure('TButton',font=('Microsoft YaHei UI',10),padding=6)
        top=ttk.Frame(window,padding=12);top.pack(fill='x')
        ttk.Label(top,text='船舶监测',font=('Microsoft YaHei UI',16,'bold')).pack(side='left')
        ttk.Label(top,textvariable=self.source).pack(side='right')
        tools=ttk.Frame(window,padding=(12,0,12,4));tools.pack(fill='x')
        ttk.Label(tools,text='以太网').pack(side='left')
        ttk.Entry(tools,textvariable=self.host,width=13).pack(side='left',padx=(4,0))
        ttk.Entry(tools,textvariable=self.tcp_port,width=6).pack(side='left')
        self.conn=ttk.Button(tools,text='连接',command=self.connect);self.conn.pack(side='left')
        self.dataset_label=tk.StringVar(value='输入：SD卡场景')
        ttk.Label(tools,textvariable=self.dataset_label).pack(side='left',padx=12)
        self.sdbtn=ttk.Button(tools,text='使用SD卡场景',command=self.use_sd_dataset);self.sdbtn.pack(side='left',padx=4)
        self.datasetbtn=ttk.Button(tools,text='加载电脑91帧数据',command=self.choose_pc_dataset);self.datasetbtn.pack(side='left',padx=4)
        controls=ttk.Frame(window,padding=(12,0,12,8));controls.pack(fill='x')
        ttk.Label(controls,text='场景 ').pack(side='left')
        self.groups=ttk.Combobox(controls,textvariable=self.group,values=['ALL'],width=29,state='readonly');self.groups.pack(side='left');self.groups.bind('<<ComboboxSelected>>',self.scene_changed)
        ttk.Combobox(controls,textvariable=self.mode,values=['仅检测','检测＋跟踪','检测＋跟踪＋测距'],width=18,state='readonly').pack(side='left',padx=7)
        self.startbtn=ttk.Button(controls,text='开始运行',command=self.start,state='disabled');self.startbtn.pack(side='left')
        self.tracking_demo_btn=ttk.Button(controls,text='运行场景1-7追踪',command=self.start_tracking_demo,state='disabled');self.tracking_demo_btn.pack(side='left',padx=5)
        self.uploadbtn=ttk.Button(controls,text='选择任意图片（独立检测）',command=self.choose_upload_image,state='disabled');self.uploadbtn.pack(side='left',padx=5)
        self.stopbtn=ttk.Button(controls,text='停止',command=self.stop,state='disabled');self.stopbtn.pack(side='left',padx=5)
        camera_bar=ttk.Frame(window,padding=(12,0,12,8));camera_bar.pack(fill='x')
        ttk.Label(camera_bar,text='摄像头实时演示 ').pack(side='left')
        ttk.Label(camera_bar,text='设备').pack(side='left')
        ttk.Combobox(camera_bar,textvariable=self.camera_index,values=['0','1','2','3','4','5'],width=3,state='readonly').pack(side='left',padx=4)
        self.camera_openbtn=ttk.Button(camera_bar,text='打开摄像头',command=self.open_camera);self.camera_openbtn.pack(side='left',padx=3)
        self.camera_detectbtn=ttk.Button(camera_bar,text='开始摄像头运行',command=self.toggle_camera_detection,state='disabled');self.camera_detectbtn.pack(side='left',padx=3)
        self.camera_pausebtn=ttk.Button(camera_bar,text='暂停',command=self.toggle_camera_pause,state='disabled');self.camera_pausebtn.pack(side='left',padx=3)
        self.camera_resetbtn=ttk.Button(camera_bar,text='重置追踪',command=self.reset_camera_tracking,state='disabled');self.camera_resetbtn.pack(side='left',padx=3)
        self.camera_closebtn=ttk.Button(camera_bar,text='关闭摄像头',command=self.close_camera,state='disabled');self.camera_closebtn.pack(side='left',padx=3)
        ttk.Label(camera_bar,text='模式由上方下拉框选择；左侧实时预览，右侧显示板卡检测/追踪结果').pack(side='left',padx=10)
        self.progress=ttk.Progressbar(window,mode='determinate');self.progress.pack(fill='x',padx=12)
        ttk.Label(window,textvariable=self.status,padding=(12,6)).pack(anchor='w')
        body=ttk.Frame(window,padding=(12,0,12,0));body.pack(fill='both',expand=True)
        self.canvas=tk.Canvas(body,bg='#101d2b',highlightthickness=0);self.canvas.pack(side='left',fill='both',expand=True)
        self.canvas.bind('<Configure>',lambda e:self.show(self.index) if self.frames else None)
        side=ttk.Frame(body,width=350,padding=(10,0,0,0));side.pack(side='right',fill='y');side.pack_propagate(False)
        ttk.Label(side,textvariable=self.info,wraplength=330,justify='left').pack(anchor='w',pady=4)
        self.table=ttk.Treeview(side,columns=('id','class','score','distance','points'),show='headings',height=13)
        for key,title,width in [('id','ID',35),('class','船舶类型',85),('score','分数',50),('distance','距离(m)',75),('points','支持数',45)]:self.table.heading(key,text=title);self.table.column(key,width=width,anchor='center')
        self.table.pack(fill='both',expand=True,pady=6)
        self.range_note=ttk.Label(side,text='测距随“检测＋跟踪＋测距”模式运行，使用电脑端单目模型估计；~ 表示非激光实测值。',wraplength=330);self.range_note.pack(anchor='w')
        self.log_label=ttk.Label(side,text='操作记录');self.log_label.pack(anchor='w')
        self.log=tk.Text(side,height=7,font=('Microsoft YaHei UI',9),wrap='word');self.log.pack(fill='x')
        bottom=ttk.Frame(window,padding=12);bottom.pack(fill='x')
        ttk.Label(bottom,textvariable=self.simple_timing).pack(anchor='w',pady=(0,7))
        row=ttk.Frame(bottom);row.pack(fill='x')
        ttk.Button(row,text='打开结果',command=self.open_results).pack(side='left')
        ttk.Button(row,text='看演示',command=self.load_alarm_demo).pack(side='left',padx=4)
        ttk.Button(row,text='上一帧',command=lambda:self.seek(-1)).pack(side='left',padx=6)
        ttk.Button(row,text='播放/暂停',command=self.play).pack(side='left')
        ttk.Button(row,text='下一帧',command=lambda:self.seek(1)).pack(side='left',padx=6)
        ttk.Label(row,text='播放速度').pack(side='left');ttk.Combobox(row,textvariable=self.fps,values=['1','2','5','10'],width=4,state='readonly').pack(side='left',padx=4)
        ttk.Checkbutton(row,text='并排显示深度图',variable=self.show_depth,command=lambda:self.show(self.index) if self.frames else None).pack(side='left',padx=8)
        ttk.Button(row,text='导出视频',command=self.export).pack(side='right')
        self.slider=ttk.Scale(bottom,from_=0,to=1,command=self.slide);self.slider.pack(fill='x',pady=(8,0));self.slider_lock=False
        self.setup_alarm()
        self.load_manifest();window.after(50,self.pump);window.after(60,self.camera_tick);window.protocol('WM_DELETE_WINDOW',self.close)
    def addlog(self,text):
        self.log.insert('end',time.strftime('%H:%M:%S')+' '+text+'\n');self.log.see('end')
    def range_enabled(self):return self.mode.get()=='检测＋跟踪＋测距'
    def load_manifest(self):
        try:
            raw=self.manifest.read_bytes();self.local_crc=f'{zlib.crc32(raw)&0xffffffff:08X}'
            with self.manifest.open(encoding='utf-8-sig',newline='') as f:self.rows=list(csv.DictReader(f))
            self.data_index={(r['sequence_id'],int(r['frame_id'])):r for r in self.rows}
            previous=self.selected_sequence()
            self.scene_meta={};self.tracking_collection=[];catalog=self.manifest.with_suffix('.scenes.json')
            if catalog.is_file():
                metadata=json.loads(catalog.read_text(encoding='utf-8-sig'))
                if metadata.get('manifest_crc32')==self.local_crc:
                    self.scene_meta=metadata.get('groups',{});self.tracking_collection=metadata.get('tracking_collection',[])
                else:self.addlog('场景名称文件与清单CRC不一致，使用原组号。')
            ids=list(dict.fromkeys(r['sequence_id'] for r in self.rows))
            self.scene_choices={'ALL（全部，仅检测）' if any(self.scene_meta.get(g,{}).get('mode')=='DET' for g in ids) else 'ALL':'ALL'}
            for gid in ids:
                title=self.scene_meta.get(gid,{}).get('title',gid)
                self.scene_choices[title if title==gid else title+'（'+gid+'）']=gid
                if self.scene_meta.get(gid,{}).get('mode')=='DET' and self.tracking_collection:self.scene_choices['跟踪合集—01至07（85帧）']='TRACK_ALL'
            self.groups['values']=list(self.scene_choices)
            target=previous if previous in ids else ids[0] if self.scene_meta else 'ALL'
            self.group.set(next(label for label,gid in self.scene_choices.items() if gid==target))
            self.scene_changed()
            self.addlog(f'清单已读取：{len(self.rows)} 帧，CRC {self.local_crc}')
        except Exception as e:self.local_crc='';self.rows=[];self.addlog('清单读取失败：'+str(e))
    def choose_pc_dataset(self):
        preferred=ROOT.parents[2]/'data/pc_files'
        if (preferred/'manifest.csv').is_file() and (preferred/'images').is_dir():root=preferred
        else:
            selected=filedialog.askdirectory(title='选择包含 manifest.csv 和 images 文件夹的电脑数据集目录')
            if not selected:return
            root=Path(selected)
        manifest=root/'manifest.csv';images=root/'images'
        if not manifest.is_file() or not images.is_dir():
            messagebox.showerror('数据集无效','所选目录必须同时包含 manifest.csv 和 images 文件夹。');return
        old_manifest,old_input=self.manifest,self.dataset_image_dir
        self.manifest=manifest;self.dataset_image_dir=images
        self.load_manifest()
        if not self.rows:
            self.manifest,self.dataset_image_dir=old_manifest,old_input;self.load_manifest();return
        missing=[r['source_image'] for r in self.rows if not (images/r['source_image']).is_file()]
        if missing:
            self.manifest,self.dataset_image_dir=old_manifest,old_input;self.load_manifest()
            messagebox.showerror('缺少原图',f'{missing[0]}\n电脑数据集与清单不匹配。');return
        self.pc_dataset_root=root;self.dataset_label.set('电脑数据集：'+root.name)
        self.source.set('显示来源：电脑原图 → 以太网 → 板卡')
        self.preview_pc_scene()
        self.status.set(f'电脑91帧数据已载入：{len(self.rows)} 帧。已停在当前场景首帧，可先画警戒区，再点击“开始运行”。')
        self.addlog(f'电脑数据集 {root} / {len(self.rows)} 帧 / CRC {self.local_crc}')
    def use_sd_dataset(self):
        if self.active:messagebox.showinfo('正在运行','请先停止当前运行。');return
        self.pc_dataset_root=None;self.manifest=self.sd_manifest;self.image_dir=self.sd_image_dir;self.dataset_image_dir=self.sd_image_dir
        self.load_manifest();self.frames=[];self.canvas.delete('all');self.info.set('等待结果')
        self.dataset_label.set('输入：SD卡场景');self.source.set('显示来源：无')
        self.status.set('已切换到SD卡场景。选择场景和模式后点击“开始运行”。')
    def selected_sequence(self):
        return getattr(self,'scene_choices',{}).get(self.group.get(),self.group.get())
    def scene_changed(self,event=None):
        self.mode.set('检测＋跟踪')
        if self.pc_dataset_root is not None and not self.active:self.preview_pc_scene()
    def preview_pc_scene(self):
        if self.active or self.pc_dataset_root is None:return
        group=self.selected_sequence()
        if group in ('ALL','TRACK_ALL'):
            self.status.set('请选择一个单独场景，系统会自动显示该组首帧供绘制警戒区。');return
        selected=sorted((r for r in self.rows if r['sequence_id']==group),key=lambda r:int(r['frame_id']))
        if not selected:return
        row=selected[0];path=self.dataset_image_dir/row['source_image']
        if not path.is_file():self.status.set('首帧不存在：'+str(path));return
        source_name='PC_PREVIEW_'+group+'.png';display_path=self.image_dir/source_name;display_path.parent.mkdir(parents=True,exist_ok=True)
        try:
            with Image.open(path) as source:
                image=source.convert('RGB');width,height=image.size;image.save(display_path,format='PNG')
        except Exception as e:self.status.set('首帧预览失败：'+str(e));return
        wire_mode='DET' if self.mode.get()=='仅检测' else 'TRACK'
        frame=dict(run_id='PREVIEW',sequence_id=group,frame_id=int(row['frame_id']),source_image=source_name,
                   width=width,height=height,mode=wire_mode,detections=[],tracks=[],capture_time=row.get('timestamp',''),
                   timing_us=dict(read=0,inference=0,decode_nms=0,tracker=0,sd_csv=0,compute=0),
                   execution_origin='PC_DATASET_PREVIEW')
        self.frames=[frame];self.index=0;self.playing=False;self.progress['maximum']=1;self.progress['value']=0
        self.source.set('显示来源：电脑场景首帧预览（尚未推理）');self.show(0)
        self.status.set(f'{group} 首帧已加载并暂停。现在可画矩形区或越线，完成后点击“开始运行”。')
    def connect(self):
        if self.worker and self.worker.is_alive():self.worker.close();self.status.set('正在断开…');return
        self.board_state='';self.board_crc='';self.recovering_stale_run=False;self.startbtn['state']='disabled';self.uploadbtn['state']='disabled'
        try:
            port=int(self.tcp_port.get())
            if not self.host.get() or not 1<=port<=65535:raise ValueError
        except ValueError:messagebox.showinfo('以太网','请输入有效的板卡 IP 和端口。');return
        self.worker=TcpWorker(self.host.get(),port,self.events,self.runs)
        self.status.set('正在连接板卡以太网…')
        self.worker.start()
    def start_tracking_demo(self):
        if self.active:messagebox.showinfo('正在运行','请先停止当前任务。');return
        if self.board_state!='READY':messagebox.showwarning('板卡未就绪','请先连接板卡并等待READY。');return
        if self.pc_dataset_root is not None:self.use_sd_dataset()
        label=next((name for name,gid in self.scene_choices.items() if gid=='TRACK_ALL'),None)
        if not label:messagebox.showerror('缺少场景1-7','当前SD卡清单中没有完整的跟踪场景合集。');return
        self.group.set(label);self.mode.set('检测＋跟踪');self.start()
    def start(self):
        if self.active:return
        if self.board_state!='READY':messagebox.showwarning('板卡未就绪','请等待权重加载完成。');return
        if self.pc_dataset_root is not None:self.start_pc_batch();return
        if not self.local_crc or self.board_crc!=self.local_crc:messagebox.showerror('输入不一致','电脑 manifest 与板卡 SD manifest 的 CRC 不一致。');return
        group=self.selected_sequence()
        if group=='TRACK_ALL':self.start_collection();return
        selected=[r for r in self.rows if group=='ALL' or r['sequence_id']==group]
        if not selected:messagebox.showerror('场景无效','请选择当前清单中的场景。');return
        if self.mode.get()!='仅检测' and any(getattr(self,'scene_meta',{}).get(r['sequence_id'],{}).get('mode')=='DET' for r in selected):
            messagebox.showinfo('独立图片仅用于检测','独立图片互不连续。请使用仅检测模式；连续跟踪请选择“跟踪01”至“跟踪07”。');return
        missing=[r['source_image'] for r in selected if not (self.image_dir/r['source_image']).is_file()]
        if missing:messagebox.showerror('缺少原图',missing[0]+'\n电脑端缺少用于显示的对应原图。');return
        self.run_id='R'+f'{int(time.time()):08X}'+secrets.token_hex(1).upper()
        self.range_generation+=1;self.range_pending.clear();self.frame_lookup={}
        self.frames=[];self.index=0;self.playing=False;self.active=True;self.total=len(selected);self.progress['maximum']=self.total;self.progress['value']=0
        self.startbtn['state']='disabled';self.stopbtn['state']='normal';self.source.set('显示来源：SD卡场景，板卡运行')
        self.begin_live_alarm();self.worker.command(f"RUN,{self.run_id},{'DET' if self.mode.get()=='仅检测' else 'TRACK'},{group}")
        self.status.set('已发送SD场景运行命令，等待板卡确认…');self.last_frame_time=time.monotonic()
    def start_pc_batch(self):
        group=self.selected_sequence()
        if group in ('ALL','TRACK_ALL'):
            messagebox.showinfo('请选择单个场景','电脑传图连续跟踪会在每个场景开始时重置ID，请先选择跟踪01至跟踪07中的一组。');return
        selected=[r for r in self.rows if r['sequence_id']==group]
        if not selected:messagebox.showerror('场景无效','当前场景没有图片。');return
        if self.mode.get()!='仅检测' and getattr(self,'scene_meta',{}).get(group,{}).get('mode')=='DET':
            messagebox.showinfo('独立图片仅用于检测','这组图片互不连续，请使用“仅检测”模式。');return
        selected=sorted(selected,key=lambda r:int(r['frame_id']))
        missing=[r['source_image'] for r in selected if not (self.dataset_image_dir/r['source_image']).is_file()]
        if missing:messagebox.showerror('缺少原图',missing[0]);return
        self.run_id='B'+f'{int(time.time()):08X}'+secrets.token_hex(1).upper()
        wire_mode='DET' if self.mode.get()=='仅检测' else 'TRACK'
        self.pc_batch=dict(run_id=self.run_id,group=group,mode=wire_mode,count=len(selected),ended=False)
        self.pc_batch_frames={int(r['frame_id']):r for r in selected};self.upload_queue=list(selected);self.upload_batch=True
        self.range_generation+=1;self.range_pending.clear();self.frame_lookup={};self.frames=[];self.index=0;self.playing=False
        self.active=True;self.total=len(selected);self.progress['maximum']=self.total;self.progress['value']=0
        self.startbtn['state']='disabled';self.uploadbtn['state']='disabled';self.stopbtn['state']='normal'
        self.datasetbtn['state']='disabled'
        self.source.set('显示来源：电脑图片组，板卡连续推理');self.begin_live_alarm(origin='LIVE_BOARD_ETHERNET_BATCH')
        self.worker.begin_batch(self.run_id,wire_mode,group,len(selected))
        self.status.set(f'正在建立图片组会话：{group} / {len(selected)}帧 / {wire_mode}')
    def _start_next_batch_frame(self):
        if self.stop_requested_run==self.run_id or not self.pc_batch or not self.upload_queue:return
        row=self.upload_queue.pop(0);frame_id=int(row['frame_id']);path=self.dataset_image_dir/row['source_image']
        try:
            prepared=prepare_image(path);source_name=f'PC_{self.run_id}_{frame_id:04d}.png';display_path=self.image_dir/source_name
            display_path.parent.mkdir(parents=True,exist_ok=True)
            with Image.open(path) as source:source.convert('RGB').save(display_path,format='PNG')
            self.upload_inputs[(self.run_id,frame_id)]=dict(path=path,source_image=source_name,width=prepared['width'],height=prepared['height'],row=row)
            self.worker.upload_frame(self.run_id,frame_id,prepared['payload'],prepared['width'],prepared['height'],prepared['crc32'])
            self.status.set(f"正在发送 {len(self.frames)+1}/{self.total}：{path.name}")
        except Exception as e:self._batch_failed(str(e))
    def _batch_failed(self,error):
        self.upload_batch=False;self.upload_queue=[];self.pc_batch=None;self.active=False;self.end_live_alarm('UPLOAD_ERROR')
        self.datasetbtn['state']='normal'
        self.startbtn['state']='normal' if self.board_state=='READY' else 'disabled';self.uploadbtn['state']=self.startbtn['state']
        messagebox.showerror('图片组运行失败',error)
    def open_camera(self):
        if self.camera and self.camera.is_alive():return
        try:index=int(self.camera_index.get())
        except ValueError:messagebox.showerror('摄像头','请选择有效的摄像头设备编号。');return
        self.camera_result=None;self.camera=CameraWorker(index,self.events);self.camera.start()
        self.camera_openbtn['state']='disabled';self.status.set(f'正在打开摄像头 {index}…')
    def close_camera(self):
        if self.camera_session:self._stop_camera_session(restart=False)
        self.camera_detecting=False;self.camera_paused=False
        self.camera_detectbtn.configure(text='开始摄像头运行',state='disabled');self.camera_pausebtn['state']='disabled';self.camera_resetbtn['state']='disabled'
        if self.camera:self.camera.close()
        self.end_live_alarm('CAMERA_CLOSED');self.camera_closebtn['state']='disabled';self.camera_openbtn['state']='normal'
        self.status.set('摄像头已关闭。')
    def toggle_camera_detection(self):
        if self.camera_session:self._stop_camera_session(restart=False);return
        if not self.camera or not self.camera.is_alive():messagebox.showwarning('摄像头','请先打开摄像头。');return
        if self.board_state!='READY' or not isinstance(self.worker,TcpWorker):messagebox.showwarning('板卡未就绪',f'当前板卡状态：{self.board_state or "未连接"}。请等待状态变为READY。');return
        if self.active:messagebox.showwarning('正在运行','请先停止当前场景或图片任务。');return
        wire_mode='DET' if self.mode.get()=='仅检测' else 'TRACK'
        self.run_id='C'+f'{int(time.time()):08X}'+secrets.token_hex(1).upper()
        self.camera_session=dict(run_id=self.run_id,mode=wire_mode,frame_id=0,inflight=False,stopping=False)
        self.camera_detecting=True;self.camera_paused=False;self.camera_restart_pending=False
        self.camera_detectbtn.configure(text='停止摄像头运行');self.camera_pausebtn.configure(text='暂停',state='normal');self.camera_resetbtn['state']='normal'
        self.frames=[];self.index=0;self.range_generation+=1;self.range_pending.clear();self.frame_lookup={};self.camera_result=None
        self.active=True;self.total=10000;self.progress['maximum']=self.total;self.progress['value']=0
        self.startbtn['state']='disabled';self.uploadbtn['state']='disabled';self.datasetbtn['state']='disabled';self.stopbtn['state']='normal'
        self.source.set('显示来源：摄像头实时预览＋PYNQ-Z2连续'+('检测' if wire_mode=='DET' else '追踪')+'结果')
        self.begin_live_alarm(origin='LIVE_CAMERA_ETHERNET_'+wire_mode)
        self.worker.begin_batch(self.run_id,wire_mode,'CAMERA_LIVE',self.total)
        self.status.set('正在建立摄像头连续会话；追踪模式将在同一会话内保持目标ID…')
    def toggle_camera_pause(self):
        if not self.camera_session:return
        self.camera_paused=not self.camera_paused
        self.camera_pausebtn.configure(text='继续' if self.camera_paused else '暂停')
        if self.camera_paused:self.status.set('摄像头追踪已暂停；当前目标ID和追踪状态保留。')
        else:
            self.status.set('摄像头追踪继续，正在采集最新画面…');self.w.after(50,self._send_camera_frame)
    def reset_camera_tracking(self):
        if not self.camera_session:return
        self.camera_restart_pending=True;self._stop_camera_session(restart=True)
        self.status.set('正在结束当前会话并重置追踪ID…')
    def _stop_camera_session(self,restart=False):
        session=self.camera_session
        if not session:return
        self.camera_restart_pending=bool(restart);self.camera_detecting=False;self.camera_paused=False;session['stopping']=True
        self.camera_detectbtn['state']='disabled';self.camera_pausebtn['state']='disabled';self.camera_resetbtn['state']='disabled';self.stopbtn['state']='disabled'
        if self.worker:
            self.stop_requested_run=session['run_id'];self.worker.request_stop(session['run_id'])
            self.w.after(8000,lambda rid=session['run_id']:self._stop_timeout(rid))
        self.status.set('已请求停止摄像头连续会话，等待当前帧完成…')
    def _send_camera_frame(self):
        session=self.camera_session
        if not self.camera_detecting or self.camera_paused or not session or session['stopping'] or session['inflight'] or self.board_state!='BATCH':return
        rgb=self.camera.get_latest() if self.camera else None
        if rgb is None:self.w.after(100,self._send_camera_frame);return
        if not rgb.size or int(rgb.max()) <= 3:
            self.status.set('摄像头正在返回黑帧，等待有效画面；尚未发送到板卡…')
            self.w.after(150,self._send_camera_frame);return
        try:
            image=Image.fromarray(rgb,'RGB');prepared=prepare_pil_image(image);frame_id=int(session['frame_id'])
            source_name=f"PC_{session['run_id']}_{frame_id:04d}.png";display_path=self.image_dir/source_name;display_path.parent.mkdir(parents=True,exist_ok=True);image.save(display_path,format='PNG')
            self.upload_inputs[(session['run_id'],frame_id)]=dict(path=display_path,source_image=source_name,width=prepared['width'],height=prepared['height'],camera=True)
            session['inflight']=True
            self.worker.upload_frame(session['run_id'],frame_id,prepared['payload'],prepared['width'],prepared['height'],prepared['crc32'])
            self.status.set(f"摄像头第 {frame_id+1} 帧已采集，正在通过以太网发送到板卡…")
        except Exception as e:
            self.camera_detecting=False;self.active=False;self.camera_session=None;self.camera_detectbtn.configure(text='开始摄像头运行');messagebox.showerror('摄像头运行失败',str(e))
    def camera_tick(self):
        try:
            if self.camera and self.camera.is_alive():
                rgb=self.camera.get_latest()
                if rgb is not None:self.show_camera_view(Image.fromarray(rgb,'RGB'))
        finally:self.w.after(60,self.camera_tick)
    def show_camera_view(self,live):
        cw,ch=max(640,self.canvas.winfo_width()),max(240,self.canvas.winfo_height());half=max(300,cw//2-8)
        live.thumbnail((half,ch));canvas=Image.new('RGB',(cw,ch),'#101d2b');canvas.paste(live,((half-live.width)//2,(ch-live.height)//2))
        if self.camera_result:
            try:
                result=render(self.camera_result,self.image_dir,histories(self.frames))
                result.thumbnail((half,ch));canvas.paste(result,(cw//2+(half-result.width)//2,(ch-result.height)//2))
            except Exception as e:self.addlog('摄像头结果显示失败：'+str(e))
        self.camera_photo=ImageTk.PhotoImage(canvas);self.canvas.delete('all');self.canvas.create_image(cw//2,ch//2,image=self.camera_photo)
        self.canvas.create_text(12,12,anchor='nw',text='摄像头实时预览',fill='white',font=('Microsoft YaHei UI',12,'bold'))
        self.canvas.create_text(cw//2+12,12,anchor='nw',text='PYNQ-Z2最近检测结果',fill='white',font=('Microsoft YaHei UI',12,'bold'))
    def choose_upload_image(self):
        if self.active:return
        if not isinstance(self.worker,TcpWorker):messagebox.showinfo('图片推理','请先连接板卡以太网。');return
        if self.board_state!='READY':messagebox.showwarning('板卡未就绪','请等待板卡进入 READY 状态。');return
        paths=filedialog.askopenfilenames(title='选择一张或多张照片发送到板卡推理（Ctrl/Shift多选）',filetypes=[('图片','*.jpg *.jpeg *.png *.bmp'),('所有文件','*.*')])
        if not paths:return
        self.upload_queue=list(paths);self.upload_batch=True;self.range_generation+=1;self.range_pending.clear();self.frame_lookup={};self.frames=[];self.index=0;self.playing=False
        self.active=True;self.total=len(paths);self.progress['maximum']=self.total;self.progress['value']=0;self.startbtn['state']='disabled';self.uploadbtn['state']='disabled';self.stopbtn['state']='disabled';self.datasetbtn['state']='disabled'
        self.source.set('显示来源：电脑选择图片，板卡推理');self.begin_live_alarm(origin='LIVE_BOARD_ETHERNET_UPLOAD')
        self._start_next_upload()
    def _start_next_upload(self):
        if not self.upload_queue:return
        path=self.upload_queue.pop(0)
        try:
            prepared=prepare_image(path);self.run_id='U'+f'{int(time.time()):08X}'+secrets.token_hex(1).upper()
            source_name=f'PC_{self.run_id}.png';display_path=self.image_dir/source_name;display_path.parent.mkdir(parents=True,exist_ok=True)
            with Image.open(path) as source:source.convert('RGB').save(display_path,format='PNG')
            self.upload_inputs[self.run_id]=dict(path=Path(path),source_image=source_name,width=prepared['width'],height=prepared['height'])
            self.worker.upload(self.run_id,prepared['payload'],prepared['width'],prepared['height'],prepared['crc32'])
            number=self.total-len(self.upload_queue);self.status.set(f"正在发送 {number}/{self.total}：{Path(path).name}（{len(prepared['payload'])/1048576:.2f} MB）")
            self.addlog(f"图片 {number}/{self.total} 预处理完成：{prepared['width']}×{prepared['height']} / CRC {prepared['crc32']}")
        except Exception as e:
            self.upload_batch=False;self.upload_queue=[];self.active=False;self.end_live_alarm('UPLOAD_ERROR');self.datasetbtn['state']='normal';self.startbtn['state']='normal' if self.board_state=='READY' else 'disabled';self.uploadbtn['state']=self.startbtn['state'];messagebox.showerror('图片推理失败',str(e))
    def stop(self):
        if self.cancel_collection():return
        if self.camera_session:self._stop_camera_session(restart=False);return
        self.playing=False
        if self.active and self.worker:
            if self.stop_requested_run==self.run_id:return
            self.stop_requested_run=self.run_id;self.upload_queue=[];self.upload_batch=False
            self.worker.request_stop(self.run_id);self.stopbtn['state']='disabled'
            self.status.set('已取消后续图片，等待当前帧结束并停止…')
            self.w.after(8000,lambda rid=self.run_id:self._stop_timeout(rid))
    def _stop_timeout(self,run_id):
        if self.stop_requested_run!=run_id or not self.active:return
        self.stop_requested_run=None
        if self.worker:self.worker.close()
        self.board_state='';self.finish_collection('STOP_TIMEOUT');self.end_live_alarm('STOP_TIMEOUT')
        self.active=False;self.playing=False;self.pc_batch=None;self.upload_batch=False;self.upload_queue=[]
        self.camera_detecting=False;self.camera_session=None;self.camera_restart_pending=False
        self.startbtn['state']='disabled';self.uploadbtn['state']='disabled';self.tracking_demo_btn['state']='disabled'
        self.stopbtn['state']='disabled';self.datasetbtn['state']='normal'
        self.status.set('停止确认超时，已断开连接。可编辑警戒区；重新连接并等待板卡就绪后再运行。')
    def pump(self):
        try:
            while True:
                kind,value=self.events.get_nowait()
                if kind=='connected':self.conn['text']='断开';self.status.set('板卡已连接，等待就绪…');self.addlog('连接 '+value)
                elif kind=='disconnected':
                    self.stop_requested_run=None;self.upload_queue=[];self.upload_batch=False
                    self.board_state='';self.finish_collection('DISCONNECTED')
                    self.end_live_alarm('DISCONNECTED')
                    self.camera_detecting=False;self.camera_paused=False;self.camera_session=None;self.camera_restart_pending=False
                    self.camera_detectbtn.configure(text='开始摄像头运行',state='normal' if self.camera and self.camera.is_alive() else 'disabled');self.camera_pausebtn['state']='disabled';self.camera_resetbtn['state']='disabled'
                    self.conn['text']='连接';self.startbtn['state']='disabled';self.tracking_demo_btn['state']='disabled';self.uploadbtn['state']='disabled';self.stopbtn['state']='disabled';self.datasetbtn['state']='normal';self.active=False;self.pc_batch=None;self.board_state='';self.status.set('连接已断开；板卡若在等待确认，将在超时后停止。');self.addlog('连接已断开')
                elif kind in ('error','warning'):
                    self.addlog(value)
                    if kind=='error':self.finish_collection('TRANSPORT_ERROR');self.status.set('异常：'+value)
                elif kind=='message':self.message(value)
                elif kind=='upload_sending':self.status.set(f'板卡已准备，正在通过以太网发送 {value/1048576:.2f} MB 输入…')
                elif kind=='upload_received':self.status.set(f'板卡已接收图片（{value/1000:.1f} ms），正在执行FPGA推理…')
                elif kind=='frame':
                    if value['run_id']!=self.run_id:continue
                    batch_uploaded=self.upload_inputs.get((value['run_id'],value['frame_id']))
                    if value['sequence_id']=='PCUPLOAD' or batch_uploaded is not None:
                        uploaded=batch_uploaded or self.upload_inputs.get(value['run_id'])
                        if uploaded is None or uploaded['source_image']!=value['source_image'] or uploaded['width']!=value['width'] or uploaded['height']!=value['height']:
                            self.addlog('上传图片身份不匹配，拒绝显示');continue
                        value['capture_time']=uploaded.get('row',{}).get('timestamp',time.strftime('%Y-%m-%d %H:%M:%S'));value['execution_origin']='BOARD_ETHERNET_UPLOAD'
                        if uploaded.get('camera'):self.camera_result=value
                    else:
                        row=self.data_index.get((value['sequence_id'],value['frame_id']))
                        if row is None or row['source_image']!=value['source_image']:
                            self.addlog('帧身份不匹配，停止显示');self.stop();continue
                        value['capture_time']=row['timestamp']
                    if not self.record_collection_frame(value):continue
                    self.frames.append(value);self.progress['value']=len(self.frames)
                    if self.range_enabled():self.queue_range(value,len(self.frames)-1,save=True)
                    self.queue_alarm(value)
                    self.index=len(self.frames)-1;self.show(self.index);self.last_frame_time=time.monotonic()
                    self.status.set(f"板卡运行：收到 {len(self.frames)}/{self.total} 帧；ID {self.run_id}；接收后立即显示")
                elif kind=='range_frame':
                    generation,key,enriched=value
                    if generation!=self.range_generation:continue
                    self.range_pending.discard(key);position=self.frame_lookup.get(key)
                    if position is not None:
                        self.frames[position].update({k:v for k,v in enriched.items() if k.startswith("range_")})
                        if position==self.index:self.show(position)
                elif kind=='range_failed':
                    generation,key,error=value
                    if generation==self.range_generation:self.range_pending.discard(key);self.addlog('测距异常：'+error)
                elif kind.startswith('alarm_'):self.alarm_event(kind,value)
                elif kind=='exported':messagebox.showinfo('导出完成','已生成并核验：\n'+'\n'.join(value));self.addlog('MP4 导出完成')
                elif kind=='export_error':messagebox.showerror('导出失败',value)
                elif kind=='camera_opened':
                    self.camera_closebtn['state']='normal';self.camera_detectbtn['state']='normal' if self.board_state=='READY' else 'disabled';self.status.set(f'摄像头已打开：设备{value[0]}，{value[1]}×{value[2]}；板卡状态：{self.board_state or "未连接"}。')
                elif kind=='camera_error':
                    if self.camera_session:self._stop_camera_session(restart=False)
                    self.camera_detecting=False;self.camera_paused=False;self.camera_detectbtn.configure(text='开始摄像头运行',state='disabled');self.camera_pausebtn['state']='disabled';self.camera_resetbtn['state']='disabled';self.camera_openbtn['state']='normal';messagebox.showerror('摄像头错误',value)
                elif kind=='camera_closed':
                    self.camera=None;self.camera_detecting=False;self.camera_paused=False;self.camera_openbtn['state']='normal';self.camera_closebtn['state']='disabled';self.camera_detectbtn.configure(text='开始摄像头运行',state='disabled');self.camera_pausebtn['state']='disabled';self.camera_resetbtn['state']='disabled'
                    if self.frames:self.show(self.index)
        except queue.Empty:pass
        except Exception as error:
            self.addlog('界面事件处理异常：'+str(error))
            self.status.set('界面事件处理异常：'+str(error))
        finally:self.w.after(50,self.pump)
    def message(self,m):
        k=m[0]
        if k=='HELLO':
            if len(m)!=6:self.addlog('HELLO 格式不兼容');return
            self.board_state=m[3];self.board_crc=m[4]
            self.addlog(f'板卡 {m[1]} / {self.board_state} / SD {m[5]} 帧 / CRC {self.board_crc}')
            if self.board_state=='BATCH' and not self.active:
                self.recovering_stale_run=True;self.worker.command('STATUS');self.status.set('检测到板卡遗留的连续会话，正在自动恢复到READY…')
            else:self.status.set(f'板卡已就绪 · {m[5]} 帧' if self.board_state=='READY' else f'板卡状态：{self.board_state}')
            self.startbtn['state']='normal' if self.board_state=='READY' and not self.active else 'disabled';self.uploadbtn['state']=self.startbtn['state'];self.tracking_demo_btn['state']=self.startbtn['state']
            if self.camera and self.camera.is_alive():self.camera_detectbtn['state']=self.startbtn['state']
        elif k=='STATUS':
            if len(m)>=5:
                self.board_state=m[1];active_run=m[2]
                if self.recovering_stale_run and self.board_state=='BATCH' and active_run:
                    self.status.set(f'正在停止遗留会话 {active_run}…');self.worker.command('STOP,'+active_run)
                else:self.status.set('板卡状态：'+' / '.join(m[1:]))
            else:self.addlog('STATUS 格式不兼容')
        elif k=='STATE':self.status.set('板卡状态：'+' '.join(m[1:]))
        elif k=='STARTED':self.status.set('板卡开始：'+' / '.join(m[1:]));self.addlog('开始 '+self.run_id)
        elif k=='BATCH_READY':
            if self.camera_session and len(m)==4 and m[1]==self.run_id:
                self.board_state='BATCH';self.addlog(f'摄像头连续会话已建立：{m[2]} / {self.camera_session["mode"]}')
                self.w.after(50,self._send_camera_frame)
            elif self.pc_batch and len(m)==4 and m[1]==self.run_id:
                self.board_state='BATCH';self.addlog(f'图片组已建立：{m[2]} / {m[3]}帧');self._start_next_batch_frame()
        elif k=='UPFRAME_DONE':
            if self.camera_session and len(m)==3 and m[1]==self.run_id:
                self.camera_session['inflight']=False;self.camera_session['frame_id']=int(m[2])+1
                if self.camera_detecting and not self.camera_paused and not self.camera_session['stopping']:self.w.after(80,self._send_camera_frame)
            elif self.pc_batch and len(m)==3 and m[1]==self.run_id:
                if self.stop_requested_run==self.run_id:return
                if self.upload_queue:self._start_next_batch_frame()
                elif not self.pc_batch['ended']:
                    self.pc_batch['ended']=True;self.worker.end_batch(self.run_id);self.status.set('全部图片已处理，正在结束图片组会话…')
        elif k=='DONE':
            if len(m)<4:return
            if m[1]!=self.run_id and not self.recovering_stale_run:return
            self.stop_requested_run=None
            if self.collection_done(m):return
            if self.upload_batch and m[2]=='SUCCESS' and self.upload_queue:
                self.board_state='READY';self._start_next_upload();return
            if self.camera_session and m[1]==self.camera_session['run_id']:
                restart=self.camera_restart_pending;processed=m[3];self.camera_session=None;self.camera_detecting=False;self.camera_paused=False;self.camera_restart_pending=False
                self.active=False;self.board_state='READY';self.end_live_alarm(m[2]);self.datasetbtn['state']='normal';self.startbtn['state']='normal';self.uploadbtn['state']='normal';self.stopbtn['state']='disabled'
                self.camera_detectbtn.configure(text='开始摄像头运行',state='normal' if self.camera and self.camera.is_alive() else 'disabled');self.camera_pausebtn.configure(text='暂停',state='disabled');self.camera_resetbtn['state']='disabled'
                self.status.set(f'摄像头连续会话已结束：板端处理 {processed} 帧。')
                if restart and self.camera and self.camera.is_alive():self.w.after(150,self.toggle_camera_detection)
                return
            self.upload_batch=False;self.upload_queue=[]
            self.pc_batch=None
            self.recovering_stale_run=False
            self.end_live_alarm(m[2])
            self.active=False;self.playing=False;self.board_state='READY';self.datasetbtn['state']='normal';self.startbtn['state']='normal';self.uploadbtn['state']='normal';self.stopbtn['state']='disabled'
            self.tracking_demo_btn['state']='normal'
            if self.camera and self.camera.is_alive():self.camera_detectbtn['state']='normal'
            self.status.set(f'本次运行结束：{m[2]}，板端处理 {m[3]} 帧，电脑保存 {len(self.frames)} 帧。可回放或导出。');self.addlog('结束 '+m[2])
        elif k=='FAULT_DETAIL':
            detail=' '.join(m[1:]);self.status.set('板卡故障：'+detail);self.addlog('板卡启动故障：'+detail)
        elif k in ('NACK','FAULT','ERROR'):
            self.upload_batch=False;self.upload_queue=[]
            self.pc_batch=None;self.camera_session=None;self.camera_detecting=False;self.camera_paused=False;self.datasetbtn['state']='normal';self.camera_pausebtn['state']='disabled';self.camera_resetbtn['state']='disabled';self.camera_detectbtn.configure(text='开始摄像头运行',state='normal' if self.camera and self.camera.is_alive() else 'disabled')
            self.finish_collection(k)
            self.addlog(' / '.join(m));self.status.set('板卡反馈：'+' / '.join(m))
            if k in ('FAULT','ERROR'):self.end_live_alarm(k);self.board_state='FAULT';self.active=False;self.stopbtn['state']='disabled';self.startbtn['state']='disabled';self.uploadbtn['state']='disabled'
            elif self.active:self.active=False;self.stopbtn['state']='disabled';self.startbtn['state']='normal' if self.board_state=='READY' else 'disabled';self.uploadbtn['state']=self.startbtn['state']
    def show(self,index):
        if not self.frames:return
        index=max(0,min(int(index),len(self.frames)-1));self.index=index;f=self.frames[index]
        f['scene_title']=getattr(self,'scene_meta',{}).get(f['sequence_id'],{}).get('title',f['sequence_id'])
        if str(f.get('execution_origin','')).startswith('PC'):self.source.set('显示来源：电脑预演（非板卡结果）')
        try:
            rgb=render(f,self.image_dir,histories(self.frames[:index+1]));rgb_width=rgb.width;combined=False
            depth_path=f.get('range_depth_preview_path')
            if self.show_depth.get() and depth_path and Path(depth_path).is_file():
                depth=Image.open(depth_path).convert('RGB').resize(rgb.size)
                im=Image.new('RGB',(rgb.width*2,rgb.height),'#101d2b');im.paste(rgb,(0,0));im.paste(depth,(rgb.width,0));combined=True
            else:im=rgb
            cw,ch=max(320,self.canvas.winfo_width()),max(180,self.canvas.winfo_height());original_width=im.width;im.thumbnail((cw,ch))
            left=cw/2-im.width/2;top=ch/2-im.height/2
            self.alarm_view=(left,top,im.width*(rgb_width/original_width) if combined else im.width,im.height)
            self.photo=ImageTk.PhotoImage(im);self.canvas.delete('all');self.canvas.create_image(cw//2,ch//2,image=self.photo)
        except Exception as e:self.canvas.delete('all');self.canvas.create_text(20,30,anchor='nw',text='图片无法显示：'+str(e),fill='white',width=650)
        self.info.set(f"{f['sequence_id']} · 第 {f['frame_id']+1} 帧\n采集：{f.get('capture_time',self.data_index.get((f['sequence_id'],f['frame_id']),{}).get('timestamp','未知'))}\n检测 {len(f['detections'])} 艘 · 已确认轨迹 {len(f['tracks'])}\n{f['source_image']}")
        for item in self.table.get_children():self.table.delete(item)
        objects=f['tracks'] if f['mode']=='TRACK' else f['detections']
        for o in objects:
            r=range_for(f,o);distance=f"{r['distance_m']:.1f}" if r and r['valid'] else '—'
            self.table.insert('', 'end',values=(o.get('track_id','—'),NAMES[o['class_id']],f"{o['score']:.3f}",distance,r['valid_points'] if r else '—'))
        ranged=sum(bool(r['valid']) for r in f.get('range_results',[]))
        reasons=list(dict.fromkeys(range_text(r) for r in f.get('range_results',[]) if not r['valid']))
        self.info.set(self.info.get()+f"\n测距有效 {ranged}/{len(objects)}"+(' · '+'；'.join(reasons) if reasons else ''))
        t=f['timing_us'];self.timing.set(f"读取 {t['read']/1000:.1f} ms    FPGA推理 {t['inference']/1000:.1f} ms    解码/NMS {t['decode_nms']/1000:.1f} ms    跟踪 {t['tracker']/1000:.2f} ms    计算合计 {t['compute']/1000:.1f} ms（不含串口及电脑绘图）")
        self.timing.set(self.timing.get()+f"    PC测距 {f.get('range_timing_ms',0):.2f} ms")
        if str(f.get('execution_origin','')).startswith('PC'):
            self.timing.set(f"电脑预演：非板卡结果 · PC测距 {f.get('range_timing_ms',0):.2f} ms")
        self.slider_lock=True;self.slider.configure(to=max(1,len(self.frames)-1));self.slider.set(index);self.slider_lock=False
        self.after_alarm_show()
    def slide(self,value):
        if not self.slider_lock and not self.active:self.show(round(float(value)))
    def seek(self,step):
        if self.active:return
        self.playing=False;self.show(self.index+step)
    def play(self):
        if self.active or not self.frames:return
        self.playing=not self.playing
        if self.playing:
            self.source.set('显示来源：已保存板卡结果回放')
            if self.index>=len(self.frames)-1:self.index=0
            self.tick()
    def tick(self):
        if not self.playing:return
        self.show(self.index)
        if self.index>=len(self.frames)-1:self.playing=False;return
        self.index+=1;self.w.after(max(1,int(1000/float(self.fps.get()))),self.tick)
    def choose_images(self):
        if self.active:return
        path=filedialog.askdirectory(title='选择与SD清单对应的原图目录')
        if path:self.image_dir=Path(path);self.refresh_ranges();self.analyze_alarms();self.show(self.index)
    def choose_manifest(self):
        if self.active:return
        path=filedialog.askopenfilename(title='选择 SD manifest.csv',filetypes=[('CSV','*.csv')])
        if path:self.manifest=Path(path);self.load_manifest()
    def open_results(self):
        if self.active:return
        path=filedialog.askopenfilename(initialdir=self.runs,title='打开 frames.jsonl',filetypes=[('逐帧结果','*.jsonl')])
        if not path:return
        try:
            self.frames=[json.loads(line) for line in Path(path).read_text(encoding='utf-8-sig').splitlines() if line.strip()]
            self.refresh_ranges();self.analyze_alarms();self.index=0;self.playing=False;self.source.set('显示来源：历史结果回放');self.status.set(f'已打开 {len(self.frames)} 帧；播放速度不是板卡计算速度。');self.show(0)
        except Exception as e:messagebox.showerror('打开失败',str(e))
    def export(self):
        if self.active or not self.frames:return
        if self.range_pending or self.alarm_busy:messagebox.showinfo('后台分析中','等待测距/预警分析完成后再导出。');return
        out=filedialog.askdirectory(title='选择视频输出目录')
        if not out:return
        frames=list(self.frames);images=self.image_dir;fps=float(self.fps.get());self.addlog(f'后台导出 {fps:g} FPS 视频…')
        def work():
            try:self.events.put(('exported',export_videos(frames,images,out,fps,combine=len({f['sequence_id'] for f in frames})>1)))
            except Exception as e:self.events.put(('export_error',str(e)))
        threading.Thread(target=work,daemon=True).start()
    def queue_range(self,frame,position,save=False):
        for field in ['range_results','range_status','range_error','range_timing_ms','range_mode','range_mode_label','range_definition','range_processing_origin','range_input_origin','range_depth_preview_path','range_depth_error']:frame.pop(field,None)
        key=(frame.get('run_id','REPLAY'),frame['sequence_id'],frame['frame_id'])
        self.frame_lookup[key]=position;self.range_pending.add(key)
        path=self.runs/frame['run_id']/'enriched_frames.jsonl' if save else None
        self.range_worker.submit(self.range_generation,key,frame,self.image_dir,path)
    def refresh_ranges(self):
        self.range_generation+=1;self.range_pending.clear();self.frame_lookup={}
        if not self.range_enabled():
            for frame in self.frames:
                for field in ['range_results','range_status','range_error','range_timing_ms','range_mode','range_mode_label','range_definition','range_processing_origin','range_input_origin','range_depth_preview_path','range_depth_error']:frame.pop(field,None)
            return
        for i,f in enumerate(self.frames):self.queue_range(f,i)
    def close(self):
        if self.active and not messagebox.askyesno('正在运行','关闭会断开以太网，板卡等待确认超时后停止。确定关闭？'):return
        self.finish_collection('CLOSED')
        if self.camera:self.camera.close()
        if self.worker:self.worker.close()
        self.end_live_alarm('CLOSED')
        self.range_worker.close();self.alarm_worker.close()
        self.w.destroy()
if __name__=='__main__':App(tk.Tk());tk.mainloop()
