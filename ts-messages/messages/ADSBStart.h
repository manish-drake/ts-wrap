#ifndef __ADSBStart_h
#define __ADSBStart_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CADSBStart:public TServerMessage
{
    const int mFormatVersion = 2;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x1;
    CADSBStart(void)
    {
        setCmdID(mCmdID);
    }
    CADSBStart(Json::Value obj):TServerMessage(obj)
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

    void setAddress(unsigned int value)
    {
        write("Address",value);
    }

    unsigned int getAddress(void)

    {
        return getUInt("Address");
    }

    bool isAddressValid(void)
    {
        return isValid("Address");

    }

    void setMode(unsigned int value)
    {
        write("Mode",value);
    }

    unsigned int getMode(void)

    {
        return getUInt("Mode");
    }

    bool isModeValid(void)
    {
        return isValid("Mode");

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