#include <iostream>
#include "dllexp.h"

using namespace std;

int main()
{
    cdllexp dllexp;
    std::cout << dllexp.GetFPGA_Version(42) << std::endl;

    return 0;
}
