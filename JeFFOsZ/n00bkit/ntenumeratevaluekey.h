#include <winsock2.h>
#include <windows.h>
#include <time.h>
#include "ntdll.h"

typedef NTSTATUS (WINAPI* NTENUMERATEVALUEKEY)(HANDLE,ULONG,KEY_VALUE_INFORMATION_CLASS,PVOID,ULONG,PULONG);

PVOID getKeyValueEntryName(PVOID,KEY_VALUE_INFORMATION_CLASS);
ULONG getKeyValueEntryNameLength(PVOID,KEY_INFORMATION_CLASS);

#ifndef __NTENUMERATEVALUEKEY__
#define __NTENUMERATEVALUEKEY__

NTENUMERATEVALUEKEY OldNtEnumerateValueKey;
NTSTATUS WINAPI NewNtEnumerateValueKey(HANDLE,ULONG,KEY_VALUE_INFORMATION_CLASS,PVOID,ULONG,PULONG);

#endif 