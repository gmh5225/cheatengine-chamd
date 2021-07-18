#ifndef IOPLDISPACTCHER_H
#define IOPLDISPACTCHER_H

#include "DBKfunc.h"

#define IOCTL_UNKNOWN_BASE                  FILE_DEVICE_UNKNOWN

#define IOCTL_CE_READMEMORY                     CTL_CODE(IOCTL_UNKNOWN_BASE, OP_CODE_READMEMORY                     , METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_CE_WRITEMEMORY                    CTL_CODE(IOCTL_UNKNOWN_BASE, OP_CODE_WRITEMEMORY                    , METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_CE_OPENPROCESS                    CTL_CODE(IOCTL_UNKNOWN_BASE, OP_CODE_OPENPROCESS                    , METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_CE_QUERY_VIRTUAL_MEMORY           CTL_CODE(IOCTL_UNKNOWN_BASE, OP_CODE_QUERY_VIRTUAL_MEMORY           , METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_CE_TEST                           CTL_CODE(IOCTL_UNKNOWN_BASE, OP_CODE_TEST                           , METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_CE_GETPEPROCESS                   CTL_CODE(IOCTL_UNKNOWN_BASE, OP_CODE_GETPEPROCESS                   , METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_CE_READPHYSICALMEMORY             CTL_CODE(IOCTL_UNKNOWN_BASE, OP_CODE_READPHYSICALMEMORY             , METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_CE_WRITEPHYSICALMEMORY            CTL_CODE(IOCTL_UNKNOWN_BASE, OP_CODE_WRITEPHYSICALMEMORY            , METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_CE_GETPHYSICALADDRESS             CTL_CODE(IOCTL_UNKNOWN_BASE, OP_CODE_GETPHYSICALADDRESS             , METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_CE_GETCR3                         CTL_CODE(IOCTL_UNKNOWN_BASE, OP_CODE_GETCR3                         , METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_CE_SETCR3                         CTL_CODE(IOCTL_UNKNOWN_BASE, OP_CODE_SETCR3                         , METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_CE_GETSDT                         CTL_CODE(IOCTL_UNKNOWN_BASE, OP_CODE_GETSDT                         , METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_CE_INITIALIZE                     CTL_CODE(IOCTL_UNKNOWN_BASE, OP_CODE_INITIALIZE                     , METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_CE_DONTPROTECTME                  CTL_CODE(IOCTL_UNKNOWN_BASE, OP_CODE_DONTPROTECTME                  , METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_CE_GETIDT                         CTL_CODE(IOCTL_UNKNOWN_BASE, OP_CODE_GETIDT                         , METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_CE_HOOKINTS                       CTL_CODE(IOCTL_UNKNOWN_BASE, OP_CODE_HOOKINTS                       , METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_CE_DEBUGPROCESS                   CTL_CODE(IOCTL_UNKNOWN_BASE, OP_CODE_DEBUGPROCESS                   , METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_CE_STARTPROCESSWATCH              CTL_CODE(IOCTL_UNKNOWN_BASE, OP_CODE_STARTPROCESSWATCH              , METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_CE_GETPROCESSEVENTS               CTL_CODE(IOCTL_UNKNOWN_BASE, OP_CODE_GETPROCESSEVENTS               , METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_CE_GETTHREADEVENTS                CTL_CODE(IOCTL_UNKNOWN_BASE, OP_CODE_GETTHREADEVENTS                , METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_CE_GETVERSION                     CTL_CODE(IOCTL_UNKNOWN_BASE, OP_CODE_GETVERSION                     , METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_CE_GETCR4                         CTL_CODE(IOCTL_UNKNOWN_BASE, OP_CODE_GETCR4                         , METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_CE_OPENTHREAD                     CTL_CODE(IOCTL_UNKNOWN_BASE, OP_CODE_OPENTHREAD                     , METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_CE_MAKEWRITABLE                   CTL_CODE(IOCTL_UNKNOWN_BASE, OP_CODE_MAKEWRITABLE                   , METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_CE_STOPDEBUGGING                  CTL_CODE(IOCTL_UNKNOWN_BASE, OP_CODE_STOPDEBUGGING                  , METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_CE_ALLOCATEMEM                    CTL_CODE(IOCTL_UNKNOWN_BASE, OP_CODE_ALLOCATEMEM                    , METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_CE_CREATEAPC                      CTL_CODE(IOCTL_UNKNOWN_BASE, OP_CODE_CREATEAPC                      , METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_CE_GETPETHREAD                    CTL_CODE(IOCTL_UNKNOWN_BASE, OP_CODE_GETPETHREAD                    , METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_CE_SUSPENDTHREAD                  CTL_CODE(IOCTL_UNKNOWN_BASE, OP_CODE_SUSPENDTHREAD                  , METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_CE_RESUMETHREAD                   CTL_CODE(IOCTL_UNKNOWN_BASE, OP_CODE_RESUMETHREAD                   , METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_CE_SUSPENDPROCESS                 CTL_CODE(IOCTL_UNKNOWN_BASE, OP_CODE_SUSPENDPROCESS                 , METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_CE_RESUMEPROCESS                  CTL_CODE(IOCTL_UNKNOWN_BASE, OP_CODE_RESUMEPROCESS                  , METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_CE_ALLOCATEMEM_NONPAGED           CTL_CODE(IOCTL_UNKNOWN_BASE, OP_CODE_ALLOCATEMEM_NONPAGED           , METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_CE_GETPROCADDRESS                 CTL_CODE(IOCTL_UNKNOWN_BASE, OP_CODE_GETPROCADDRESS                 , METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_CE_GETSDTADDRESS                  CTL_CODE(IOCTL_UNKNOWN_BASE, OP_CODE_GETSDTADDRESS                  , METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_CE_GETGDT                         CTL_CODE(IOCTL_UNKNOWN_BASE, OP_CODE_GETGDT                         , METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_CE_SETCR4                         CTL_CODE(IOCTL_UNKNOWN_BASE, OP_CODE_SETCR4                         , METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_CE_GETTR                          CTL_CODE(IOCTL_UNKNOWN_BASE, OP_CODE_GETTR                          , METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_CE_VMXCONFIG                      CTL_CODE(IOCTL_UNKNOWN_BASE, OP_CODE_VMXCONFIG                      , METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_CE_GETCR0                         CTL_CODE(IOCTL_UNKNOWN_BASE, OP_CODE_GETCR0                         , METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_CE_USERDEFINEDINTERRUPTHOOK       CTL_CODE(IOCTL_UNKNOWN_BASE, OP_CODE_USERDEFINEDINTERRUPTHOOK       , METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_CE_SETGLOBALDEBUGSTATE            CTL_CODE(IOCTL_UNKNOWN_BASE, OP_CODE_SETGLOBALDEBUGSTATE            , METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_CE_CONTINUEDEBUGEVENT             CTL_CODE(IOCTL_UNKNOWN_BASE, OP_CODE_CONTINUEDEBUGEVENT             , METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_CE_WAITFORDEBUGEVENT              CTL_CODE(IOCTL_UNKNOWN_BASE, OP_CODE_WAITFORDEBUGEVENT              , METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_CE_GETDEBUGGERSTATE               CTL_CODE(IOCTL_UNKNOWN_BASE, OP_CODE_GETDEBUGGERSTATE               , METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_CE_SETDEBUGGERSTATE               CTL_CODE(IOCTL_UNKNOWN_BASE, OP_CODE_SETDEBUGGERSTATE               , METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_CE_GD_SETBREAKPOINT               CTL_CODE(IOCTL_UNKNOWN_BASE, OP_CODE_GD_SETBREAKPOINT               , METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_CE_TOUCHDEBUGREGISTER             CTL_CODE(IOCTL_UNKNOWN_BASE, OP_CODE_TOUCHDEBUGREGISTER             , METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_CE_LAUNCHDBVM                     CTL_CODE(IOCTL_UNKNOWN_BASE, OP_CODE_LAUNCHDBVM                     , METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_CE_UNHOOKALLINTERRUPTS            CTL_CODE(IOCTL_UNKNOWN_BASE, OP_CODE_UNHOOKALLINTERRUPTS            , METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_CE_EXECUTE_CODE                   CTL_CODE(IOCTL_UNKNOWN_BASE, OP_CODE_EXECUTE_CODE                   , METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_CE_GETPROCESSNAMEADDRESS          CTL_CODE(IOCTL_UNKNOWN_BASE, OP_CODE_GETPROCESSNAMEADDRESS          , METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_CE_SETKERNELSTEPABILITY           CTL_CODE(IOCTL_UNKNOWN_BASE, OP_CODE_SETKERNELSTEPABILITY           , METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_CE_READMSR                        CTL_CODE(IOCTL_UNKNOWN_BASE, OP_CODE_READMSR                        , METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_CE_WRITEMSR                       CTL_CODE(IOCTL_UNKNOWN_BASE, OP_CODE_WRITEMSR                       , METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_CE_SETSTORELBR                    CTL_CODE(IOCTL_UNKNOWN_BASE, OP_CODE_SETSTORELBR                    , METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_CE_ULTIMAP                        CTL_CODE(IOCTL_UNKNOWN_BASE, OP_CODE_ULTIMAP                        , METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_CE_ULTIMAP_DISABLE                CTL_CODE(IOCTL_UNKNOWN_BASE, OP_CODE_ULTIMAP_DISABLE                , METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_CE_ULTIMAP_WAITFORDATA            CTL_CODE(IOCTL_UNKNOWN_BASE, OP_CODE_ULTIMAP_WAITFORDATA            , METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_CE_ULTIMAP_CONTINUE               CTL_CODE(IOCTL_UNKNOWN_BASE, OP_CODE_ULTIMAP_CONTINUE               , METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_CE_ULTIMAP_FLUSH                  CTL_CODE(IOCTL_UNKNOWN_BASE, OP_CODE_ULTIMAP_FLUSH                  , METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_CE_GETMEMORYRANGES                CTL_CODE(IOCTL_UNKNOWN_BASE, OP_CODE_GETMEMORYRANGES                , METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_CE_STARTACCESMONITOR              CTL_CODE(IOCTL_UNKNOWN_BASE, OP_CODE_STARTACCESMONITOR              , METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_CE_ENUMACCESSEDMEMORY             CTL_CODE(IOCTL_UNKNOWN_BASE, OP_CODE_ENUMACCESSEDMEMORY             , METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_CE_GETACCESSEDMEMORYLIST          CTL_CODE(IOCTL_UNKNOWN_BASE, OP_CODE_GETACCESSEDMEMORYLIST          , METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_CE_WRITESIGNOREWP                 CTL_CODE(IOCTL_UNKNOWN_BASE, OP_CODE_WRITESIGNOREWP                 , METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_CE_FREE_NONPAGED                  CTL_CODE(IOCTL_UNKNOWN_BASE, OP_CODE_FREE_NONPAGED                  , METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_CE_MAP_MEMORY                     CTL_CODE(IOCTL_UNKNOWN_BASE, OP_CODE_MAP_MEMORY                     , METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_CE_UNMAP_MEMORY                   CTL_CODE(IOCTL_UNKNOWN_BASE, OP_CODE_UNMAP_MEMORY                   , METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_CE_ULTIMAP2                       CTL_CODE(IOCTL_UNKNOWN_BASE, OP_CODE_ULTIMAP2                       , METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_CE_DISABLEULTIMAP2                CTL_CODE(IOCTL_UNKNOWN_BASE, OP_CODE_DISABLEULTIMAP2                , METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_CE_ULTIMAP2_WAITFORDATA           CTL_CODE(IOCTL_UNKNOWN_BASE, OP_CODE_ULTIMAP2_WAITFORDATA           , METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_CE_ULTIMAP2_CONTINUE              CTL_CODE(IOCTL_UNKNOWN_BASE, OP_CODE_ULTIMAP2_CONTINUE              , METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_CE_ULTIMAP2_FLUSH                 CTL_CODE(IOCTL_UNKNOWN_BASE, OP_CODE_ULTIMAP2_FLUSH                 , METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_CE_ULTIMAP2_PAUSE                 CTL_CODE(IOCTL_UNKNOWN_BASE, OP_CODE_ULTIMAP2_PAUSE                 , METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_CE_ULTIMAP2_RESUME                CTL_CODE(IOCTL_UNKNOWN_BASE, OP_CODE_ULTIMAP2_RESUME                , METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_CE_ULTIMAP2_LOCKFILE              CTL_CODE(IOCTL_UNKNOWN_BASE, OP_CODE_ULTIMAP2_LOCKFILE              , METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_CE_ULTIMAP2_RELEASEFILE           CTL_CODE(IOCTL_UNKNOWN_BASE, OP_CODE_ULTIMAP2_RELEASEFILE           , METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_CE_ULTIMAP_PAUSE                  CTL_CODE(IOCTL_UNKNOWN_BASE, OP_CODE_ULTIMAP_PAUSE                  , METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_CE_ULTIMAP_RESUME                 CTL_CODE(IOCTL_UNKNOWN_BASE, OP_CODE_ULTIMAP_RESUME                 , METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_CE_ULTIMAP2_GETTRACESIZE          CTL_CODE(IOCTL_UNKNOWN_BASE, OP_CODE_ULTIMAP2_GETTRACESIZE          , METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_CE_ULTIMAP2_RESETTRACESIZE        CTL_CODE(IOCTL_UNKNOWN_BASE, OP_CODE_ULTIMAP2_RESETTRACESIZE        , METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_CE_ENABLE_DRM                     CTL_CODE(IOCTL_UNKNOWN_BASE, OP_CODE_ENABLE_DRM                     , METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_CE_GET_PEB                        CTL_CODE(IOCTL_UNKNOWN_BASE, OP_CODE_GET_PEB                        , METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_CE_QUERYINFORMATIONPROCESS        CTL_CODE(IOCTL_UNKNOWN_BASE, OP_CODE_QUERYINFORMATIONPROCESS        , METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_CE_NTPROTECTVIRTUALMEMORY         CTL_CODE(IOCTL_UNKNOWN_BASE, OP_CODE_NTPROTECTVIRTUALMEMORY         , METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_CE_LOCK_MEMORY                    CTL_CODE(IOCTL_UNKNOWN_BASE, OP_CODE_LOCK_MEMORY                    , METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_CE_UNLOCK_MEMORY                  CTL_CODE(IOCTL_UNKNOWN_BASE, OP_CODE_UNLOCK_MEMORY                  , METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_CE_ALLOCATE_MEMORY_FOR_DBVM       CTL_CODE(IOCTL_UNKNOWN_BASE, OP_CODE_ALLOCATE_MEMORY_FOR_DBVM       , METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)

extern PVOID DRMHandle;

#define SYSTEMSERVICE(_function)        KeServiceDescriptorTable->ServiceTable[ *(PULONG)((PUCHAR)_function+1)]
#define SYSTEMSERVICELINK(_function)    KeServiceDescriptorTable->ServiceTable[*((PUCHAR)(*(PULONG)*((PULONG)((PUCHAR)_function+2)))+1)]


NTSTATUS DispatchIoctl(IN PDEVICE_OBJECT DeviceObject, IN PIRP Irp);
BOOL DispatchIoctlDBVM(IN PDEVICE_OBJECT DeviceObject, ULONG IoControlCode, PVOID lpInBuffer, DWORD nInBufferSize, PVOID lpOutBuffer, DWORD nOutBufferSize, PDWORD lpBytesReturned);



#endif
