set hwh [file normalize [lindex $argv 0]]
set out [file normalize [lindex $argv 1]]
file mkdir $out
hsi open_hw_design $hwh
hsi create_sw_design lwip_example -proc ps7_cortexa9_0 -os standalone -app lwip_echo_server
hsi add_library lwip211
hsi generate_app -dir $out
hsi close_sw_design [hsi current_sw_design]
hsi close_hw_design [hsi current_hw_design]
exit
