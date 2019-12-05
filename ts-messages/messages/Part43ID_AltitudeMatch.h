#ifndef __Part43ID_AltitudeMatch_h
#define __Part43ID_AltitudeMatch_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CPart43ID_AltitudeMatch:public TServerMessage
{
    const int mFormatVersion = 0;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0xe;
    CPart43ID_AltitudeMatch(void)
    {
        setCmdID(mCmdID);
    }
    CPart43ID_AltitudeMatch(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
    }
    void setTestNum(unsigned int value)
    {
        write("TestNum",value);
    }

    unsigned int getTestNum(void)

    {
        return getUInt("TestNum");
    }

    bool isTestNumValid(void)
    {
        return isValid("TestNum");

    }

    void setModeAID(unsigned int value)
    {
        write("ModeAID",value);
    }

    unsigned int getModeAID(void)

    {
        return getUInt("ModeAID");
    }

    bool isModeAIDValid(void)
    {
        return isValid("ModeAID");

    }

    void setModeSID(unsigned int value)
    {
        write("ModeSID",value);
    }

    unsigned int getModeSID(void)

    {
        return getUInt("ModeSID");
    }

    bool isModeSIDValid(void)
    {
        return isValid("ModeSID");

    }

    void setIDMatchPass(bool value)
    {
        write("IDMatchPass",value);
    }

    bool getIDMatchPass(void)

    {
        return getBool("IDMatchPass");
    }

    bool isIDMatchPassValid(void)
    {
        return isValid("IDMatchPass");

    }

    void setModeAAltitude(unsigned int value)
    {
        write("ModeAAltitude",value);
    }

    unsigned int getModeAAltitude(void)

    {
        return getUInt("ModeAAltitude");
    }

    bool isModeAAltitudeValid(void)
    {
        return isValid("ModeAAltitude");

    }

    void setModeSAltitude(unsigned int value)
    {
        write("ModeSAltitude",value);
    }

    unsigned int getModeSAltitude(void)

    {
        return getUInt("ModeSAltitude");
    }

    bool isModeSAltitudeValid(void)
    {
        return isValid("ModeSAltitude");

    }

    void setAltitudeMatchPass(bool value)
    {
        write("AltitudeMatchPass",value);
    }

    bool getAltitudeMatchPass(void)

    {
        return getBool("AltitudeMatchPass");
    }

    bool isAltitudeMatchPassValid(void)
    {
        return isValid("AltitudeMatchPass");

    }

    void setModeSAddress(unsigned int value)
    {
        write("ModeSAddress",value);
    }

    unsigned int getModeSAddress(void)

    {
        return getUInt("ModeSAddress");
    }

    bool isModeSAddressValid(void)
    {
        return isValid("ModeSAddress");

    }

    void setPass(bool value)
    {
        write("Pass",value);
    }

    bool getPass(void)

    {
        return getBool("Pass");
    }

    bool isPassValid(void)
    {
        return isValid("Pass");

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