#ifndef __RXBandwidth_h
#define __RXBandwidth_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CRXBandwidth:public TServerMessage
{
    const int mFormatVersion = 2;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0xe;
    CRXBandwidth(void)
    {
        setCmdID(mCmdID);
    }
    CRXBandwidth(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
    }
    void setBandwidth(unsigned int value)
    {
        write("Bandwidth",value);
    }

    unsigned int getBandwidth(void)

    {
        return getUInt("Bandwidth");
    }

    bool isBandwidthValid(void)
    {
        return isValid("Bandwidth");

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