#ifndef __ModeSDiversityChannelIsolation_h
#define __ModeSDiversityChannelIsolation_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CModeSDiversityChannelIsolation:public TServerMessage
{
    const int mFormatVersion = 0;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x19;
    CModeSDiversityChannelIsolation(void)
    {
        setCmdID(mCmdID);
    }
    CModeSDiversityChannelIsolation(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
    }
    void setSelectedVsNonSelectedAntennaIsolation(float value)
    {
        write("SelectedVsNonSelectedAntennaIsolation",value);
    }

    float getSelectedVsNonSelectedAntennaIsolation(void)

    {
        return getFloat("SelectedVsNonSelectedAntennaIsolation");
    }

    bool isSelectedVsNonSelectedAntennaIsolationValid(void)
    {
        return isValid("SelectedVsNonSelectedAntennaIsolation");

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