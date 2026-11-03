# 把这部分接在队友已有的“完整收到一帧，准备画框”的位置。
# 这里不读取串口，也不修改队友的通信格式。
from pathlib import Path
from ship_range import ShipRange

range_worker=ShipRange()  # 程序启动时只创建一次


def add_distance_after_serial_frame(image_path,objects,sequence_id,frame_id):
    """objects 是队友已经解析好的结果，字段名按实际程序映射一次即可。

    每个目标示例：
      {"x1":1600,"y1":500,"x2":2030,"y2":730,"track_id":1}
    坐标应是本包原图上的位置，不是缩小预览窗口的位置。
    """
    boxes=[{'xyxy':[o['x1'],o['y1'],o['x2'],o['y2']],
            'track_id':o.get('track_id'),'object_id':o.get('object_id')} for o in objects]
    measured=range_worker.measure(image_path,boxes,box_source='board_serial',
                                 sequence_id=sequence_id,frame_id=frame_id)
    return [dict(obj,range_result=result) for obj,result in zip(objects,measured)]


# 队友的绘图处：
# for target in add_distance_after_serial_frame(...):
#     r=target['range_result']
#     text=f"距离 {r['distance_m']:.1f} 米" if r['valid'] else '距离不可用'
#     原有的画文字函数(船的框旁边, text)
#
# 说明：若已有 tracks 的 display_x1...display_y2，请优先用这些显示框；
# 不要把内部预测框当作当前检测框。若串口不含序列编号，可自行建立可靠的
# “本次照片组＋图片编号”映射，之后传入本包约定的序列/帧号。
