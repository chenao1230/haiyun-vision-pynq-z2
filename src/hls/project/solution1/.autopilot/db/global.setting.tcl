
set TopModule "conv"
set ClockPeriod 5.5
set ClockList ap_clk
set HasVivadoClockPeriod 0
set CombLogicFlag 0
set PipelineFlag 0
set DataflowTaskPipelineFlag 1
set TrivialPipelineFlag 0
set noPortSwitchingFlag 0
set FloatingPointFlag 0
set FftOrFirFlag 0
set NbRWValue 0
set intNbAccess 0
set NewDSPMapping 1
set HasDSPModule 1
set ResetLevelFlag 0
set ResetStyle control
set ResetSyncFlag 1
set ResetRegisterFlag 0
set ResetVariableFlag 0
set FsmEncStyle onehot
set MaxFanout 0
set RtlPrefix {}
set ExtraCCFlags {}
set ExtraCLdFlags {}
set SynCheckOptions {}
set PresynOptions {}
set PreprocOptions {}
set SchedOptions {}
set BindOptions {}
set RtlGenOptions {}
set RtlWriterOptions {}
set CbcGenFlag {}
set CasGenFlag {}
set CasMonitorFlag {}
set AutoSimOptions {}
set ExportMCPathFlag 0
set SCTraceFileName mytrace
set SCTraceFileFormat vcd
set SCTraceOption all
set TargetInfo xc7z020:-clg400:-2
set SourceFiles {sc {} c {../../src/upsample.cpp ../../src/std_conv.cpp ../../src/pwconv.cpp ../../src/maxpool.cpp ../../src/conv.cpp}}
set SourceFlags {sc {} c {{} {} {} {} {}}}
set DirectiveFile C:/Users/22347/Desktop/yolo4_tiny_acc/hls/top/top/solution1/solution1.directive
set TBFiles {verilog {../../src/winoconv_test.h ../../src/winoconv_test.cpp ../../src/test_tb.cpp ../../src/sampling_test.h ../../src/sampling_test.cpp ../../src/pwconv_test.h ../../src/pwconv_test.cpp} bc {../../src/winoconv_test.h ../../src/winoconv_test.cpp ../../src/test_tb.cpp ../../src/sampling_test.h ../../src/sampling_test.cpp ../../src/pwconv_test.h ../../src/pwconv_test.cpp} vhdl {../../src/winoconv_test.h ../../src/winoconv_test.cpp ../../src/test_tb.cpp ../../src/sampling_test.h ../../src/sampling_test.cpp ../../src/pwconv_test.h ../../src/pwconv_test.cpp} sc {../../src/winoconv_test.h ../../src/winoconv_test.cpp ../../src/test_tb.cpp ../../src/sampling_test.h ../../src/sampling_test.cpp ../../src/pwconv_test.h ../../src/pwconv_test.cpp} cas {../../src/winoconv_test.h ../../src/winoconv_test.cpp ../../src/test_tb.cpp ../../src/sampling_test.h ../../src/sampling_test.cpp ../../src/pwconv_test.h ../../src/pwconv_test.cpp} c {}}
set SpecLanguage C
set TVInFiles {bc {} c {} sc {} cas {} vhdl {} verilog {}}
set TVOutFiles {bc {} c {} sc {} cas {} vhdl {} verilog {}}
set TBTops {verilog {} bc {} vhdl {} sc {} cas {} c {}}
set TBInstNames {verilog {} bc {} vhdl {} sc {} cas {} c {}}
set XDCFiles {}
set ExtraGlobalOptions {"area_timing" 1 "clock_gate" 1 "impl_flow" map "power_gate" 0}
set TBTVFileNotFound {}
set AppFile ../vivado_hls.app
set ApsFile solution1.aps
set AvePath ../..
set DefaultPlatform DefaultPlatform
set multiClockList {}
set SCPortClockMap {}
set intNbAccess 0
set PlatformFiles {{DefaultPlatform {xilinx/zynq/zynq xilinx/zynq/zynq_fpv6}}}
set HPFPO 0
