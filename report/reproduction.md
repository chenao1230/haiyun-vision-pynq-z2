# 从源码到运行

## 软件环境
Windows、Vivado/Vitis 2019.2（含 Zynq-7000 器件、ARM 编译器和 Bootgen）、Python 与 requirements.txt。解压/复制到短英文路径，例如 E:/haiyun。Python 环境用 SHIP_PYTHON 指定，硬件工具安装路径用 VITIS_ROOT 指定。

## Vivado / HLS
打开 src/vivado/hardware/project/haiyun_pynq_z2.xpr 查看现有工程。工程迁移时优先运行 build/recreate_vivado.cmd，其 Tcl 由相对路径重建 BD 与 IP 仓库。该步骤导出不含 bit 的硬件平台；需要重新综合实现时随后运行：
```
vivado -mode batch -source build/implement_vivado.tcl
```
HLS 算子在 src/hls/src，原 HLS 工程在 src/hls/project。集成的已封装 IP 在 src/vivado/hardware/ip_repo。原 HLS 工程包含生成路径记录，重建前在 HLS 中将源文件指向包内 src；本次整理未重跑 HLS 综合。
build/export_reports.cmd 从交付 DCP 导出新报告，输出目录必须为空。综合/实现的记录时钟约120MHz；以太网 FSBL 的 PS 配置可设100MHz，见 src/vitis/create_pynqz2_eth_hw.tcl，两者分别描述约束与启动配置。

## Vitis / ARM
当前应用使用 src/vitis/firmware/app/Makefile。执行 build/rebuild_app.cmd，输出 firmware/app/Debug/haiyun_eth_app.elf。Makefile 使用包内 build/official_generated_fast2/bsp_ethernet/ps7_cortexa9_0。
要重新生成 BSP/FSBL，使用 xsct 执行包内 src/vitis/build_bsp.tcl，两个参数分别为 board/hardware/pynq_z2_eth_ps_2019_2.hdf 与新的空输出目录；生成后保持 xilffs 长文件名与 lwIP 参数，并核对 PS 初始化和网口 PHY。包内保留当前 BSP、FSBL 源文件及初始化配置。
原生 IDE 工作区在 src/vitis_reference_workspace，其应用是原工作区快照。当前以太网 ARM 应用必须从 src/vitis/firmware/app/src 导入，不能以原工作区应用替代。

## BOOT
board/components 中含当前 FSBL、匹配位流、当前应用 ELF；board/boot.bif 使用相对路径。执行 build/package_boot.cmd 生成 BOOT_rebuilt.bin，不覆盖交付 BOOT.bin。若重编应用，先将重编 ELF 另存并更新自己的 BIF，再打包测试。board/sd_card 含当前 BOOT 和已有演示数据/折叠权重。

## 电脑与验证
按根 README 安装依赖并运行 start_pc.cmd。data/pc_files 有91帧清单及原图；board/results 为既有运行记录，可在上位机回放。运行 python build/verify_manifest.py 核对文件完整性。运行 skill/tests/run_tests.py 验证通用脚本。仿真与实板结果保留来源，不把本次目录迁移当成重新测量。
