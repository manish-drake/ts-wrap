#ifndef __ADSB1090FindAll_h
#define __ADSB1090FindAll_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CADSB1090FindAll:public TServerMessage
{
    const int mFormatVersion = 2;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0xb;
    CADSB1090FindAll(void)
    {
        setCmdID(mCmdID);
    }
    CADSB1090FindAll(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
    }
    void setPort(unsigned int value)
    {
        write("Port",value);
    }

    unsigned int getPort(void)

    {
        return getUInt("Port");
    }

    bool isPortValid(void)
    {
        return isValid("Port");

    }

    void setEndpoint(unsigned int value)
    {
        write("Endpoint",value);
    }

    unsigned int getEndpoint(void)

    {
        return getUInt("Endpoint");
    }

    bool isEndpointValid(void)
    {
        return isValid("Endpoint");

    }

    void setMessage(std::string jsonstring)
    {

        TServerMessage::setMessage(jsonstring);

    }

    void set(Json::Value obj)
    {

        TServerMessage::set(obj);

    }

    std::string getMessage(void)
    {
        return TServerMessage::getMessage();
    }

    Json::Value get(void)
    {
        return TServerMessage::get();
    }

};




#endif