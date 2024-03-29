#include <crtdbg.h>
#include <stdio.h>
#include "main.h"
#include "UI/ui.h"
#include "Tests/tests.h"

int main() {
    testAll();
    setbuf(stdout, NULL);
    start();
    _CrtDumpMemoryLeaks();
    return 0;
}
