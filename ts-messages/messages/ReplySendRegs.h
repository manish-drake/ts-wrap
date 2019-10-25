#ifndef __ReplySendRegs_h
#define __ReplySendRegs_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CReplySendRegs:public TServerMessage
{
    const int mFormatVersion = 2;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x100c;
    CReplySendRegs(void)
    {
        setCmdID(mCmdID);
    }
    CReplySendRegs(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
    }
    void setCommands(unsigned int value)
    {
        write("Commands",value);
    }

    unsigned int getCommands(void)

    {
        return getUInt("Commands");
    }

    bool isCommandsValid(void)
    {
        return isValid("Commands");

    }

    void setTime(unsigned int value)
    {
        write("Time",value);
    }

    unsigned int getTime(void)

    {
        return getUInt("Time");
    }

    bool isTimeValid(void)
    {
        return isValid("Time");

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