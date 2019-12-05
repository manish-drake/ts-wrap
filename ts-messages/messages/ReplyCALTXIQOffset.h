#ifndef __ReplyCALTXIQOffset_h
#define __ReplyCALTXIQOffset_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CReplyCALTXIQOffset:public TServerMessage
{
    const int mFormatVersion = 2;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x21;
    CReplyCALTXIQOffset(void)
    {
        setCmdID(mCmdID);
    }
    CReplyCALTXIQOffset(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
    }
    void setFreq(float value)
    {
        write("Freq",value);
    }

    float getFreq(void)

    {
        return getFloat("Freq");
    }

    bool isFreqValid(void)
    {
        return isValid("Freq");

    }

    void setSuppression(float value)
    {
        write("Suppression",value);
    }

    float getSuppression(void)

    {
        return getFloat("Suppression");
    }

    bool isSuppressionValid(void)
    {
        return isValid("Suppression");

    }

    void setIOffset(unsigned int value)
    {
        write("IOffset",value);
    }

    unsigned int getIOffset(void)

    {
        return getUInt("IOffset");
    }

    bool isIOffsetValid(void)
    {
        return isValid("IOffset");

    }

    void setQOffset(unsigned int value)
    {
        write("QOffset",value);
    }

    unsigned int getQOffset(void)

    {
        return getUInt("QOffset");
    }

    bool isQOffsetValid(void)
    {
        return isValid("QOffset");

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