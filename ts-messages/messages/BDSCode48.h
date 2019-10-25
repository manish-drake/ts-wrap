#ifndef __BDSCode48_h
#define __BDSCode48_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CBDSCode48:public TServerMessage
{
    const int mFormatVersion = 0;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x1e;
    CBDSCode48(void)
    {
        setCmdID(mCmdID);
    }
    CBDSCode48(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
    }
    void setVHF1(float value)
    {
        write("VHF1",value);
    }

    float getVHF1(void)

    {
        return getFloat("VHF1");
    }

    bool isVHF1Valid(void)
    {
        return isValid("VHF1");

    }

    void setVHF1Status(bool value)
    {
        write("VHF1Status",value);
    }

    bool getVHF1Status(void)

    {
        return getBool("VHF1Status");
    }

    bool isVHF1StatusValid(void)
    {
        return isValid("VHF1Status");

    }

    void setVHF1AudioStatus(unsigned int value)
    {
        write("VHF1AudioStatus",value);
    }

    unsigned int getVHF1AudioStatus(void)

    {
        return getUInt("VHF1AudioStatus");
    }

    bool isVHF1AudioStatusValid(void)
    {
        return isValid("VHF1AudioStatus");

    }

    void setVHF2(float value)
    {
        write("VHF2",value);
    }

    float getVHF2(void)

    {
        return getFloat("VHF2");
    }

    bool isVHF2Valid(void)
    {
        return isValid("VHF2");

    }

    void setVHF2Status(bool value)
    {
        write("VHF2Status",value);
    }

    bool getVHF2Status(void)

    {
        return getBool("VHF2Status");
    }

    bool isVHF2StatusValid(void)
    {
        return isValid("VHF2Status");

    }

    void setVHF2AudioStatus(unsigned int value)
    {
        write("VHF2AudioStatus",value);
    }

    unsigned int getVHF2AudioStatus(void)

    {
        return getUInt("VHF2AudioStatus");
    }

    bool isVHF2AudioStatusValid(void)
    {
        return isValid("VHF2AudioStatus");

    }

    void setVHF3(float value)
    {
        write("VHF3",value);
    }

    float getVHF3(void)

    {
        return getFloat("VHF3");
    }

    bool isVHF3Valid(void)
    {
        return isValid("VHF3");

    }

    void setVHF3Status(bool value)
    {
        write("VHF3Status",value);
    }

    bool getVHF3Status(void)

    {
        return getBool("VHF3Status");
    }

    bool isVHF3StatusValid(void)
    {
        return isValid("VHF3Status");

    }

    void setVHF3AudioStatus(unsigned int value)
    {
        write("VHF3AudioStatus",value);
    }

    unsigned int getVHF3AudioStatus(void)

    {
        return getUInt("VHF3AudioStatus");
    }

    bool isVHF3AudioStatusValid(void)
    {
        return isValid("VHF3AudioStatus");

    }

    void set121_5MHzAudioStatus(unsigned int value)
    {
        write("121_5MHzAudioStatus",value);
    }

    unsigned int get121_5MHzAudioStatus(void)

    {
        return getUInt("121_5MHzAudioStatus");
    }

    bool is121_5MHzAudioStatusValid(void)
    {
        return isValid("121_5MHzAudioStatus");

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