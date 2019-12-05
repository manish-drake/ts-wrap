#ifndef __LoadImage_h
#define __LoadImage_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CLoadImage:public TServerMessage
{
    const int mFormatVersion = 2;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x3;
    CLoadImage(void)
    {
        setCmdID(mCmdID);
    }
    CLoadImage(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
    }
    void setFileName(std::string value)
    {
        write("FileName",value);
    }

    std::string getFileName(void)

    {
        return getString("FileName");
    }

    bool isFileNameValid(void)
    {
        return isValid("FileName");

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