#ifndef __BDSCode08_h
#define __BDSCode08_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CBDSCode08:public TServerMessage
{
    const int mFormatVersion = 0;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x4;
    CBDSCode08(void)
    {
        setCmdID(mCmdID);
    }
    CBDSCode08(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
    }
    void setCategoryGroup(unsigned int value)
    {
        write("CategoryGroup",value);
    }

    unsigned int getCategoryGroup(void)

    {
        return getUInt("CategoryGroup");
    }

    bool isCategoryGroupValid(void)
    {
        return isValid("CategoryGroup");

    }

    void setAircraftCategory(unsigned int value)
    {
        write("AircraftCategory",value);
    }

    unsigned int getAircraftCategory(void)

    {
        return getUInt("AircraftCategory");
    }

    bool isAircraftCategoryValid(void)
    {
        return isValid("AircraftCategory");

    }

    void setAircraftID(std::string value)
    {
        write("AircraftID",value);
    }

    std::string getAircraftID(void)

    {
        return getString("AircraftID");
    }

    bool isAircraftIDValid(void)
    {
        return isValid("AircraftID");

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