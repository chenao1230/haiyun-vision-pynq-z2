#include <iostream>
#include"debug.h"
#pragma GCC optimize(3,"Ofast","inline")
using namespace std;

int main()
{
    string weight_dir="folded_weights";
    string ref_dir="yolo_test";
    Xil_DCacheDisable();
    cout << "Yolo4 Tiny Test" << endl;
    if (SD_Init() != XST_SUCCESS) return EXIT_FAILURE;
    diag_log("=== DIAGNOSTIC START: SD mounted, application entered ===");
    // Start with uncached CPU memory so PL/ARM buffers stay coherent.
    Xil_DCacheDisable();
    diag_log("BEFORE yolo_test");
    yolo_test(weight_dir,ref_dir);
    diag_log("DONE: both output files closed successfully");
    cout << "DONE: yolo_test/out0.bin and out1.bin saved" << endl;
    Xil_DCacheEnable();
    return 0;
}
