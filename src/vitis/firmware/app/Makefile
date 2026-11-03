SHELL := cmd.exe
VITIS_ROOT ?= D:/Xilinx/Vitis/2019.2
BIN := $(VITIS_ROOT)/gnu/aarch32/nt/gcc-arm-none-eabi/bin
BSP := ../../build/official_generated_fast2/bsp_ethernet/ps7_cortexa9_0
OUT := Debug
COMMON := -O2 -mcpu=cortex-a9 -mfpu=vfpv3 -mfloat-abi=hard -g -Wall -Wextra -ffunction-sections -fdata-sections -Isrc -I$(BSP)/include -DXPAR_XCONV_NUM_INSTANCES=1 -DXPAR_CONV_0_DEVICE_ID=0 -DXPAR_CONV_0_S_AXI_CTRL_BASEADDR=0x43C00000 -DXPAR_CONV_0_S_AXI_CTRL_HIGHADDR=0x43C0FFFF -DXPAR_XCONV_0_DEVICE_ID=0 -DXPAR_XCONV_0_S_AXI_CTRL_BASEADDR=0x43C00000 -DXPAR_XCONV_0_S_AXI_CTRL_HIGHADDR=0x43C0FFFF
CPP_SRC := $(wildcard src/*.cpp)
C_SRC := $(wildcard src/*.c)
CPP_OBJ := $(patsubst src/%.cpp,$(OUT)/%.o,$(CPP_SRC))
C_OBJ := $(patsubst src/%.c,$(OUT)/%.o,$(C_SRC))
OBJS := $(CPP_OBJ) $(C_OBJ)

all: $(OUT)/haiyun_eth_app.elf

$(OUT):
	if not exist $(OUT) mkdir $(OUT)

$(OUT)/%.o: src/%.cpp | $(OUT)
	"$(BIN)/arm-none-eabi-g++.exe" $(COMMON) -std=gnu++11 -c $< -o $@

$(OUT)/%.o: src/%.c | $(OUT)
	"$(BIN)/arm-none-eabi-gcc.exe" $(COMMON) -std=gnu11 -c $< -o $@

$(OUT)/haiyun_eth_app.elf: $(OBJS)
	"$(BIN)/arm-none-eabi-g++.exe" -mcpu=cortex-a9 -mfpu=vfpv3 -mfloat-abi=hard -g -specs=src/Xilinx.spec -L$(BSP)/lib -Wl,-T,src/lscript.ld -Wl,--gc-sections -Wl,--build-id=none -Wl,-Map,$(OUT)/haiyun_eth_app.map -o $@ $(OBJS) -Wl,--start-group,-lxilffs,-llwip4,-lxil,-lstdc++,-lm,-lc,-lgcc,--end-group

clean:
	if exist $(OUT) rmdir /s /q $(OUT)
