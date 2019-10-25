#ifndef __RXAtten_h
#define __RXAtten_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CRXAtten:public TServerMessage
{
    const int mFormatVersion = 2;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x7;
    CRXAtten(void)
    {
        setCmdID(mCmdID);
    }
    CRXAtten(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
    }
    void setCoarse(unsigned int value)
    {
        write("Coarse",value);
    }

    unsigned int getCoarse(void)

    {
        return getUInt("Coarse");
    }

    bool isCoarseValid(void)
    {
        return isValid("Coarse");

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