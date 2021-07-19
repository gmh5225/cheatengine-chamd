#ifndef CONSTANTS_H
#define CONSTANTS_H

// used in IOPLDispatcher.h
#define OP_CODE_READMEMORY                     0x0800
#define OP_CODE_WRITEMEMORY                    0x0801
#define OP_CODE_OPENPROCESS                    0x0802
#define OP_CODE_QUERY_VIRTUAL_MEMORY           0x0803
#define OP_CODE_TEST                           0x0804
#define OP_CODE_GETPEPROCESS                   0x0805
#define OP_CODE_READPHYSICALMEMORY             0x0806
#define OP_CODE_WRITEPHYSICALMEMORY            0x0807
#define OP_CODE_GETPHYSICALADDRESS             0x0808
#define OP_CODE_GETCR3                         0x080a
#define OP_CODE_SETCR3                         0x080b
#define OP_CODE_GETSDT                         0x080c
#define OP_CODE_INITIALIZE                     0x080d
#define OP_CODE_DONTPROTECTME                  0x080e
#define OP_CODE_GETIDT                         0x080f
#define OP_CODE_HOOKINTS                       0x0810
#define OP_CODE_DEBUGPROCESS                   0x0811
#define OP_CODE_STARTPROCESSWATCH              0x0813
#define OP_CODE_GETPROCESSEVENTS               0x0814
#define OP_CODE_GETTHREADEVENTS                0x0815
#define OP_CODE_GETVERSION                     0x0816
#define OP_CODE_GETCR4                         0x0817
#define OP_CODE_OPENTHREAD                     0x0818
#define OP_CODE_MAKEWRITABLE                   0x0819
#define OP_CODE_STOPDEBUGGING                  0x081b
#define OP_CODE_ALLOCATEMEM                    0x081f
#define OP_CODE_CREATEAPC                      0x0820
#define OP_CODE_GETPETHREAD                    0x0821
#define OP_CODE_SUSPENDTHREAD                  0x0822
#define OP_CODE_RESUMETHREAD                   0x0823
#define OP_CODE_SUSPENDPROCESS                 0x0824
#define OP_CODE_RESUMEPROCESS                  0x0825
#define OP_CODE_ALLOCATEMEM_NONPAGED           0x0826
#define OP_CODE_GETPROCADDRESS                 0x0827
#define OP_CODE_GETSDTADDRESS                  0x0829
#define OP_CODE_GETGDT                         0x082a
#define OP_CODE_SETCR4                         0x082b
#define OP_CODE_GETTR                          0x082c
#define OP_CODE_VMXCONFIG                      0x082d
#define OP_CODE_GETCR0                         0x082e
#define OP_CODE_USERDEFINEDINTERRUPTHOOK       0x082f
#define OP_CODE_SETGLOBALDEBUGSTATE            0x0830
#define OP_CODE_CONTINUEDEBUGEVENT             0x0831
#define OP_CODE_WAITFORDEBUGEVENT              0x0832
#define OP_CODE_GETDEBUGGERSTATE               0x0833
#define OP_CODE_SETDEBUGGERSTATE               0x0834
#define OP_CODE_GD_SETBREAKPOINT               0x0835
#define OP_CODE_TOUCHDEBUGREGISTER             0x0836
#define OP_CODE_LAUNCHDBVM                     0x083a
#define OP_CODE_UNHOOKALLINTERRUPTS            0x083b
#define OP_CODE_EXECUTE_CODE                   0x083c
#define OP_CODE_GETPROCESSNAMEADDRESS          0x083d
#define OP_CODE_SETKERNELSTEPABILITY           0x083e
#define OP_CODE_READMSR                        0x083f
#define OP_CODE_WRITEMSR                       0x0840
#define OP_CODE_SETSTORELBR                    0x0841
#define OP_CODE_ULTIMAP                        0x0842
#define OP_CODE_ULTIMAP_DISABLE                0x0843
#define OP_CODE_ULTIMAP_WAITFORDATA            0x0844
#define OP_CODE_ULTIMAP_CONTINUE               0x0845
#define OP_CODE_ULTIMAP_FLUSH                  0x0846
#define OP_CODE_GETMEMORYRANGES                0x0847
#define OP_CODE_STARTACCESMONITOR              0x0848
#define OP_CODE_ENUMACCESSEDMEMORY             0x0849
#define OP_CODE_GETACCESSEDMEMORYLIST          0x084a
#define OP_CODE_WRITESIGNOREWP                 0x084b
#define OP_CODE_FREE_NONPAGED                  0x084c
#define OP_CODE_MAP_MEMORY                     0x084d
#define OP_CODE_UNMAP_MEMORY                   0x084e
#define OP_CODE_ULTIMAP2                       0x084f
#define OP_CODE_DISABLEULTIMAP2                0x0850
#define OP_CODE_ULTIMAP2_WAITFORDATA           0x0851
#define OP_CODE_ULTIMAP2_CONTINUE              0x0852
#define OP_CODE_ULTIMAP2_FLUSH                 0x0853
#define OP_CODE_ULTIMAP2_PAUSE                 0x0854
#define OP_CODE_ULTIMAP2_RESUME                0x0855
#define OP_CODE_ULTIMAP2_LOCKFILE              0x0856
#define OP_CODE_ULTIMAP2_RELEASEFILE           0x0857
#define OP_CODE_ULTIMAP_PAUSE                  0x0858
#define OP_CODE_ULTIMAP_RESUME                 0x0859
#define OP_CODE_ULTIMAP2_GETTRACESIZE          0x085a
#define OP_CODE_ULTIMAP2_RESETTRACESIZE        0x085b
#define OP_CODE_ENABLE_DRM                     0x085c
#define OP_CODE_GET_PEB                        0x085d
#define OP_CODE_QUERYINFORMATIONPROCESS        0x085e
#define OP_CODE_NTPROTECTVIRTUALMEMORY         0x085f
#define OP_CODE_LOCK_MEMORY                    0x0860
#define OP_CODE_UNLOCK_MEMORY                  0x0861
#define OP_CODE_ALLOCATE_MEMORY_FOR_DBVM       0x0862

#endif