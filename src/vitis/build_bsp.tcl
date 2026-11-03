set hwh [file normalize [lindex $argv 0]]
set out [file normalize [lindex $argv 1]]
file mkdir $out
hsi open_hw_design $hwh

hsi create_sw_design bsp_ethernet -proc ps7_cortexa9_0 -os standalone
hsi add_library xilffs
hsi set_property CONFIG.use_lfn 1 [hsi get_libs xilffs]
hsi add_library lwip211
hsi set_property CONFIG.tcp_wnd 65535 [hsi get_libs lwip211]
hsi set_property CONFIG.tcp_snd_buf 8192 [hsi get_libs lwip211]
hsi set_property CONFIG.mem_size 524288 [hsi get_libs lwip211]
hsi generate_bsp -dir [file join $out bsp_ethernet]
hsi close_sw_design [hsi current_sw_design]

hsi create_sw_design fsbl_ethernet -proc ps7_cortexa9_0 -os standalone -app zynq_fsbl
hsi generate_app -dir [file join $out fsbl_ethernet]
hsi close_sw_design [hsi current_sw_design]

hsi generate_target {psinit} [hsi get_cells processing_system7_0] -dir [file join $out psinit]
hsi close_hw_design [hsi current_hw_design]
exit
