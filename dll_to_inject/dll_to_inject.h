#pragma once
#include <windows.h>

extern "C" __declspec(dllexport) 
DWORD WINAPI MessageBoxThread(LPVOID lpParam);

extern "C" __declspec(dllexport)
BOOL APIENTRY DllMain(HMODULE hModule,
	DWORD  ul_reason_for_call,
	LPVOID lpReserved
);