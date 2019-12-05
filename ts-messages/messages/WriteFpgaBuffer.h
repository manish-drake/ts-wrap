#ifndef __WriteFpgaBuffer_h
#define __WriteFpgaBuffer_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CWriteFpgaBuffer:public TServerMessage
{
    const int mFormatVersion = 2;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0xa;
    CWriteFpgaBuffer(void)
    {
        setCmdID(mCmdID);
    }
    CWriteFpgaBuffer(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
    }
    void setAddress(unsigned int value)
    {
        write("Address",value);
    }

    unsigned int getAddress(void)

    {
        return getUInt("Address");
    }

    bool isAddressValid(void)
    {
        return isValid("Address");

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

    void setLength(unsigned int value)
    {
        write("Length",value);
    }

    unsigned int getLength(void)

    {
        return getUInt("Length");
    }

    bool isLengthValid(void)
    {
        return isValid("Length");

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