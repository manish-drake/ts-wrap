#include "client.h"
#include "loggerf.h"
#include "loggerc.h"
#include <thread>
#include <sstream>
#include "routerclient.h"
#include "systemclient.h"

Client* Client::s_instance = nullptr;

Client::Client()
{

}

unsigned int Client::GetFPGAVersion()
{
    Logger::Instance()->Add(new LoggerF);

    Json::Value val;
    Json::Reader reader;
    std::stringstream ss;

    ss << "{'var'=" << 47 << "}" << std::endl;
    reader.parse(ss.str(), val, false);
    int timeout = 20;
    RouterClient::Instance().Start("tcp://192.168.20.181:8283"/*client*/, "tcp://192.168.20.43:6000"/*server*/);
    while (timeout-- && !RouterClient::Instance().isConnected())
    {
        Logger::Instance()->Log(Level::Info, "main", "@@@Checking if server started: %i", timeout);
        std::this_thread::sleep_for(std::chrono::milliseconds(200));
    }

    SystemClient client(RouterClient::Instance());
    auto fpgaVer = client.GetFPGAVersionAsync();
    UINT version = fpgaVer.get();


    Logger::Instance()->Log(Level::Info, "main", "@@@the square is: %i", 8);
    //    std::this_thread::sleep_for(std::chrono::milliseconds(2000));
    RouterClient::Instance().Close();
    return version;
}

Client::~Client()
{
    delete s_instance;
}
