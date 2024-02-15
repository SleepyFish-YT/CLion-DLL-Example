#include <windows.h>
#include "me.sleepy.example/Example.h"

void Init(HMODULE mod) {
    Example::Inject();

    while (!GetAsyncKeyState(VK_BACK)) {
    }

    FreeLibrary(mod);
}

BOOL WINAPI DllMain(HINSTANCE hModule, DWORD dwReason, LPVOID lpReserved) {

    if (dwReason == DLL_PROCESS_ATTACH) {
        DisableThreadLibraryCalls(hModule);

        const HANDLE hThread = CreateThread (
                0, 0, (LPTHREAD_START_ROUTINE) (Init), hModule, 0, 0
        );

        if (hThread)
            CloseHandle(hThread);
    }

    return TRUE;

}