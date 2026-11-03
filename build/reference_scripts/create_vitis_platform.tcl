# Vitis 2019.2; the caller supplies PYNQ_RELEASE_ROOT and PYNQ_VITIS_WORKSPACE.
setws $::env(PYNQ_VITIS_WORKSPACE)
platform create -name haiyun_pynq_z2 -hw [file join $::env(PYNQ_RELEASE_ROOT) hardware export haiyun_pynq_z2.xsa] -proc ps7_cortexa9_0 -os standalone
domain active standalone_domain
bsp setlib -name xilffs
bsp config use_lfn 1
bsp config stdin ps7_uart_1
bsp config stdout ps7_uart_1
platform generate
puts "PYNQ_FROZEN_PLATFORM_GENERATED"
exit
