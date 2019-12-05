#ifndef __SetDACIQOffset_h
#define __SetDACIQOffset_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CSetDACIQOffset:public TServerMessage
{
    const int mFormatVersion = 2;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x13;
    CSetDACIQOffset(void)
    {
        setCmdID(mCmdID);
    }
    CSetDACIQOffset(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
    }
    void setIOffset(int value)
    {
        write("IOffset",value);
    }

    int getIOffset(void)

    {
        return getInt("IOffset");
    }

    bool isIOffsetValid(void)
    {
        return isValid("IOffset");

    }

    void setQOffset(int value)
    {
        write("QOffset",value);
    }

    int getQOffset(void)

    {
        return getInt("QOffset");
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