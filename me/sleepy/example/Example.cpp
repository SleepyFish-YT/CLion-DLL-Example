#include "Example.h"

#include <iostream>
#include "Windows.h"

FILE* file;
void Example::Inject() {

    AllocConsole();
    SetConsoleTitle("Example by SleepyFish");
    freopen_s(&file, "CONOUT$", "w", stdout);

    printf(" Your client name or what ever ? \n");

}