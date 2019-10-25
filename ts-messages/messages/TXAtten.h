#ifndef __TXAtten_h
#define __TXAtten_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CTXAtten:public TServerMessage
{
    const int mFormatVersion = 2;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x6;
    CTXAtten(void)
    {
        setCmdID(mCmdID);
    }
    CTXAtten(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
    }
    void setFine(unsigned int value)
    {
        write("Fine",value);
    }

    unsigned int getFine(void)

    {
        return getUInt("Fine");
    }

    bool isFineValid(void)
    {
        return isValid("Fine");

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