"""Pure drawing; never advances event state."""
from PIL import Image,ImageDraw,ImageFont
def _font(n):
    return ImageFont.truetype('C:/Windows/Fonts/msyh.ttc',n)
def draw_alarm_overlay(image,frame):
    result=frame.get('alarm')
    if not result:return image
    cfg=result.get('config');w,h=image.size
    layer=Image.new('RGBA',image.size);d=ImageDraw.Draw(layer)
    if cfg and result['status']=='configured':
        for z in cfg['zones']:
            points=[(p[0]*w,p[1]*h) for p in z['vertices']]
            active=any(s['rule_id']==z['id'] and s['active'] for s in result['zone_states'])
            color=(255,90,70,255) if active else (255,190,50,255)
            d.polygon(points,fill=(*color[:3],35),outline=color,width=max(2,w//550))
            x,y=points[0];d.text((x+4,max(40,y-28)),z['name'],font=_font(22),fill=color)
        for line in cfg['lines']:
            a,b=[(p[0]*w,p[1]*h) for p in line['points']]
            d.line([a,b],fill=(70,220,245,255),width=max(3,w//450))
            for name,p in zip(['A','B'],[a,b]):d.ellipse((p[0]-5,p[1]-5,p[0]+5,p[1]+5),fill='cyan');d.text((p[0]+8,p[1]),name,font=_font(20),fill='cyan')
            d.text((a[0]+10,a[1]+25),line['name'],font=_font(20),fill='cyan')
        for target in result['targets']:
            p=target['point'];x,y=p[0]*w,p[1]*h
            color='red' if target['state']=='active' else 'orange' if target['state']=='pending' else 'lime'
            d.ellipse((x-5,y-5,x+5,y+5),fill=color)
        count=sum(s['active'] for s in result['zone_states'])
        text='图像规则预警：%d 个区内目标'%count
        if cfg.get('source')=='demo_virtual_rule':text+=' | 人工演示区'
        if result.get('events'):text+=' | '+'；'.join(dict.fromkeys(e['title'] for e in result['events']))
    else:text={'no_rules':'本组未设置预警规则','disabled':'本组预警已关闭','config_mismatch':'预警配置与原图尺寸不匹配'}.get(result['status'],result['status'])
    d.rectangle((0,38,min(w,22*len(text)+20),70),fill=(15,29,43,225));d.text((8,41),text,font=_font(21),fill='white')
    return Image.alpha_composite(image.convert('RGBA'),layer).convert('RGB')

