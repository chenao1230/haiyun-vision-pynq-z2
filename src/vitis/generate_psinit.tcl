set hwh [file normalize [lindex $argv 0]]
set out [file normalize [lindex $argv 1]]
file mkdir $out
hsi open_hw_design $hwh
hsi generate_target {psinit} [hsi get_cells processing_system7_0] -dir $out
hsi close_hw_design [hsi current_hw_design]
exit
