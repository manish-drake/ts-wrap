#ifndef __RadioReplyFrequency_h
#define __RadioReplyFrequency_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CRadioReplyFrequency:public TServerMessage
{
    const int mFormatVersion = 0;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x15;
    CRadioReplyFrequency(void)
    {
        setCmdID(mCmdID);
    }
    CRadioReplyFrequency(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
    }
    void setResult(unsigned int value)
    {
        write("Result",value);
    }

    unsigned int getResult(void)

    {
        return getUInt("Result");
    }

    bool isResultValid(void)
    {
        return isValid("Result");

    }

    void setModeAReply(float value)
    {
        write("ModeAReply",value);
    }

    float getModeAReply(void)

    {
        return getFloat("ModeAReply");
    }

    bool isModeAReplyValid(void)
    {
        return isValid("ModeAReply");

    }

    void setModeCReply(float value)
    {
        write("ModeCReply",value);
    }

    float getModeCReply(void)

    {
        return getFloat("ModeCReply");
    }

    bool isModeCReplyValid(void)
    {
        return isValid("ModeCReply");

    }

    void setModeSReply(float value)
    {
        write("ModeSReply",value);
    }

    float getModeSReply(void)

    {
        return getFloat("ModeSReply");
    }

    bool isModeSReplyValid(void)
    {
        return isValid("ModeSReply");

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