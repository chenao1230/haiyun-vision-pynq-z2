# Native Vitis 2019.2 projects; run from an ASCII path via the packaging script.
set package $::env(PYNQ_HANDOFF_ROOT)
set workspace $::env(PYNQ_HANDOFF_WORKSPACE)
setws $workspace
platform create -name haiyun_pynq_z2 -hw [file join $package hardware export haiyun_pynq_z2.xsa] -proc ps7_cortexa9_0 -os standalone
domain active standalone_domain
bsp setlib -name xilffs
bsp config use_lfn 1
bsp config stdin ps7_uart_1
bsp config stdout ps7_uart_1
domain create -name fsbl_domain -proc ps7_cortexa9_0 -os standalone -support-app {Zynq FSBL}
domain active fsbl_domain
bsp setlib -name xilffs
bsp setlib -name xilrsa
bsp config use_lfn 0
bsp config stdin ps7_uart_1
bsp config stdout ps7_uart_1
platform generate
app create -name haiyun_app -platform haiyun_pynq_z2 -domain standalone_domain -lang c++ -template {Empty Application}
importsources -name haiyun_app -path [file join $package software app] -linker-script
app config -name haiyun_app -set compiler-optimization {Optimize more (-O2)}
app create -name haiyun_fsbl -platform haiyun_pynq_z2 -domain fsbl_domain -lang c -template {Empty Application}
importsources -name haiyun_fsbl -path [file join $package software fsbl] -linker-script
app config -name haiyun_fsbl -set compiler-optimization {Optimize (-O1)}
app config -name haiyun_fsbl define-compiler-symbols FSBL_DEBUG_INFO
app config -name haiyun_fsbl -set compiler-misc {-c -fmessage-length=0 -ffunction-sections -fdata-sections}
app config -name haiyun_fsbl -set linker-misc {-Wl,--build-id=none -Wl,--gc-sections}
app config -name haiyun_fsbl libraries rsa
app config -name haiyun_app -set linker-misc {-Wl,--build-id=none}
puts "PYNQ_NATIVE_HANDOFF_PROJECTS_CREATED"
app build -name haiyun_app
app build -name haiyun_fsbl
puts "PYNQ_NATIVE_HANDOFF_PROJECTS_BUILT"
exit
