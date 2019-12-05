#ifndef __SetPresets_h
#define __SetPresets_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CSetPresets:public TServerMessage
{
    const int mFormatVersion = 2;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x4;
    CSetPresets(void)
    {
        setCmdID(mCmdID);
    }
    CSetPresets(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
    }
    void setPresetsFilename(std::string value)
    {
        write("PresetsFilename",value);
    }

    std::string getPresetsFilename(void)

    {
        return getString("PresetsFilename");
    }

    bool isPresetsFilenameValid(void)
    {
        return isValid("PresetsFilename");

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