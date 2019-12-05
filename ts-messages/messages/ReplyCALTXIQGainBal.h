#ifndef __ReplyCALTXIQGainBal_h
#define __ReplyCALTXIQGainBal_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CReplyCALTXIQGainBal:public TServerMessage
{
    const int mFormatVersion = 2;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x22;
    CReplyCALTXIQGainBal(void)
    {
        setCmdID(mCmdID);
    }
    CReplyCALTXIQGainBal(Json::Value obj):TServerMessage(obj)
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

    void setIBal(float value)
    {
        write("IBal",value);
    }

    float getIBal(void)

    {
        return getFloat("IBal");
    }

    bool isIBalValid(void)
    {
        return isValid("IBal");

    }

    void setQBal(float value)
    {
        write("QBal",value);
    }

    float getQBal(void)

    {
        return getFloat("QBal");
    }

    bool isQBalValid(void)
    {
        return isValid("QBal");

    }

    void setDeltaPWR(float value)
    {
        write("DeltaPWR",value);
    }

    float getDeltaPWR(void)

    {
        return getFloat("DeltaPWR");
    }

    bool isDeltaPWRValid(void)
    {
        return isValid("DeltaPWR");

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