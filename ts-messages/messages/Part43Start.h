#ifndef __Part43Start_h
#define __Part43Start_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CPart43Start:public TServerMessage
{
    const int mFormatVersion = 2;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x1;
    CPart43Start(void)
    {
        setCmdID(mCmdID);
    }
    CPart43Start(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
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

    void setRun(bool value)
    {
        write("Run",value);
    }

    bool getRun(void)

    {
        return getBool("Run");
    }

    bool isRunValid(void)
    {
        return isValid("Run");

    }

    void setTestSelect(unsigned int value)
    {
        write("TestSelect",value);
    }

    unsigned int getTestSelect(void)

    {
        return getUInt("TestSelect");
    }

    bool isTestSelectValid(void)
    {
        return isValid("TestSelect");

    }

    void setCableLoss(float value)
    {
        write("CableLoss",value);
    }

    float getCableLoss(void)

    {
        return getFloat("CableLoss");
    }

    bool isCableLossValid(void)
    {
        return isValid("CableLoss");

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