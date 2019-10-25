// WrapperLibrary.cpp : Defines the Wrapper implementation.
//

#include "stdafx.h"
#include "Wrapper.h"
#include "ts-logging/logger.h"
#include <exception>
#include <thread>
#include "ts-logging/loggerf.h"
#include "ts-logging/loggerc.h"
#include "ts-comms/systemclient.h"








////////////////////////////////////////////////////////////////////////////////
// Implementation of the IWrapper interface.

class WrapperImpl : public IWrapper
{
    int GetFPGAVer(int n);
    void Release();
};

int WrapperImpl::GetFPGAVer(int n)
{
    try {
        Logger::Instance()->Add(new LoggerF);
        Logger::Instance()->Log(Level::Info, "main", "Initialize Log");

        const char *srvEndpoint =   getenv("SRV_ENDPOINT");
        const char *clnEndpoint =   getenv("CLN_ENDPOINT");
        int timeout = 20;

        RouterClient::Instance().Start(clnEndpoint, srvEndpoint);
        while (timeout-- && !RouterClient::Instance().isConnected())
        {
            Logger::Instance()->Log(Level::Info, "main", "@@@Checking if server started: %i", timeout);
            std::this_thread::sleep_for(std::chrono::milliseconds(200));
        }
        
        SystemClient system(RouterClient::Instance());
        system.SetLevel(3);
        return (int) system.GetFPGAVersion();

    }
    catch(std::exception& e) {
        return -100;
    }
    return n * n;
}

void WrapperImpl::Release()
{
    delete this;
}

////////////////////////////////////////////////////////////////////////////////
// Factory function that creates instances if the Wrapper object.


#if !defined(_WIN64)
#pragma comment(linker, "/export:GetWrapper=_GetWrapper@0")
#endif  // _WIN64

WRAPPERAPI WRAPPERHANDLE APIENTRY GetWrapper()
{
    return new WrapperImpl;
}

////////////////////////////////////////////////////////////////////////////////
// Regular C++ class implementatin.

int CWrapper::GetFPGAVer(int n)
{
    try {
        Logger::Instance()->Add(new LoggerF);
        Logger::Instance()->Log(Level::Info, "main", "Initialize Log");

        const char *srvEndpoint =   getenv("SRV_ENDPOINT");
        const char *clnEndpoint =   getenv("CLN_ENDPOINT");
        int timeout = 20;
        RouterClient::Instance().Start(clnEndpoint, srvEndpoint);
        while (timeout-- && !RouterClient::Instance().isConnected())
        {
            Logger::Instance()->Log(Level::Info, "main", "@@@Checking if server started: %i", timeout);
            std::this_thread::sleep_for(std::chrono::milliseconds(200));
        }
        SystemClient system(RouterClient::Instance());
        system.SetLevel(3);
        return (int) system.GetFPGAVersion();
    }
    catch(std::exception& e) {
        return -100;
    }
    return n * n;
}

////////////////////////////////////////////////////////////////////////////////
// C interface implementation.
WRAPPERAPI INT APIENTRY WrapperGetFPGAVer(WRAPPERHANDLE handle, INT n)
{
    INT nResult = -1;

    if(handle)
    {
        nResult = handle->GetFPGAVer(n);
    }

    return nResult;
}

WRAPPERAPI VOID APIENTRY WrapperRelease(WRAPPERHANDLE handle)
{
    if(handle)
    {
        handle->Release();
    }
}

////////////////////////////////////////////////////////////////////////////////