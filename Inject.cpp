#include <windows.h>
#include "me/sleepy/example/Example.h"

// Function called when injected
void Init(HMODULE mod) {
    Example::Inject();

    // Change this to a boolean so you can detach later with a button in your ImGui
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