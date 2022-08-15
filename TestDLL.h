#pragma once

#ifdef TESTDLL_EXPORTS
#define TESTDLL_API __declspec(dllexport)
#else
#define TESTDLL_API __declspec(dllimport)
#endif

extern "C" TESTDLL_API void ShowTest();

extern "C" TESTDLL_API HRESULT DllRegisterServer();
extern "C" TESTDLL_API HRESULT DllUnregisterServer();
extern "C" TESTDLL_API HRESULT DllInstall(BOOL, PCWSTR);

void ShowInfo(LPCWSTR);
