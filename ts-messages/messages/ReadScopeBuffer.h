#ifndef __ReadScopeBuffer_h
#define __ReadScopeBuffer_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CReadScopeBuffer:public TServerMessage
{
    const int mFormatVersion = 2;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x11;
    CReadScopeBuffer(void)
    {
        setCmdID(mCmdID);
    }
    CReadScopeBuffer(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
    }
    void setChannel(unsigned int value)
    {
        write("Channel",value);
    }

    unsigned int getChannel(void)

    {
        return getUInt("Channel");
    }

    bool isChannelValid(void)
    {
        return isValid("Channel");

    }

    void setSize(unsigned int value)
    {
        write("Size",value);
    }

    unsigned int getSize(void)

    {
        return getUInt("Size");
    }

    bool isSizeValid(void)
    {
        return isValid("Size");

    }

    void setSigned(bool value)
    {
        write("Signed",value);
    }

    bool getSigned(void)

    {
        return getBool("Signed");
    }

    bool isSignedValid(void)
    {
        return isValid("Signed");

    }

    void setBits(int value)
    {
        write("Bits",value);
    }

    int getBits(void)

    {
        return getInt("Bits");
    }

    bool isBitsValid(void)
    {
        return isValid("Bits");

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