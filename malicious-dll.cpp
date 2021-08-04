#include "pch.h"

#pragma comment(linker, "/export:exportedFunction1=legit1.exportedFunction1")
#pragma comment(linker, "/export:exportedFunction2=legit1.exportedFunction2")
#pragma comment(linker, "/export:exportedFunction3=legit1.exportedFunction3")

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
    {
        MessageBoxA(NULL, "Hi from malicious dll", "Hi from malicious dll", 0);
    }
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}
