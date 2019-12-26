#include <iostream>
#include "dllexp.h"

using namespace std;

int main()
{
    cdllexp dllexp;
    std::cout << "Hello world" << std::endl;//dllexp.GetFPGA_Version(42) << std::endl;
    std::cout << "Hello world" << dllexp.GetFPGA_Version(42) << std::endl;

    return 0;
}
