#ifndef __SendRegs_h
#define __SendRegs_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CSendRegs:public TServerMessage
{
    const int mFormatVersion = 2;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0xc;
    CSendRegs(void)
    {
        setCmdID(mCmdID);
    }
    CSendRegs(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
    }
    void setCommands(std::vector<std::string>& value)
    {
        write("Commands",value);
    }

    std::vector<std::string> getCommands(std::vector<std::string> arr)

    {
        return getArray("Commands",arr);
    }

    bool isCommandsValid(void)
    {
        return isValid("Commands");

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