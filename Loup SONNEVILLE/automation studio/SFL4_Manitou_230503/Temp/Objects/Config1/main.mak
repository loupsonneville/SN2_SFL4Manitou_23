SHELL := cmd.exe
CYGWIN=nontsec
export PATH := C:\ProgramData\Oracle\Java\javapath;C:\WINDOWS\system32;C:\WINDOWS;C:\WINDOWS\System32\Wbem;C:\WINDOWS\System32\WindowsPowerShell\v1.0\;C:\Program Files\PuTTY\;C:\Program Files\ASUS\Bluetooth Software\;C:\Program Files\ASUS\Bluetooth Software\syswow64;C:\Program Files\doxygen\bin;C:\Program Files\nodejs\;C:\Users\loup.sonneville\AppData\Local\Programs\Python\Python37-32\Scripts\;C:\Users\loup.sonneville\AppData\Local\Programs\Python\Python37-32\;C:\Users\loup.sonneville\AppData\Local\Programs\Python\Python37\Scripts\;C:\Users\loup.sonneville\AppData\Local\Programs\Python\Python37\;C:\Users\loup.sonneville\AppData\Local\Microsoft\WindowsApps;C:\Users\loup.sonneville\AppData\Local\GitHubDesktop\bin;C:\Users\loup.sonneville\AppData\Local\Programs\Python\Python37-32\Scripts\;C:\Users\loup.sonneville\AppData\Local\Programs\Python\Python37-32\;C:\Users\loup.sonneville\AppData\Local\Programs\Python\Python37\Scripts\;C:\Users\loup.sonneville\AppData\Local\Programs\Python\Python37\;C:\Users\loup.sonneville\AppData\Local\Microsoft\WindowsApps;C:\Users\loup.sonneville\AppData\Local\GitHubDesktop\bin;C:\BrAutomation\AS49\bin-en\4.9;C:\BrAutomation\AS49\bin-en\4.8;C:\BrAutomation\AS49\bin-en\4.7;C:\BrAutomation\AS49\bin-en\4.6;C:\BrAutomation\AS49\bin-en\4.5;C:\BrAutomation\AS49\bin-en\4.4;C:\BrAutomation\AS49\bin-en\4.3;C:\BrAutomation\AS49\bin-en\4.2;C:\BrAutomation\AS49\bin-en\4.1;C:\BrAutomation\AS49\bin-en\4.0;C:\BrAutomation\AS49\bin-en
export AS_BUILD_MODE := BuildAndTransfer
export AS_VERSION := 4.9.2.46
export AS_WORKINGVERSION := 4.9
export AS_COMPANY_NAME :=  
export AS_USER_NAME := loup.sonneville
export AS_PATH := C:/BrAutomation/AS49
export AS_BIN_PATH := C:/BrAutomation/AS49/bin-en
export AS_PROJECT_PATH := C:/Users/loup.sonneville/Documents/Github/SN2_SFL4Manitou_23/Loup\ SONNEVILLE/automation\ studio/SFL4_Manitou_230503
export AS_PROJECT_NAME := SFL4_Manitou_230503
export AS_SYSTEM_PATH := C:/BrAutomation/AS/System
export AS_VC_PATH := C:/BrAutomation/AS49/AS/VC
export AS_TEMP_PATH := C:/Users/loup.sonneville/Documents/Github/SN2_SFL4Manitou_23/Loup\ SONNEVILLE/automation\ studio/SFL4_Manitou_230503/Temp
export AS_CONFIGURATION := Config1
export AS_BINARIES_PATH := C:/Users/loup.sonneville/Documents/Github/SN2_SFL4Manitou_23/Loup\ SONNEVILLE/automation\ studio/SFL4_Manitou_230503/Binaries
export AS_GNU_INST_PATH := C:/BrAutomation/AS49/AS/GnuInst/V4.1.2
export AS_GNU_BIN_PATH := C:/BrAutomation/AS49/AS/GnuInst/V4.1.2/4.9/bin
export AS_GNU_INST_PATH_SUB_MAKE := C:/BrAutomation/AS49/AS/GnuInst/V4.1.2
export AS_GNU_BIN_PATH_SUB_MAKE := C:/BrAutomation/AS49/AS/GnuInst/V4.1.2/4.9/bin
export AS_INSTALL_PATH := C:/BrAutomation/AS49
export WIN32_AS_PATH := "C:\BrAutomation\AS49"
export WIN32_AS_BIN_PATH := "C:\BrAutomation\AS49\bin-en"
export WIN32_AS_PROJECT_PATH := "C:\Users\loup.sonneville\Documents\Github\SN2_SFL4Manitou_23\Loup SONNEVILLE\automation studio\SFL4_Manitou_230503"
export WIN32_AS_SYSTEM_PATH := "C:\BrAutomation\AS\System"
export WIN32_AS_VC_PATH := "C:\BrAutomation\AS49\AS\VC"
export WIN32_AS_TEMP_PATH := "C:\Users\loup.sonneville\Documents\Github\SN2_SFL4Manitou_23\Loup SONNEVILLE\automation studio\SFL4_Manitou_230503\Temp"
export WIN32_AS_BINARIES_PATH := "C:\Users\loup.sonneville\Documents\Github\SN2_SFL4Manitou_23\Loup SONNEVILLE\automation studio\SFL4_Manitou_230503\Binaries"
export WIN32_AS_GNU_INST_PATH := "C:\BrAutomation\AS49\AS\GnuInst\V4.1.2"
export WIN32_AS_GNU_BIN_PATH := "$(WIN32_AS_GNU_INST_PATH)\\bin" 
export WIN32_AS_INSTALL_PATH := "C:\BrAutomation\AS49"

.suffixes:

ProjectMakeFile:

	@'$(AS_BIN_PATH)/4.9/BR.AS.AnalyseProject.exe' '$(AS_PROJECT_PATH)/SFL4_Manitou_230503.apj' -t '$(AS_TEMP_PATH)' -c '$(AS_CONFIGURATION)' -o '$(AS_BINARIES_PATH)'   -sfas -buildMode 'BuildAndTransfer'   
