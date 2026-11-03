SHELL := cmd.exe
VITIS_ROOT ?= E:/viti/Vitis/2019.2
BIN := $(VITIS_ROOT)/gnu/aarch32/nt/gcc-arm-none-eabi/bin
BSP := ../../software/bsp_app
FLAGS := -mcpu=cortex-a9 -mfpu=vfpv3 -mfloat-abi=hard -g -Wl,--build-id=none -specs=src/Xilinx.spec -I$(BSP)/include -L$(BSP)/lib -Wl,-T,src/lscript.ld -Wl,-Map,Debug/haiyun_app.map
.PHONY: all
all:
	if not exist Debug mkdir Debug
	"$(BIN)/arm-none-eabi-g++.exe" -O2 $(FLAGS) -o Debug/haiyun_app.elf $(wildcard src/*.cpp) -Wl,--start-group,-lxilffs,-lxil,-lstdc++,-lm,-lc,-lgcc,--end-group
