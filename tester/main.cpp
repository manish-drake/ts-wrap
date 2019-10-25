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
    enum {
        COM_like_usage,
        Use_smart_pointers_from_the_STD,
        Regular_CPP_class,
        Classic_C_language_usage
    } method;


    printf( "Testing ts-wrap client..\n" );
    method = Classic_C_language_usage;
    switch (method)
    {
    case COM_like_usage:
    {
        /**************************************************************************/

        std::cout << "1. COM-like usage." << std::endl;
        IWrapper* pWrapper = ::GetWrapper();

        if(pWrapper)
        {
            auto otp = pWrapper->GetFPGAVer(42);
            std::cout << otp << std::endl;
            pWrapper->Release();
        }

        /**************************************************************************/
    }
    break;
    case Use_smart_pointers_from_the_STD:
    {
        /**************************************************************************/

        std::cout << "1a. Use smart pointers from the Standard C++ library." << std::endl;
        typedef std::shared_ptr<IWrapper> IWrapperPtr;

        IWrapperPtr ptrWrapper(::GetWrapper(), std::mem_fn(&IWrapper::Release));

        if(ptrWrapper)
        {
            std::cout << ptrWrapper->GetFPGAVer(42)  << std::endl;
        }

        /**************************************************************************/
    }
    break;
    case Regular_CPP_class:
    {
        /**************************************************************************/

        std::cout << "2. Regular C++ class." << std::endl;
        // The class must be exported.
        CWrapper wrapper;
        std::cout << wrapper.GetFPGAVer(42)  << std::endl;

        /**************************************************************************/
    }
    break;
    case Classic_C_language_usage:
    {
        /**************************************************************************/

        std::cout << "3. Classic C language usage." << std::endl;
        WRAPPERHANDLE hWrapper = GetWrapper();

        if(hWrapper)
        {
            std::cout << WrapperGetFPGAVer(hWrapper, 42) << std::endl;
            WrapperRelease(hWrapper);
            hWrapper = NULL;
        }

        /**************************************************************************/
    }
    break;

    default:
        break;
    }

    cin.ignore();
    return 0;
}



