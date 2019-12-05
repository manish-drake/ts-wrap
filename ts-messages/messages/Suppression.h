#ifndef __Suppression_h
#define __Suppression_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CSuppression:public TServerMessage
{
    const int mFormatVersion = 0;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x18;
    CSuppression(void)
    {
        setCmdID(mCmdID);
    }
    CSuppression(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
    }
    void setAtcrbsSuppresionOff(float value)
    {
        write("AtcrbsSuppresionOff",value);
    }

    float getAtcrbsSuppresionOff(void)

    {
        return getFloat("AtcrbsSuppresionOff");
    }

    bool isAtcrbsSuppresionOffValid(void)
    {
        return isValid("AtcrbsSuppresionOff");

    }

    void setAtcrbsSuppresionOn(float value)
    {
        write("AtcrbsSuppresionOn",value);
    }

    float getAtcrbsSuppresionOn(void)

    {
        return getFloat("AtcrbsSuppresionOn");
    }

    bool isAtcrbsSuppresionOnValid(void)
    {
        return isValid("AtcrbsSuppresionOn");

    }

    void setModeSSuppresionOff(float value)
    {
        write("ModeSSuppresionOff",value);
    }

    float getModeSSuppresionOff(void)

    {
        return getFloat("ModeSSuppresionOff");
    }

    bool isModeSSuppresionOffValid(void)
    {
        return isValid("ModeSSuppresionOff");

    }

    void setModeSSuppresionOn(float value)
    {
        write("ModeSSuppresionOn",value);
    }

    float getModeSSuppresionOn(void)

    {
        return getFloat("ModeSSuppresionOn");
    }

    bool isModeSSuppresionOnValid(void)
    {
        return isValid("ModeSSuppresionOn");

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