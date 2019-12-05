#ifndef __RfPeakOutputPower_h
#define __RfPeakOutputPower_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CRfPeakOutputPower:public TServerMessage
{
    const int mFormatVersion = 0;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x16;
    CRfPeakOutputPower(void)
    {
        setCmdID(mCmdID);
    }
    CRfPeakOutputPower(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
    }
    void setModeA(float value)
    {
        write("ModeA",value);
    }

    float getModeA(void)

    {
        return getFloat("ModeA");
    }

    bool isModeAValid(void)
    {
        return isValid("ModeA");

    }

    void setModeC(float value)
    {
        write("ModeC",value);
    }

    float getModeC(void)

    {
        return getFloat("ModeC");
    }

    bool isModeCValid(void)
    {
        return isValid("ModeC");

    }

    void setModeS(float value)
    {
        write("ModeS",value);
    }

    float getModeS(void)

    {
        return getFloat("ModeS");
    }

    bool isModeSValid(void)
    {
        return isValid("ModeS");

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