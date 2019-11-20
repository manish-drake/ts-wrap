// Dll2.cpp : Defines the exported functions for the DLL application.
#include "stdafx.h"
#include "wrapper.h"

#include "ts-logging/logger.h"
#include <exception>
#include <thread>
#include "ts-logging/loggerf.h"
#include "ts-logging/loggerc.h"
// #include "ts-comms/systemclient.h"




__declspec(dllexport) int __stdcall GetSphereSAandVol(double radius, double* sa, double* vol)
//Calculate the surface area and volume of a sphere with given radius
{
	if (radius < 0)
		return false; //return false (0) if radius is negative
	*sa = GetSA(radius);
	*vol = GetVol(radius);
	return true;
}

__declspec(dllexport) double __stdcall GetSA(double radius)
{
	try {
        Logger::Instance()->Add(new LoggerF);
        Logger::Instance()->Log(Level::Info, "main", "Initialize Log");

        // const char *srvEndpoint =   getenv("SRV_ENDPOINT");
        // const char *clnEndpoint =   getenv("CLN_ENDPOINT");
        // int timeout = 20;

        // RouterClient::Instance().Start(clnEndpoint, srvEndpoint);
        // while (timeout-- && !RouterClient::Instance().isConnected())
        // {
        //     Logger::Instance()->Log(Level::Info, "main", "@@@Checking if server started: %i", timeout);
        //     std::this_thread::sleep_for(std::chrono::milliseconds(200));
        // }
        
        // SystemClient system(RouterClient::Instance());
        // system.SetLevel(3);
        // return (int) system.GetFPGAVersion();
        return 6;

    }
    catch(std::exception& e) {
        return -100;
    }
    return radius * 5;
}

__declspec(dllexport) double __stdcall GetVol(double radius)
{
	return 4.0 / 3.0 * M_PI * pow(radius, 3.0);
}
__declspec(dllexport) int __stdcall GetFPGAVersion(int var)
{
	try {
        // Logger::Instance()->Add(new LoggerF);
        // Logger::Instance()->Log(Level::Info, "main", "Initialize Log");

        // const char *srvEndpoint =   getenv("SRV_ENDPOINT");
        // const char *clnEndpoint =   getenv("CLN_ENDPOINT");
        // int timeout = 20;

        // RouterClient::Instance().Start(clnEndpoint, srvEndpoint);
        // while (timeout-- && !RouterClient::Instance().isConnected())
        // {
        //     Logger::Instance()->Log(Level::Info, "main", "@@@Checking if server started: %i", timeout);
        //     std::this_thread::sleep_for(std::chrono::milliseconds(200));
        // }
        
        // SystemClient system(RouterClient::Instance());
        // system.SetLevel(3);
        // return (int) system.GetFPGAVersion();
        return var + 100;

    }
    catch(std::exception& e) {
        return -100;
    }
    return  5;
}