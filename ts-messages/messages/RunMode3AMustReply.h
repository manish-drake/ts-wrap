#ifndef __RunMode3AMustReply_h
#define __RunMode3AMustReply_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CRunMode3AMustReply:public TServerMessage
{
    const int mFormatVersion = 2;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x13;
    CRunMode3AMustReply(void)
    {
        setCmdID(mCmdID);
    }
    CRunMode3AMustReply(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
    }
    void setInterNum(unsigned int value)
    {
        write("InterNum",value);
    }

    unsigned int getInterNum(void)

    {
        return getUInt("InterNum");
    }

    bool isInterNumValid(void)
    {
        return isValid("InterNum");

    }

    void setInterRate(unsigned int value)
    {
        write("InterRate",value);
    }

    unsigned int getInterRate(void)

    {
        return getUInt("InterRate");
    }

    bool isInterRateValid(void)
    {
        return isValid("InterRate");

    }

    void setP2Amplitude(unsigned int value)
    {
        write("P2Amplitude",value);
    }

    unsigned int getP2Amplitude(void)

    {
        return getUInt("P2Amplitude");
    }

    bool isP2AmplitudeValid(void)
    {
        return isValid("P2Amplitude");

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