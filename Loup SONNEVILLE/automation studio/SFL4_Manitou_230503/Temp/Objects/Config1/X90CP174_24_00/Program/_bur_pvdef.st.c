#define _BUR_LOCAL _BUR_PUBLIC __attribute__((__section__(".bss.vol")))
#define _BUR_LOCAL_RETAIN _BUR_PUBLIC __attribute__((__section__(".bss.rem")))
#define _DEFAULT_INCLUDE
#include <bur\plctypes.h>
#include "C:/Users/loup.sonneville/Documents/Github/SN2_SFL4Manitou_23/Loup SONNEVILLE/automation studio/SFL4_Manitou_230503/Temp/Objects/Config1/X90CP174_24_00/Program/_bur_pvdefst.h"
#line 9 "C:/BrAutomation/AS49/AS/gnuinst/V4.1.2/4.9/arm-elf/include/bur/_bur_pvdef.nodebug"
void __AS__ImplInitCyclic_ld(void);
void __AS__ImplInitInit_ld(void);
void __AS__ImplInitExit_ld(void);
void _INIT __BUR__ENTRY_INIT_BRELF_FUNCT__(void){__AS__ImplInitCyclic_ld();
__AS__ImplInitInit_ld();
__AS__ImplInitExit_ld();
}

__asm__(".section \".plc\"");
__asm__(".ascii \"iecfile \\\"Logical/Global.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/operator/operator.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/runtime/runtime.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/astime/astime.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsIecCon/AsIecCon.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/MpDatabase/MpDatabase.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/MpDatabase/MpDatabaseError.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/MpBase/MpBase.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsHttp/AsHttp.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/operator/operator.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/runtime/runtime.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/astime/astime.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsIecCon/AsIecCon.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/MpDatabase/MpDatabase.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/MpBase/MpBase.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsHttp/AsHttp.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Global.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Temp/Includes/AS_TempDecl/Config1/GlobalComponents/MpComponents.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/operator/operator.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/runtime/runtime.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/astime/astime.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsIecCon/AsIecCon.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/MpBase/MpBase.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsHttp/AsHttp.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Program/Types.typ\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Program/Variables.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"C:/Users/loup.sonneville/Documents/Github/SN2_SFL4Manitou_23/Loup SONNEVILLE/automation studio/SFL4_Manitou_230503/Temp/Objects/Config1/X90CP174_24_00/Program/_bur_pvdef.st.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"plcreplace \\\"C:/Users/loup.sonneville/Documents/Github/SN2_SFL4Manitou_23/Loup SONNEVILLE/automation studio/SFL4_Manitou_230503/Temp/Objects/Config1/X90CP174_24_00/Program/_bur_pvdef.st.c\\\" \\\"C:/BrAutomation/AS49/AS/gnuinst/V4.1.2/4.9/arm-elf/include/bur/_bur_pvdef.st\\\"\\n\"");
__asm__(".previous");