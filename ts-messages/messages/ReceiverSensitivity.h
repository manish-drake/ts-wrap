#ifndef __ReceiverSensitivity_h
#define __ReceiverSensitivity_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CReceiverSensitivity:public TServerMessage
{
    const int mFormatVersion = 0;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x17;
    CReceiverSensitivity(void)
    {
        setCmdID(mCmdID);
    }
    CReceiverSensitivity(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
    }
    void setModeAMtl(float value)
    {
        write("ModeAMtl",value);
    }

    float getModeAMtl(void)

    {
        return getFloat("ModeAMtl");
    }

    bool isModeAMtlValid(void)
    {
        return isValid("ModeAMtl");

    }

    void setModeCMtl(float value)
    {
        write("ModeCMtl",value);
    }

    float getModeCMtl(void)

    {
        return getFloat("ModeCMtl");
    }

    bool isModeCMtlValid(void)
    {
        return isValid("ModeCMtl");

    }

    void setModeSMtl(float value)
    {
        write("ModeSMtl",value);
    }

    float getModeSMtl(void)

    {
        return getFloat("ModeSMtl");
    }

    bool isModeSMtlValid(void)
    {
        return isValid("ModeSMtl");

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