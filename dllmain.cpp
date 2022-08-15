#include "pch.h"
#include "TestDLL.h"

bool dllStarted = false;

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved)
{
  switch (ul_reason_for_call)
  {
    case DLL_PROCESS_ATTACH:
    case DLL_THREAD_ATTACH:
      if (!dllStarted)
      {
        dllStarted = true;
        ShowInfo(L"Library has been loaded");
      }
      break;
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
      ShowInfo(L"Library has been unloaded");
      break;
  }
  return TRUE;
}
