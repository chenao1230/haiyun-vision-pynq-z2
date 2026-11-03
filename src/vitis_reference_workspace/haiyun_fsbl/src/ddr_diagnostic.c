#include "fsbl.h"
#include "early_log.h"
#include "xil_cache.h"
int DiagnosticDdrTest(void) {
    volatile u32 *memory = (volatile u32*)0x00100000;
    const u32 count = 0x00400000 / 4;
    u32 pass, i, expected, actual, errors;
    EarlyLog("DDR 4MB PATTERN TEST BEGIN (uncached CPU writes/reads, independent of SD data)");
    for (pass=0; pass<5; ++pass) {
        errors=0;
        for (i=0;i<count;++i) {
            expected=pass==0?0:pass==1?0xffffffffU:pass==2?0xaaaaaaaaU:pass==3?0x55555555U:(i*0x9e3779b9U)^0xa5a55a5aU;
            memory[i]=expected;
        }
        __asm__ volatile("dsb sy" ::: "memory");
        for (i=0;i<count;++i) {
            expected=pass==0?0:pass==1?0xffffffffU:pass==2?0xaaaaaaaaU:pass==3?0x55555555U:(i*0x9e3779b9U)^0xa5a55a5aU;
            actual=memory[i];
            if(actual!=expected) {
                if(errors<8) EarlyPrintf("DDR ERROR pass=%lu addr=%08lx expected=%08lx actual=%08lx",pass,(u32)&memory[i],expected,actual);
                ++errors;
            }
        }
        EarlyPrintf("DDR PATTERN pass=%lu errors=%lu",pass,errors);
        if(errors) {EarlyLog("DDR PATTERN TEST FAIL; stopping before PL load");return XST_FAILURE;}
    }
    EarlyLog("DDR 4MB PATTERN TEST PASS");
    return XST_SUCCESS;
}
