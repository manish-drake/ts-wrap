#ifndef __FpgaPower_h
#define __FpgaPower_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CFpgaPower:public TServerMessage
{
    const int mFormatVersion = 2;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x5;
    CFpgaPower(void)
    {
        setCmdID(mCmdID);
    }
    CFpgaPower(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
    }
    void setOn(bool value)
    {
        write("On",value);
    }

    bool getOn(void)

    {
        return getBool("On");
    }

    bool isOnValid(void)
    {
        return isValid("On");

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