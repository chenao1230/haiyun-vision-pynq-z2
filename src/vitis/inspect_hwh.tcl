set hwh [lindex $argv 0]
hsi open_hw_design $hwh
puts "PROCESSORS=[hsi get_cells -hier -filter {IP_TYPE==PROCESSOR}]"
puts "EMACS=[hsi get_cells -hier -filter {IP_NAME==ps7_ethernet}]"
puts "PS7=[hsi get_cells -hier -filter {IP_NAME==processing_system7}]"
hsi close_hw_design [hsi current_hw_design]
exit
