# This script segment is generated automatically by AutoPilot

set axilite_register_dict [dict create]
set port_CTRL {
ap_start { }
ap_done { }
ap_ready { }
ap_idle { }
in1_V { 
	dir I
	width 32
	depth 1
	mode ap_none
	offset 16
	offset_end 23
}
in2_V { 
	dir I
	width 32
	depth 1
	mode ap_none
	offset 24
	offset_end 31
}
in3_V { 
	dir I
	width 32
	depth 1
	mode ap_none
	offset 32
	offset_end 39
}
in4_V { 
	dir I
	width 32
	depth 1
	mode ap_none
	offset 40
	offset_end 47
}
w1_V { 
	dir I
	width 32
	depth 1
	mode ap_none
	offset 48
	offset_end 55
}
w2_V { 
	dir I
	width 32
	depth 1
	mode ap_none
	offset 56
	offset_end 63
}
w3_V { 
	dir I
	width 32
	depth 1
	mode ap_none
	offset 64
	offset_end 71
}
w4_V { 
	dir I
	width 32
	depth 1
	mode ap_none
	offset 72
	offset_end 79
}
b_V { 
	dir I
	width 32
	depth 1
	mode ap_none
	offset 80
	offset_end 87
}
out1_V { 
	dir I
	width 32
	depth 1
	mode ap_none
	offset 88
	offset_end 95
}
out2_V { 
	dir I
	width 32
	depth 1
	mode ap_none
	offset 96
	offset_end 103
}
out3_V { 
	dir I
	width 32
	depth 1
	mode ap_none
	offset 104
	offset_end 111
}
out4_V { 
	dir I
	width 32
	depth 1
	mode ap_none
	offset 112
	offset_end 119
}
ch_in { 
	dir I
	width 32
	depth 1
	mode ap_none
	offset 120
	offset_end 127
}
ch_out { 
	dir I
	width 32
	depth 1
	mode ap_none
	offset 128
	offset_end 135
}
fsize { 
	dir I
	width 32
	depth 1
	mode ap_none
	offset 136
	offset_end 143
}
stride { 
	dir I
	width 32
	depth 1
	mode ap_none
	offset 144
	offset_end 151
}
kernel { 
	dir I
	width 32
	depth 1
	mode ap_none
	offset 152
	offset_end 159
}
act { 
	dir I
	width 32
	depth 1
	mode ap_none
	offset 160
	offset_end 167
}
}
dict set axilite_register_dict CTRL $port_CTRL


