#ifndef __SetAuxDACIQ_h
#define __SetAuxDACIQ_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CSetAuxDACIQ:public TServerMessage
{
    const int mFormatVersion = 2;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x14;
    CSetAuxDACIQ(void)
    {
        setCmdID(mCmdID);
    }
    CSetAuxDACIQ(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
    }
    void setIValue(unsigned int value)
    {
        write("IValue",value);
    }

    unsigned int getIValue(void)

    {
        return getUInt("IValue");
    }

    bool isIValueValid(void)
    {
        return isValid("IValue");

    }

    void setQValue(unsigned int value)
    {
        write("QValue",value);
    }

    unsigned int getQValue(void)

    {
        return getUInt("QValue");
    }

    bool isQValueValid(void)
    {
        return isValid("QValue");

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