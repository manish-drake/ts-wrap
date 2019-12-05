#ifndef __ReplyReadFpgaBuffer_h
#define __ReplyReadFpgaBuffer_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CReplyReadFpgaBuffer:public TServerMessage
{
    const int mFormatVersion = 2;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x1002;
    CReplyReadFpgaBuffer(void)
    {
        setCmdID(mCmdID);
    }
    CReplyReadFpgaBuffer(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
    }
    void setBuffer(std::vector<unsigned int>& value)
    {
        write("Buffer",value);
    }

    std::vector<unsigned int> getBuffer(std::vector<unsigned int> arr)

    {
        return getArray("Buffer",arr);
    }

    bool isBufferValid(void)
    {
        return isValid("Buffer");

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