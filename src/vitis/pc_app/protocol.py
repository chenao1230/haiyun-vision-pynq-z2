"""SHIP1 parser. Only complete, counted, CRC-verified frames are returned."""
import math,zlib
NAMES=['散货船','渔船','普通货船','矿砂船','客船','集装箱船']
PREFIX=b'@SHIP1,'
class ProtocolError(ValueError):pass
class Parser:
    def __init__(self):self.pending=None;self.raw=bytearray()
    def reset(self):self.pending=None;self.raw.clear()
    def feed(self,line):
        if not line.startswith(PREFIX):return None
        if len(line)>2048 or not line.endswith(b'\n'):raise ProtocolError('协议行过长或不完整')
        try:
            s=line.decode('ascii').rstrip('\r\n').split(',');kind=s[1]
            if kind=='BEGIN':
                if len(s)!=9:raise ProtocolError('BEGIN 字段错误')
                self.pending=dict(run_id=s[2],sequence_id=s[3],frame_id=int(s[4]),source_image=s[5],width=int(s[6]),height=int(s[7]),mode=s[8],detections=[],tracks=[])
            return self._feed(s,line)
        except ProtocolError:
            self.reset();raise
        except (ValueError,IndexError,UnicodeError) as e:
            self.reset();raise ProtocolError(str(e)) from e
    def _feed(self,s,line):
        kind=s[1]
        if kind=='BEGIN':
            p=self.pending
            if p['mode'] not in ('DET','TRACK') or not 0<p['width']<=16384 or not 0<p['height']<=16384 or p['frame_id']<0:raise ProtocolError('无效的帧信息')
            self.raw=bytearray(line);return None
        if kind in ('D','T'):
            p=self.pending
            if p is None:raise ProtocolError('未收到帧头')
            if (s[2],s[3],int(s[4]))!=(p['run_id'],p['sequence_id'],p['frame_id']):raise ProtocolError('目标记录属于其他帧')
            if kind=='D':
                if len(s)!=12:raise ProtocolError('D 字段错误')
                d=dict(detection_index=int(s[5]),class_id=int(s[6]),score=float(s[7]),box=[float(v) for v in s[8:12]])
                self._box(d['box'],p);p['detections'].append(d)
            else:
                if len(s)!=17:raise ProtocolError('T 字段错误')
                d=dict(track_id=int(s[5]),class_id=int(s[6]),score=float(s[7]),box=[float(v) for v in s[8:12]],display_box=[float(v) for v in s[12:16]],detection_index=int(s[16]))
                self._box(d['box'],p,internal=True);self._box(d['display_box'],p)
                if d['track_id']<=0:raise ProtocolError('无效 ID')
                p['tracks'].append(d)
            if d['class_id'] not in range(6) or not math.isfinite(d['score']) or not 0<=d['score']<=1:raise ProtocolError('无效类别或分数')
            self.raw.extend(line)
            if len(self.raw)>262144 or len(p['detections'])>256 or len(p['tracks'])>256:raise ProtocolError('帧超过资源上限')
            return None
        if kind=='END':
            if len(s)!=14:raise ProtocolError('END 字段错误')
            p=self.pending
            if p is None or (s[2],s[3],int(s[4]))!=(p['run_id'],p['sequence_id'],p['frame_id']):raise ProtocolError('帧尾不匹配')
            if len(p['detections'])!=int(s[5]) or len(p['tracks'])!=int(s[6]):raise ProtocolError('记录数量不匹配，等待重传')
            if (zlib.crc32(self.raw)&0xffffffff)!=int(s[13],16):raise ProtocolError('CRC 不匹配，等待重传')
            ds={d['detection_index']:d for d in p['detections']}
            if len(ds)!=len(p['detections']) or sorted(ds)!=list(range(len(ds))):raise ProtocolError('检测索引不连续')
            if len({t['track_id'] for t in p['tracks']})!=len(p['tracks']):raise ProtocolError('重复轨迹 ID')
            for t in p['tracks']:
                d=ds.get(t['detection_index'])
                if d is None or max(abs(a-b) for a,b in zip(t['display_box'],d['box']))>.01:raise ProtocolError('显示框未对应检测框')
            if p['mode']=='DET' and p['tracks']:raise ProtocolError('DET 模式不应输出轨迹')
            p['timing_us']=dict(zip(['read','inference','decode_nms','tracker','sd_csv','compute'],map(int,s[7:13])))
            if any(v<0 for v in p['timing_us'].values()):raise ProtocolError('负耗时')
            result=p;self.reset();return dict(type='frame',frame=result)
        return dict(type='message',fields=s[1:])
    @staticmethod
    def _box(b,p,internal=False):
        if not all(math.isfinite(x) for x in b) or b[2]<=b[0] or b[3]<=b[1]:raise ProtocolError('无效坐标')
        if not internal and (b[0]<-.02 or b[1]<-.02 or b[2]>p['width']+.02 or b[3]>p['height']+.02):raise ProtocolError('显示框越界')
