# Vivado 2019.2. Sources and IP are relative to this release, not the old D: project.
if {[info exists ::env(PYNQ_RELEASE_ROOT)]} {
    set release $::env(PYNQ_RELEASE_ROOT)
    set build $::env(PYNQ_HARDWARE_BUILD)
} else {
    set release [file join [file dirname [info script]] ..]
    set build hardware_build
}
puts "RELEASE_ROOT=$release BUILD_ROOT=$build CWD=[pwd]"
file mkdir $build
create_project haiyun_pynq_z2 [file join $build project] -part xc7z020clg400-1 -force
set_property ip_repo_paths [list [file join $release hardware ip_repo]] [current_project]
update_ip_catalog
source [file join $release hardware source design_1_bd.tcl]
validate_bd_design
save_bd_design
generate_target all [get_files design_1.bd]
make_wrapper -files [get_files design_1.bd] -top
set wrapper [file join $build project haiyun_pynq_z2.gen sources_1 bd design_1 hdl design_1_wrapper.v]
if {![file exists $wrapper]} {set wrapper [file join $build project haiyun_pynq_z2.srcs sources_1 bd design_1 hdl design_1_wrapper.v]}
add_files -norecurse $wrapper
set_property top design_1_wrapper [current_fileset]
update_compile_order -fileset sources_1
file mkdir [file join $build export]
set ps [get_bd_cells processing_system7_0]
set fp [open [file join $build export ps_properties.txt] w]
foreach p [lsort [list_property $ps]] {
    if {[string match CONFIG.PCW* $p]} {puts $fp "$p=[get_property $p $ps]"}
}
close $fp
if {[get_property CONFIG.PCW_CRYSTAL_PERIPHERAL_FREQMHZ $ps] != 50 ||
    [get_property CONFIG.PCW_UIPARAM_ACT_DDR_FREQ_MHZ $ps] != 525 ||
    [get_property CONFIG.PCW_ACT_FPGA0_PERIPHERAL_FREQMHZ $ps] != 120} {
    error "Board clock invariants failed"
}
write_hw_platform -fixed -force -file [file join $build export haiyun_pynq_z2_no_bit.xsa]
# The Python release builder attaches the board-tested bit and updates all three
# XSA file indexes. Vivado silently omits -include_bit without a completed run.
puts "PYNQ_RELEASE_HARDWARE_EXPORTED"
close_project
exit
