#ifndef __UATMSO_h
#define __UATMSO_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CUATMSO:public TServerMessage
{
    const int mFormatVersion = 2;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x5;
    CUATMSO(void)
    {
        setCmdID(mCmdID);
    }
    CUATMSO(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
    }
    void setStartMSO(unsigned int value)
    {
        write("StartMSO",value);
    }

    unsigned int getStartMSO(void)

    {
        return getUInt("StartMSO");
    }

    bool isStartMSOValid(void)
    {
        return isValid("StartMSO");

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