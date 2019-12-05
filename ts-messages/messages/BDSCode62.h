#ifndef __BDSCode62_h
#define __BDSCode62_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CBDSCode62:public TServerMessage
{
    const int mFormatVersion = 0;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x29;
    CBDSCode62(void)
    {
        setCmdID(mCmdID);
    }
    CBDSCode62(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
    }
    void setTypeCode(int value)
    {
        write("TypeCode",value);
    }

    int getTypeCode(void)

    {
        return getInt("TypeCode");
    }

    bool isTypeCodeValid(void)
    {
        return isValid("TypeCode");

    }

    void setSubTypeCode(int value)
    {
        write("SubTypeCode",value);
    }

    int getSubTypeCode(void)

    {
        return getInt("SubTypeCode");
    }

    bool isSubTypeCodeValid(void)
    {
        return isValid("SubTypeCode");

    }

    void setSelAltitudeType(int value)
    {
        write("SelAltitudeType",value);
    }

    int getSelAltitudeType(void)

    {
        return getInt("SelAltitudeType");
    }

    bool isSelAltitudeTypeValid(void)
    {
        return isValid("SelAltitudeType");

    }

    void setSelectedAltitude(int value)
    {
        write("SelectedAltitude",value);
    }

    int getSelectedAltitude(void)

    {
        return getInt("SelectedAltitude");
    }

    bool isSelectedAltitudeValid(void)
    {
        return isValid("SelectedAltitude");

    }

    void setBaroPressureSetting(double value)
    {
        write("BaroPressureSetting",value);
    }

    double getBaroPressureSetting(void)

    {
        return getDouble("BaroPressureSetting");
    }

    bool isBaroPressureSettingValid(void)
    {
        return isValid("BaroPressureSetting");

    }

    void setSelectedHeadingStatus(int value)
    {
        write("SelectedHeadingStatus",value);
    }

    int getSelectedHeadingStatus(void)

    {
        return getInt("SelectedHeadingStatus");
    }

    bool isSelectedHeadingStatusValid(void)
    {
        return isValid("SelectedHeadingStatus");

    }

    void setSelectedHeading(int value)
    {
        write("SelectedHeading",value);
    }

    int getSelectedHeading(void)

    {
        return getInt("SelectedHeading");
    }

    bool isSelectedHeadingValid(void)
    {
        return isValid("SelectedHeading");

    }

    void setAutopilotEngaged(bool value)
    {
        write("AutopilotEngaged",value);
    }

    bool getAutopilotEngaged(void)

    {
        return getBool("AutopilotEngaged");
    }

    bool isAutopilotEngagedValid(void)
    {
        return isValid("AutopilotEngaged");

    }

    void setVnavMode(bool value)
    {
        write("VnavMode",value);
    }

    bool getVnavMode(void)

    {
        return getBool("VnavMode");
    }

    bool isVnavModeValid(void)
    {
        return isValid("VnavMode");

    }

    void setAltHoldMode(bool value)
    {
        write("AltHoldMode",value);
    }

    bool getAltHoldMode(void)

    {
        return getBool("AltHoldMode");
    }

    bool isAltHoldModeValid(void)
    {
        return isValid("AltHoldMode");

    }

    void setApproachMode(bool value)
    {
        write("ApproachMode",value);
    }

    bool getApproachMode(void)

    {
        return getBool("ApproachMode");
    }

    bool isApproachModeValid(void)
    {
        return isValid("ApproachMode");

    }

    void setLNAV(bool value)
    {
        write("LNAV",value);
    }

    bool getLNAV(void)

    {
        return getBool("LNAV");
    }

    bool isLNAVValid(void)
    {
        return isValid("LNAV");

    }

    void setTCASOperational(bool value)
    {
        write("TCASOperational",value);
    }

    bool getTCASOperational(void)

    {
        return getBool("TCASOperational");
    }

    bool isTCASOperationalValid(void)
    {
        return isValid("TCASOperational");

    }

    void setNACP(int value)
    {
        write("NACP",value);
    }

    int getNACP(void)

    {
        return getInt("NACP");
    }

    bool isNACPValid(void)
    {
        return isValid("NACP");

    }

    void setSIL(int value)
    {
        write("SIL",value);
    }

    int getSIL(void)

    {
        return getInt("SIL");
    }

    bool isSILValid(void)
    {
        return isValid("SIL");

    }

    void setSILSup(int value)
    {
        write("SILSup",value);
    }

    int getSILSup(void)

    {
        return getInt("SILSup");
    }

    bool isSILSupValid(void)
    {
        return isValid("SILSup");

    }

    void setNICBaro(int value)
    {
        write("NICBaro",value);
    }

    int getNICBaro(void)

    {
        return getInt("NICBaro");
    }

    bool isNICBaroValid(void)
    {
        return isValid("NICBaro");

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