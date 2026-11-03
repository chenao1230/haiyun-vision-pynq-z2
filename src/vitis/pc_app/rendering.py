from pathlib import Path
from collections import defaultdict
from PIL import Image,ImageDraw,ImageFont
from protocol import NAMES
from alarm_overlay import draw_alarm_overlay
from range_pipeline import range_for,range_text
COLORS=['#40e69a','#ffcf58','#7bbcff','#ff8eae','#cb9bff','#50d8e8']
def font(size):
    for name in ['C:/Windows/Fonts/msyh.ttc','C:/Windows/Fonts/simhei.ttf']:
        if Path(name).exists():return ImageFont.truetype(name,size)
    return ImageFont.load_default()
def render(frame,images,history=None):
    im=Image.open(Path(images)/Path(frame['source_image']).name).convert('RGB')
    if im.size!=(frame['width'],frame['height']):raise ValueError('电脑原图尺寸与板卡帧不匹配')
    im=draw_alarm_overlay(im,frame)
    draw=ImageDraw.Draw(im);width=max(2,im.width//600);ft=font(max(16,im.width//90))
    if history:
        for (seq,tid),pts in history.items():
            if seq==frame['sequence_id'] and len(pts)>1:draw.line(pts,fill=COLORS[tid%6],width=width)
    objects=frame['tracks'] if frame['mode']=='TRACK' else frame['detections']
    for obj in objects:
        tid=obj.get('track_id',obj['class_id']);color=COLORS[tid%6];b=obj.get('display_box',obj['box'])
        if any(a['state']=='active' and a['track_id']==obj.get('track_id') and a['detection_index']==obj['detection_index'] for a in frame.get('alarm',{}).get('targets',[])):color='#ff6050'
        draw.rectangle(b,outline=color,width=width)
        label=(f"ID {obj['track_id']} | " if 'track_id' in obj else '')+NAMES[obj['class_id']]+f" {obj['score']:.2f}"
        r=range_for(frame,obj)
        if r is not None:label+='\n'+range_text(r)
        bounds=draw.multiline_textbbox((0,0),label,font=ft,spacing=3);tw=bounds[2]-bounds[0];th=bounds[3]-bounds[1]+8
        x=max(0,min(b[0],im.width-tw-8));y=max(76 if frame.get("alarm") else 38,b[1]-th-5)
        draw.rectangle((x,y,x+tw+8,y+th),fill='#142130');draw.multiline_text((x+4,y),label,font=ft,fill=color,spacing=3)
    label=f"{frame.get('scene_title',frame['sequence_id'])}  第 {frame['frame_id']+1} 帧  {'检测+跟踪' if frame['mode']=='TRACK' else '仅检测'}  板端计算 {frame['timing_us']['compute']/1000:.1f} ms"
    if frame.get('hide_timing'):label=f"{frame.get('scene_title',frame['sequence_id'])}  第 {frame['frame_id']+1} 帧  {'检测+跟踪' if frame['mode']=='TRACK' else '仅检测'}"
    if str(frame.get('execution_origin','')).startswith('PC'):label=f"{frame['sequence_id']} 第 {frame['frame_id']+1} 帧 · 电脑预演，非板卡结果"
    draw.rectangle((0,0,im.width,36),fill='#142130');draw.text((8,3),label,font=font(22),fill='white')
    return im

def histories(frames):
    history=defaultdict(list)
    for f in frames:
        for t in f['tracks']:
            b=t['display_box'];history[(f['sequence_id'],t['track_id'])].append(((b[0]+b[2])/2,b[3]))
    return history

def export_videos(frames,images,output,fps,progress=None,combine=False):
    import cv2,numpy as np
    output=Path(output);output.mkdir(parents=True,exist_ok=True);groups={}
    for f in frames:groups.setdefault(f['sequence_id'],[]).append(f)
    if combine:groups={'TRACK_ALL' if all(f['mode']=='TRACK' for f in frames) else 'DETECT_ALL':frames}
    paths=[]
    for group,fs in groups.items():
        history=defaultdict(list);writer=None;path=output/(group+'.mp4');previous=None
        try:
            for f in fs:
                if previous!=f['sequence_id']:history.clear();previous=f['sequence_id']
                for t in f['tracks']:
                    b=t['display_box'];history[(f['sequence_id'],t['track_id'])].append(((b[0]+b[2])/2,b[3]))
                display=dict(f);display['hide_timing']=combine
                im=render(display,images,history);draw=ImageDraw.Draw(im);note=f'结果回放 {fps:g} FPS（非板卡实时速度）';draw.rectangle((0,im.height-34,im.width,im.height),fill='#142130');draw.text((8,im.height-32),note,font=font(22),fill='white');im.thumbnail((1280,720));w,h=im.size;w-=w%2;h-=h%2;im=im.resize((w,h))
                if combine:
                    canvas=Image.new('RGB',(1280,720),'#142130');canvas.paste(im,((1280-w)//2,(720-h)//2));im=canvas;w,h=1280,720
                if writer is None:
                    writer=cv2.VideoWriter(str(path),cv2.VideoWriter_fourcc(*'mp4v'),fps,(w,h))
                    if not writer.isOpened():raise RuntimeError('视频文件无法创建')
                writer.write(cv2.cvtColor(np.asarray(im),cv2.COLOR_RGB2BGR))
        finally:
            if writer:writer.release()
        cap=cv2.VideoCapture(str(path));n=0
        while cap.read()[0]:n+=1
        cap.release()
        if n!=len(fs):raise RuntimeError(f'视频帧数核验失败 {group}: {n}/{len(fs)}')
        paths.append(str(path))
        if progress:progress(str(path))
    return paths
