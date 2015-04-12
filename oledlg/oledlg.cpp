#include "stdafx.h"

BOOL APIENTRY DllMain(HMODULE, DWORD, LPVOID)
{
	return TRUE;
}

EXTERN_C __declspec(dllexport) UINT OleUIBusyW(void *)
{
	return 1;
}
