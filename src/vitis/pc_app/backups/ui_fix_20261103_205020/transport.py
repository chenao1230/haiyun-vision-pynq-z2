import json,queue,socket,threading,time,sys
from pathlib import Path
ROOT=Path(__file__).resolve().parent
sys.path.insert(0,str(ROOT/'vendor'))
from protocol import Parser,ProtocolError
class SerialWorker(threading.Thread):
    def __init__(self,port,events,runs_dir,serial_factory=None):
        super().__init__(daemon=True);self.port=port;self.events=events;self.runs_dir=Path(runs_dir);self.factory=serial_factory
        self.commands=queue.Queue();self.stopping=threading.Event();self.parser=Parser();self.seen={};self.accepted_runs=set();self.serial=None;self.upload_pending=None
    def command(self,s):
        if len(s)>126 or any(ord(c)<32 or ord(c)>126 for c in s):raise ValueError('命令不合法')
        if s.startswith('RUN,'):
            fields=s.split(',')
            def safe(value,limit):return bool(value) and len(value)<=limit and all(c.isascii() and (c.isalnum() or c in '_-') for c in value)
            if len(fields)!=4 or not safe(fields[1],12) or not safe(fields[3],16) or fields[2] not in {'DET','TRACK'}:
                raise ValueError('RUN命令不符合板端格式：运行编号最多12字符，场景编号最多16字符，模式为DET或TRACK。')
            self.accepted_runs.add(fields[1])
        self.commands.put((s+'\n').encode('ascii'))
    def close(self):self.stopping.set()
    def upload(self,run_id,payload,width,height,crc32):
        if self.factory is None:raise RuntimeError('图片上传仅支持以太网连接')
        if self.upload_pending is not None:raise RuntimeError('已有图片正在上传')
        if len(payload)!=3*416*416:raise ValueError('图片张量长度错误')
        self.accepted_runs.add(run_id)
        self.upload_pending=dict(run_id=run_id,payload=payload,size=len(payload),sent=False)
        self.command(f'UPLOAD,{run_id},DET,{int(width)},{int(height)},{len(payload)},{crc32}')
    def begin_batch(self,run_id,mode,sequence_id,count):
        if self.factory is None:raise RuntimeError('图片组上传仅支持以太网连接')
        self.accepted_runs.add(run_id)
        self.command(f'BATCH,{run_id},{mode},{sequence_id},{int(count)}')
    def upload_frame(self,run_id,frame_id,payload,width,height,crc32):
        if self.factory is None:raise RuntimeError('图片组上传仅支持以太网连接')
        if self.upload_pending is not None:raise RuntimeError('已有图片正在上传')
        if len(payload)!=3*416*416:raise ValueError('图片张量长度错误')
        self.accepted_runs.add(run_id)
        self.upload_pending=dict(run_id=run_id,frame_id=int(frame_id),payload=payload,size=len(payload),sent=False)
        self.command(f'UPFRAME,{run_id},{int(frame_id)},{int(width)},{int(height)},{len(payload)},{crc32}')
    def end_batch(self,run_id):self.command(f'BATCH_END,{run_id}')
    def run(self):
        raw=None
        try:
            if self.factory is None:
                import serial
                self.serial=serial.Serial(self.port,115200,timeout=.05,write_timeout=2)
            else:self.serial=self.factory()
            logs=self.runs_dir/'transport_logs';logs.mkdir(parents=True,exist_ok=True)
            raw=(logs/(time.strftime('%Y%m%d_%H%M%S')+'.log')).open('ab')
            self.events.put(('connected',self.port));self.command('HELLO');buffer=bytearray()
            while not self.stopping.is_set():
                try:
                    while True:self.serial.write(self.commands.get_nowait());self.serial.flush()
                except queue.Empty:pass
                chunk=self.serial.read(4096)
                if not chunk:continue
                raw.write(chunk);raw.flush();buffer.extend(chunk)
                if len(buffer)>65536:self.events.put(('error','接收行超长，丢弃并等待帧重传'));buffer.clear();self.parser.reset();continue
                while b'\n' in buffer:
                    line,_,rest=buffer.partition(b'\n');buffer=bytearray(rest);line=bytes(line)+b'\n'
                    try:item=self.parser.feed(line)
                    except ProtocolError as e:self.events.put(('warning',str(e)));continue
                    if item is None:continue
                    if item['type']=='message':
                        fields=item['fields']
                        if fields and fields[0] in {'UPLOAD_READY','UPFRAME_READY'}:
                            pending=self.upload_pending
                            if pending is None or len(fields)!=3 or fields[1]!=pending['run_id'] or int(fields[2])!=pending['size']:
                                raise RuntimeError('板卡图片上传握手不匹配')
                            self.events.put(('upload_sending',pending['size']))
                            self.serial.write(pending['payload']);self.serial.flush();pending['sent']=True
                        elif fields and fields[0]=='UPLOAD_RECEIVED':
                            pending=self.upload_pending
                            if pending is None or len(fields)!=3 or fields[1]!=pending['run_id'] or not pending['sent']:
                                raise RuntimeError('板卡图片接收确认不匹配')
                            self.events.put(('upload_received',int(fields[2])))
                            self.upload_pending=None
                        elif fields and fields[0] in {'NACK','ERROR','FAULT'}:
                            self.upload_pending=None
                        self.events.put(('message',fields));continue
                    f=item['frame'];rid=f['run_id'];key=(rid,f['sequence_id'],f['frame_id'])
                    if rid not in self.accepted_runs:self.events.put(('warning','拒绝非本次电脑启动的帧 '+rid));continue
                    frozen=json.dumps(f,ensure_ascii=False,sort_keys=True)
                    if key in self.seen:
                        if self.seen[key]!=frozen:self.events.put(('error','同一帧重传内容发生变化'));continue
                    else:
                        path=self.runs_dir/rid;path.mkdir(parents=True,exist_ok=True)
                        with (path/'frames.jsonl').open('a',encoding='utf8') as out:out.write(json.dumps(f,ensure_ascii=False)+'\n');out.flush()
                        self.seen[key]=frozen;self.events.put(('frame',f))
                    self.serial.write(f"ACK,{rid},{f['sequence_id']},{f['frame_id']}\n".encode('ascii'));self.serial.flush()
        except Exception as e:self.events.put(('error',str(e)))
        finally:
            if raw:raw.close()
            if self.serial:
                try:self.serial.close()
                except Exception:pass
            self.events.put(('disconnected',None))

class _SocketStream:
    def __init__(self,host,port,timeout=3):
        self.socket=socket.create_connection((host,port),timeout=timeout)
        self.socket.settimeout(.05)
    def write(self,data):
        self.socket.sendall(data);return len(data)
    def flush(self):pass
    def read(self,size):
        try:return self.socket.recv(size)
        except socket.timeout:return b''
    def close(self):
        try:self.socket.shutdown(socket.SHUT_RDWR)
        except OSError:pass
        self.socket.close()

class TcpWorker(SerialWorker):
    def __init__(self,host,port,events,runs_dir,socket_factory=None):
        self.host=host;self.tcp_port=int(port);self.socket_factory=socket_factory
        super().__init__(f'{host}:{self.tcp_port}',events,runs_dir,self._open_socket)
    def _open_socket(self):
        if self.socket_factory is not None:return self.socket_factory()
        return _SocketStream(self.host,self.tcp_port)
