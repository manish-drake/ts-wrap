#ifndef __UATStaticSeq_h
#define __UATStaticSeq_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CUATStaticSeq:public TServerMessage
{
    const int mFormatVersion = 2;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x6;
    CUATStaticSeq(void)
    {
        setCmdID(mCmdID);
    }
    CUATStaticSeq(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
    }
    void setStaticSeq(unsigned int value)
    {
        write("StaticSeq",value);
    }

    unsigned int getStaticSeq(void)

    {
        return getUInt("StaticSeq");
    }

    bool isStaticSeqValid(void)
    {
        return isValid("StaticSeq");

    }

    void setPayloadType(unsigned int value)
    {
        write("PayloadType",value);
    }

    unsigned int getPayloadType(void)

    {
        return getUInt("PayloadType");
    }

    bool isPayloadTypeValid(void)
    {
        return isValid("PayloadType");

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