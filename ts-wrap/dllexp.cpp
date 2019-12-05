#include "dllexp.h"
#include "json.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include "loggerf.h"
#include "loggerc.h"
#include <thread>
#include "routerclient.h"
#include "systemclient.h"


__declspec(dllexport) int __stdcall GetFPGAVersion(int var)
{
    Logger::Instance()->Add(new LoggerF);



    Json::Value val;
    Json::Reader reader;
    std::stringstream ss;

    ss << "{'var'=" << var << "}" << std::endl;
    reader.parse(ss.str(), val, false);
    int timeout = 20;
    unsigned int version =0;
    RouterClient::Instance().Start("tcp://192.168.20.100:8283", "tcp://192.168.20.35:6000");
    while (timeout-- && !RouterClient::Instance().isConnected())
    {
        Logger::Instance()->Log(Level::Info, "main", "@@@Checking if server started: %i", timeout);
        std::this_thread::sleep_for(std::chrono::milliseconds(200));
    }

    SystemClient client(RouterClient::Instance());
    auto fpgaVer = client.GetFPGAVersionAsync();
    version = fpgaVer.get();


    Logger::Instance()->Log(Level::Info, "main", "@@@the square is: %i", 8);
    std::this_thread::sleep_for(std::chrono::milliseconds(2000));
    RouterClient::Instance().Close();
    return version;
}
