#include "pch.h"
#include "TestDLL.h"
#include <iostream>

void ShowTest()
{
  ShowInfo(L"ShowTest has been called");
}


HRESULT DllRegisterServer()
{
  ShowInfo(L"DllRegisterServer has been called");
  return S_OK;
}

HRESULT DllUnregisterServer()
{
  ShowInfo(L"DllUnregisterServer has been called");
  return S_OK;
}

HRESULT DllInstall(BOOL bInstall, PCWSTR)
{
  ShowInfo(bInstall
    ? L"DllInstall has been called (installed)"
    : L"DllInstall has been called (uninstalled)"
  );
  return S_OK;
}

void ShowInfo(LPCWSTR text)
{
  MessageBox(NULL, text, (LPCWSTR)L"TestDLL", MB_ICONINFORMATION | MB_OK);
}
