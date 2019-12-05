#ifndef __ReplyScopeBuffer_h
#define __ReplyScopeBuffer_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CReplyScopeBuffer:public TServerMessage
{
    const int mFormatVersion = 2;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x1001;
    CReplyScopeBuffer(void)
    {
        setCmdID(mCmdID);
    }
    CReplyScopeBuffer(Json::Value obj):TServerMessage(obj)
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

    void setData(std::vector<int>& value)
    {
        write("Data",value);
    }

    std::vector<int> getData(std::vector<int> arr)

    {
        return getArray("Data",arr);
    }

    bool isDataValid(void)
    {
        return isValid("Data");

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