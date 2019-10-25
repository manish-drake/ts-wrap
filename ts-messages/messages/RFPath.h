#ifndef __RFPath_h
#define __RFPath_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CRFPath:public TServerMessage
{
    const int mFormatVersion = 2;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x3;
    CRFPath(void)
    {
        setCmdID(mCmdID);
    }
    CRFPath(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
    }
    void setPath(unsigned int value)
    {
        write("Path",value);
    }

    unsigned int getPath(void)

    {
        return getUInt("Path");
    }

    bool isPathValid(void)
    {
        return isValid("Path");

    }

    void setIndex(int value)
    {
        write("Index",value);
    }

    int getIndex(void)

    {
        return getInt("Index");
    }

    bool isIndexValid(void)
    {
        return isValid("Index");

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