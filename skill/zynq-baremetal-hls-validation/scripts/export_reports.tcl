# Run from a Vivado command environment:
# vivado -mode batch -source scripts/export_reports.tcl -tclargs routed.dcp output_directory
if {$argc != 2} {puts stderr "Usage: checkpoint.dcp output_directory"; exit 2}
set checkpoint [file normalize [lindex $argv 0]]
set outdir [file normalize [lindex $argv 1]]
if {![file isfile $checkpoint]} {puts stderr "Checkpoint not found"; exit 2}
# Require a new or empty directory to avoid overwriting other evidence.
file mkdir $outdir
if {[llength [glob -nocomplain -directory $outdir *]] > 0} {puts stderr "Output directory must be empty"; exit 2}
if {[catch {
 open_checkpoint $checkpoint
 report_utilization -file [file join $outdir utilization.rpt]
 report_utilization -hierarchical -file [file join $outdir utilization_hierarchical.rpt]
 report_timing_summary -file [file join $outdir timing_summary.rpt]
 report_clocks -file [file join $outdir clocks.rpt]
 report_route_status -file [file join $outdir route_status.rpt]
 report_power -file [file join $outdir power_estimate.rpt]
 set f [open [file join $outdir export_context.txt] w]
 puts $f "Vivado: [version -short]"
 puts $f "Checkpoint: $checkpoint"
 puts $f "Export time: [clock format [clock seconds]]"
 close $f
 close_design
} err]} {puts stderr $err; exit 1}
exit 0
