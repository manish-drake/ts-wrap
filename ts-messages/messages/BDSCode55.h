#ifndef __BDSCode55_h
#define __BDSCode55_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CBDSCode55:public TServerMessage
{
    const int mFormatVersion = 0;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x24;
    CBDSCode55(void)
    {
        setCmdID(mCmdID);
    }
    CBDSCode55(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
    }
    void setWaypointNameStatus(bool value)
    {
        write("WaypointNameStatus",value);
    }

    bool getWaypointNameStatus(void)

    {
        return getBool("WaypointNameStatus");
    }

    bool isWaypointNameStatusValid(void)
    {
        return isValid("WaypointNameStatus");

    }

    void setWaypointName(std::string value)
    {
        write("WaypointName",value);
    }

    std::string getWaypointName(void)

    {
        return getString("WaypointName");
    }

    bool isWaypointNameValid(void)
    {
        return isValid("WaypointName");

    }

    void setEstimatedArrivalTime(unsigned int value)
    {
        write("EstimatedArrivalTime",value);
    }

    unsigned int getEstimatedArrivalTime(void)

    {
        return getUInt("EstimatedArrivalTime");
    }

    bool isEstimatedArrivalTimeValid(void)
    {
        return isValid("EstimatedArrivalTime");

    }

    void setEstimatedFlightLevel(unsigned int value)
    {
        write("EstimatedFlightLevel",value);
    }

    unsigned int getEstimatedFlightLevel(void)

    {
        return getUInt("EstimatedFlightLevel");
    }

    bool isEstimatedFlightLevelValid(void)
    {
        return isValid("EstimatedFlightLevel");

    }

    void setTimeToGo(double value)
    {
        write("TimeToGo",value);
    }

    double getTimeToGo(void)

    {
        return getDouble("TimeToGo");
    }

    bool isTimeToGoValid(void)
    {
        return isValid("TimeToGo");

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