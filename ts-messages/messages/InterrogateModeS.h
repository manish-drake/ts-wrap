#ifndef __InterrogateModeS_h
#define __InterrogateModeS_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CInterrogateModeS:public TServerMessage
{
    const int mFormatVersion = 2;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x9;
    CInterrogateModeS(void)
    {
        setCmdID(mCmdID);
    }
    CInterrogateModeS(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
    }
    void setBDS(unsigned int value)
    {
        write("BDS",value);
    }

    unsigned int getBDS(void)

    {
        return getUInt("BDS");
    }

    bool isBDSValid(void)
    {
        return isValid("BDS");

    }

    void setUF(unsigned int value)
    {
        write("UF",value);
    }

    unsigned int getUF(void)

    {
        return getUInt("UF");
    }

    bool isUFValid(void)
    {
        return isValid("UF");

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