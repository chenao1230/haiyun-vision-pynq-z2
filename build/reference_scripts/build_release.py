"""Portable, pinned Vivado/Vitis 2019.2 release build. Never writes to a physical SD card."""
from pathlib import Path
import argparse
import hashlib
import json
import os
import re
import shutil
import struct
import subprocess
import tempfile
import xml.etree.ElementTree as ET
import zipfile

ROOT=Path(__file__).resolve().parents[1]
def sha(p): return hashlib.sha256(Path(p).read_bytes()).hexdigest()
def require(condition,message):
    if not condition: raise RuntimeError(message)
def run(args,cwd,log,env=None):
    result=subprocess.run([str(a) for a in args],cwd=cwd,env=env,stdout=subprocess.PIPE,stderr=subprocess.STDOUT)
    Path(log).parent.mkdir(parents=True,exist_ok=True)
    Path(log).write_bytes(result.stdout)
    require(result.returncode==0,f'Command failed ({result.returncode}); see {log}')

def attach_bit(source,output):
    """Add the board-tested PL binary to Vivado's corrected pre-synthesis handoff.
    No synthesis/implementation status is changed or fabricated.
    """
    name='design_1_wrapper.bit'
    with zipfile.ZipFile(source) as z: files={n:z.read(n) for n in z.namelist()}
    files[name]=(ROOT/'hardware/golden'/name).read_bytes()
    descriptor='sysdef.xml' if 'sysdef.xml' in files else 'hwdef.xml'
    sysdef=ET.fromstring(files[descriptor])
    for node in list(sysdef):
        if node.tag=='File' and node.get('Type')=='BIT':sysdef.remove(node)
    ET.SubElement(sysdef,'File',{'Type':'BIT','Name':name})
    files[descriptor]=ET.tostring(sysdef,encoding='utf-8',xml_declaration=True)
    info=json.loads(files['xsa.json'])
    info['files']=[v for v in info.get('files',[]) if v.get('type')!='FULL_BIT']+[{'name':name,'type':'FULL_BIT'}]
    files['xsa.json']=json.dumps(info,indent=2).encode()
    xml=ET.fromstring(files['xsa.xml'])
    listing=xml.find('./DSA/Files')
    if listing is None:listing=ET.SubElement(xml.find('DSA'),'Files')
    for n in list(listing):
        if n.get('Type')=='FULL_BIT':listing.remove(n)
    ET.SubElement(listing,'File',{'Type':'FULL_BIT','Name':name})
    files['xsa.xml']=ET.tostring(xml,encoding='utf-8',xml_declaration=True)
    with zipfile.ZipFile(output,'w',zipfile.ZIP_DEFLATED) as z:
        for name,data in files.items():z.writestr(name,data)

def verify_xsa(path):
    with zipfile.ZipFile(path) as z:
        require(z.testzip() is None,'XSA ZIP integrity error')
        bit=[n for n in z.namelist() if n.endswith('.bit')]
        require(len(bit)==1 and z.read(bit[0])==(ROOT/'hardware/golden/design_1_wrapper.bit').read_bytes(),'XSA golden bit mismatch')
        hwh=ET.fromstring(z.read('design_1.hwh'))
        ps=next(m for m in hwh.findall('.//MODULE') if m.get('MODTYPE')=='processing_system7')
        params={p.get('NAME'):p.get('VALUE') for p in ps.findall('./PARAMETERS/PARAMETER')}
        for key,value in {'PCW_CRYSTAL_PERIPHERAL_FREQMHZ':50,'PCW_UIPARAM_ACT_DDR_FREQ_MHZ':525,'PCW_ACT_FPGA0_PERIPHERAL_FREQMHZ':120,'PCW_ACT_APU_PERIPHERAL_FREQMHZ':650}.items():
            require(float(params[key])==value,'Wrong XSA '+key)
        normalize=lambda s:re.sub(r'\s+','',re.sub(r'/\*.*?\*/|//[^\n]*','',s,flags=re.S))
        require(normalize(z.read('ps7_init.c').decode())==normalize((ROOT/'software/fsbl/ps7_init.c').read_text()),'XSA init differs from board-tested FSBL init')
        for name in ('sysdef.xml' if 'sysdef.xml' in z.namelist() else 'hwdef.xml','xsa.xml'):
            for item in ET.fromstring(z.read(name)).iter('File'):
                if item.get('Name'):require(item.get('Name') in z.namelist(),'Dangling XSA file reference')
    return {'sha256':sha(path),'reference_mhz':50,'cpu_mhz':650,'ddr_mhz':525,'fclk0_mhz':120,'golden_bit_verified':True,'ps_init_matches_board_tested':True}

def load_segments(path):
    b=Path(path).read_bytes()
    require(b[:7]==b'\x7fELF\x01\x01\x01' and struct.unpack_from('<H',b,18)[0]==40,'Not ARM32 ELF')
    off=struct.unpack_from('<I',b,28)[0]; size,count=struct.unpack_from('<HH',b,42)
    result=[]
    for i in range(count):
        kind,pos,_,addr,n,mem,_,_=struct.unpack_from('<8I',b,off+i*size)
        if kind==1:result.append((addr,mem,b[pos:pos+n]))
    return result

def hardware(args):
    work=Path(tempfile.mkdtemp(prefix='pynq_hw_release_'))
    release=work/'release'
    (release/'hardware').mkdir(parents=True)
    for folder in ('source','ip_repo','golden'):
        shutil.copytree(ROOT/'hardware'/folder,release/'hardware'/folder)
    shutil.copy2(ROOT/'hardware/create_project.tcl',release/'hardware/create_project.tcl')
    env=os.environ.copy();env['PYNQ_RELEASE_ROOT']=release.as_posix();env['PYNQ_HARDWARE_BUILD']=(work/'hardware_build').as_posix()
    # Batch wrapper supplies vendor DLL/environment paths on Windows.
    cmd='@echo off\r\ncall "'+str(Path(args.vivado)/'bin/vivado.bat')+'" -mode batch -source release/hardware/create_project.tcl\r\n'
    (work/'hardware.cmd').write_bytes(cmd.encode('ascii'))
    run(['cmd','/c','hardware.cmd'],work,ROOT/'build/hardware_build.log',env)
    exports=work/'hardware_build/export'
    require((exports/'haiyun_pynq_z2_no_bit.xsa').is_file(),'Vivado did not export hardware; inspect log')
    output=ROOT/'hardware/export';output.mkdir(exist_ok=True)
    for p in exports.iterdir():shutil.copy2(p,output/p.name)
    attach_bit(output/'haiyun_pynq_z2_no_bit.xsa',output/'haiyun_pynq_z2.xsa')
    report=verify_xsa(output/'haiyun_pynq_z2.xsa')
    report['scratch_project']=str(work/'hardware_build/project/haiyun_pynq_z2.xpr')
    (ROOT/'build/hardware_verification.json').write_text(json.dumps(report,indent=2),encoding='utf-8')
    return report

def software(args):
    xsa=ROOT/'hardware/export/haiyun_pynq_z2.xsa'
    verify_xsa(xsa)
    work=Path(tempfile.mkdtemp(prefix='pynq_sw_release_'))
    shutil.copytree(ROOT/'software',work/'software')
    bin=Path(args.vitis)/'gnu/aarch32/nt/gcc-arm-none-eabi/bin'
    make=Path(args.vitis)/'gnuwin/bin/make.exe'
    env=os.environ.copy();env['PATH']=str(bin)+';'+str(make.parent)+';'+env.get('PATH','')
    out=ROOT/'build/software';out.mkdir(parents=True,exist_ok=True)
    for domain,lfn in (('fsbl',0),('app',1)):
        bsp=work/'software'/('bsp_'+domain)
        xp=(bsp/'include/xparameters.h').read_text()
        require('CPU_CORTEXA9_0_CPU_CLK_FREQ_HZ 650000000' in xp,'Wrong CPU clock in BSP')
        require(bool(re.search(r'#define\s+FILE_SYSTEM_USE_LFN\s+1',xp))==bool(lfn),'LFN domain mismatch')
        flags=['SHELL=cmd','COMPILER=arm-none-eabi-gcc','ASSEMBLER=arm-none-eabi-as','ARCHIVER=arm-none-eabi-ar','COMPILER_FLAGS=-O2 -c','EXTRA_COMPILER_FLAGS=-mcpu=cortex-a9 -mfpu=vfpv3 -mfloat-abi=hard -nostartfiles -g -Wall -Wextra']
        for src in sorted((bsp/'libsrc').glob('*/src')):
            if not (src/'Makefile').is_file():continue
            for phase in ('include','libs'):
                run([make,'-s','-B',phase,*flags],src,out/(domain+'_'+src.parent.name+'_'+phase+'.log'),env)
    with zipfile.ZipFile(xsa) as z:
        for name in ('ps7_init.c','ps7_init.h'):(work/'software/fsbl'/name).write_bytes(z.read(name))
    bsp=work/'software/bsp_fsbl'
    common=['-O1','-ffunction-sections','-fdata-sections','-mcpu=cortex-a9','-mfpu=vfpv3','-mfloat-abi=hard','-DFSBL_DEBUG_INFO','-Wno-builtin-macro-redefined','-D__DATE__="Oct 21 2026"','-D__TIME__="21:05:51"','-I'+str(bsp/'include'),'-Isoftware/fsbl']
    objects=[]
    for p in sorted((work/'software/fsbl').iterdir()):
        if p.suffix not in ('.c','.S'):continue
        obj=p.with_suffix('.o');objects.append(obj.relative_to(work))
        run([bin/'arm-none-eabi-gcc.exe',*common,'-c',p.relative_to(work),'-o',obj.relative_to(work)],work,out/('fsbl_'+p.name+'.log'))
    run([bin/'arm-none-eabi-gcc.exe',*common,'-Wl,--build-id=none','-Wl,--gc-sections','-specs=software/fsbl/Xilinx.spec','-Wl,-T,software/fsbl/lscript.ld','-Wl,-Map,fsbl.map','-o','fsbl.elf',*objects,'-L'+str(bsp/'lib'),'-Wl,--start-group,-lrsa,-lxilffs,-lxil,-lgcc,-lc,--end-group'],work,out/'fsbl_link.log')
    bsp=work/'software/bsp_app'
    flags=['-O2','-g','-mcpu=cortex-a9','-mfpu=vfpv3','-mfloat-abi=hard','-Wl,--build-id=none','-specs=software/fsbl/Xilinx.spec','-I'+str(bsp/'include'),'-L'+str(bsp/'lib'),'-Wl,-T,software/app/lscript.ld','-Wl,-Map,haiyun_app.map','-o','haiyun_app.elf']
    run([bin/'arm-none-eabi-g++.exe',*flags,*[p.relative_to(work) for p in sorted((work/'software/app').glob('*.cpp'))],'-Wl,--start-group,-lxilffs,-lxil,-lstdc++,-lm,-lc,-lgcc,--end-group'],work,out/'app_compile.log')
    for name,low,high in (('fsbl.elf',0,0x30000),('haiyun_app.elf',0x100000,0x20000000)):
        for addr,mem,data in load_segments(work/name):
            require((low<=addr and addr+mem<=high) or (name=='fsbl.elf' and 0xffff0000<=addr and addr+mem<=0xfffffe00),'ELF load range invalid')
    shutil.copy2(ROOT/'hardware/golden/design_1_wrapper.bit',work/'design.bit')
    (work/'boot.bif').write_text('the_ROM_image:\n{\n [bootloader] fsbl.elf\n design.bit\n haiyun_app.elf\n}\n',encoding='ascii')
    cmd='@echo off\r\ncall "'+str(Path(args.vitis)/'settings64.bat')+'"\r\ncall "'+str(Path(args.vitis)/'bin/bootgen.bat')+'" -arch zynq -image boot.bif -o BOOT.bin -w on\r\n'
    (work/'package.cmd').write_bytes(cmd.encode('ascii'))
    run(['cmd','/c','package.cmd'],work,out/'bootgen.log')
    b=(work/'BOOT.bin').read_bytes();require(sum(struct.unpack_from('<11I',b,0x20))&0xffffffff==0xffffffff,'Boot header checksum error')
    report={'rebuilt_from_release_sources':True,'fsbl_lfn':0,'app_lfn':1,'cpu_hz':650000000,'scratch':str(work)}
    for name,golden in (('fsbl.elf','fsbl.elf'),('haiyun_app.elf','diagnostic.elf')):
        report[name+'_load_segments_equal_golden']=load_segments(work/name)==load_segments(ROOT/'validation'/golden)
    report['boot_equal_golden']=(work/'BOOT.bin').read_bytes()==(ROOT/'validation/BOOT.bin').read_bytes()
    for name in ('fsbl.elf','haiyun_app.elf','BOOT.bin','boot.bif','fsbl.map','haiyun_app.map'):shutil.copy2(work/name,out/name)
    report['files']={n:{'bytes':(out/n).stat().st_size,'sha256':sha(out/n)} for n in ('fsbl.elf','haiyun_app.elf','BOOT.bin')}
    (out/'verification.json').write_text(json.dumps(report,indent=2),encoding='utf-8')
    return report

def main():
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument('--hardware',action='store_true',help='regenerate full BD/PS metadata and reattach golden PL bitstream')
    p.add_argument('--software',action='store_true',help='rebuild both BSPs, FSBL, application and BOOT.bin')
    p.add_argument('--verify',action='store_true')
    p.add_argument('--vitis',default=os.environ.get('VITIS_ROOT','E:/viti/Vitis/2019.2'))
    p.add_argument('--vivado',default=os.environ.get('VIVADO_ROOT','D:/Xilinx/Vivado/2019.2'))
    args=p.parse_args()
    if args.hardware:print(json.dumps(hardware(args),indent=2))
    if args.software:print(json.dumps(software(args),indent=2))
    if args.verify:print(json.dumps(verify_xsa(ROOT/'hardware/export/haiyun_pynq_z2.xsa'),indent=2))
    if not any((args.hardware,args.software,args.verify)):p.error('choose --hardware, --software or --verify')
if __name__=='__main__':main()
