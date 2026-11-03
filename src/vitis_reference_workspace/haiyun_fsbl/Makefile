SHELL := cmd.exe
VITIS_ROOT ?= E:/viti/Vitis/2019.2
BIN := $(VITIS_ROOT)/gnu/aarch32/nt/gcc-arm-none-eabi/bin
BSP := ../../software/bsp_fsbl
FLAGS := -mcpu=cortex-a9 -mfpu=vfpv3 -mfloat-abi=hard -g -Wl,--build-id=none -specs=src/Xilinx.spec -I$(BSP)/include -L$(BSP)/lib -Wl,-T,src/lscript.ld -Wl,-Map,Debug/haiyun_fsbl.map
.PHONY: all
all:
	if not exist Debug mkdir Debug
	"$(BIN)/arm-none-eabi-gcc.exe" -O1 -DFSBL_DEBUG_INFO -ffunction-sections -fdata-sections -Wl,--gc-sections $(FLAGS) -o Debug/haiyun_fsbl.elf $(wildcard src/*.c) $(wildcard src/*.S) -Wl,--start-group,-lrsa,-lxilffs,-lxil,-lgcc,-lc,--end-group
