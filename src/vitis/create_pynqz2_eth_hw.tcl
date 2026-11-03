set output_dir [file normalize [lindex $argv 0]]
set board_repo [file normalize [lindex $argv 1]]
file mkdir $output_dir
set_param board.repoPaths [list $board_repo]

create_project pynq_z2_eth_ps [file join $output_dir vivado_project] -part xc7z020clg400-1 -force
set board_parts [get_board_parts -quiet *pynq-z2*]
if {[llength $board_parts] == 0} {
    error "PYNQ-Z2 board file was not discovered at $board_repo"
}
set_property board_part [lindex $board_parts 0] [current_project]
puts "Using board part: [get_property board_part [current_project]]"

create_bd_design design_eth_ps
set ps7 [create_bd_cell -type ip -vlnv xilinx.com:ip:processing_system7:5.5 processing_system7_0]
apply_bd_automation -rule xilinx.com:bd_rule:processing_system7 \
    -config {make_external "FIXED_IO, DDR" apply_board_preset "1"} $ps7

# The existing accelerator was closed at 120 MHz with marginal timing.
# Driving it at 100 MHz is conservative while the Ethernet clock remains 125 MHz.
set_property -dict [list \
    CONFIG.PCW_FPGA0_PERIPHERAL_FREQMHZ {100} \
    CONFIG.PCW_FCLK0_PERIPHERAL_DIVISOR0 {10} \
    CONFIG.PCW_FCLK0_PERIPHERAL_DIVISOR1 {1} \
    CONFIG.PCW_USE_S_AXI_HP0 {1} \
    CONFIG.PCW_USE_S_AXI_HP1 {1} \
    CONFIG.PCW_USE_S_AXI_HP2 {1} \
    CONFIG.PCW_USE_S_AXI_HP3 {1} \
] $ps7

connect_bd_net [get_bd_pins $ps7/FCLK_CLK0] \
    [get_bd_pins $ps7/M_AXI_GP0_ACLK] \
    [get_bd_pins $ps7/S_AXI_HP0_ACLK] \
    [get_bd_pins $ps7/S_AXI_HP1_ACLK] \
    [get_bd_pins $ps7/S_AXI_HP2_ACLK] \
    [get_bd_pins $ps7/S_AXI_HP3_ACLK]

validate_bd_design
save_bd_design
generate_target all [get_files design_eth_ps.bd]
make_wrapper -files [get_files design_eth_ps.bd] -top
add_files -norecurse [file join $output_dir vivado_project pynq_z2_eth_ps.srcs sources_1 bd design_eth_ps hdl design_eth_ps_wrapper.v]
update_compile_order -fileset sources_1
write_hwdef -force -file [file join $output_dir pynq_z2_eth_ps.hdf]
write_bd_tcl -force [file join $output_dir design_eth_ps.tcl]
close_project
exit
