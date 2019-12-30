#include "dllexp.h"
#include "json.h"
#include <iostream>
#include <fstream>
#include "client.h"


__declspec(dllexport) unsigned int __stdcall GetFPGAVersion(int var)
{
    unsigned int version = 0;
    version = Client::Instance()->GetFPGAVersion();
    return version;
}
