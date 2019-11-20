#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
#include <stdio.h>

#include "wrapper.h"

using namespace std;
#define UNUSED(x) (void)(x)


int main(int argc, char* argv[]) {
    UNUSED(argc);
    UNUSED(argv);
    CWrapper wrp;
    std::cout << wrp.GetFPGAVer(42) << std::endl;

    cin.ignore();
    return 0;
}