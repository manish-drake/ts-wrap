#ifndef __ModeSSquitter_h
#define __ModeSSquitter_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CModeSSquitter:public TServerMessage
{
    const int mFormatVersion = 0;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x24;
    CModeSSquitter(void)
    {
        setCmdID(mCmdID);
    }
    CModeSSquitter(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
    }
    void setDf11Address(std::string value)
    {
        write("Df11Address",value);
    }

    std::string getDf11Address(void)

    {
        return getString("Df11Address");
    }

    bool isDf11AddressValid(void)
    {
        return isValid("Df11Address");

    }

    void setDf11CA(unsigned int value)
    {
        write("Df11CA",value);
    }

    unsigned int getDf11CA(void)

    {
        return getUInt("Df11CA");
    }

    bool isDf11CAValid(void)
    {
        return isValid("Df11CA");

    }

    void setDf11UpadteRate(unsigned int value)
    {
        write("Df11UpadteRate",value);
    }

    unsigned int getDf11UpadteRate(void)

    {
        return getUInt("Df11UpadteRate");
    }

    bool isDf11UpadteRateValid(void)
    {
        return isValid("Df11UpadteRate");

    }

    void setDf17Address(std::string value)
    {
        write("Df17Address",value);
    }

    std::string getDf17Address(void)

    {
        return getString("Df17Address");
    }

    bool isDf17AddressValid(void)
    {
        return isValid("Df17Address");

    }

    void setDf17BdsRegisters(std::vector<unsigned int>& value)
    {
        write("Df17BdsRegisters",value);
    }

    std::vector<unsigned int> getDf17BdsRegisters(std::vector<unsigned int> arr)

    {
        return getArray("Df17BdsRegisters",arr);
    }

    bool isDf17BdsRegistersValid(void)
    {
        return isValid("Df17BdsRegisters");

    }

    void setDf17UpdateRate(unsigned int value)
    {
        write("Df17UpdateRate",value);
    }

    unsigned int getDf17UpdateRate(void)

    {
        return getUInt("Df17UpdateRate");
    }

    bool isDf17UpdateRateValid(void)
    {
        return isValid("Df17UpdateRate");

    }

    void setFrequency(float value)
    {
        write("Frequency",value);
    }

    float getFrequency(void)

    {
        return getFloat("Frequency");
    }

    bool isFrequencyValid(void)
    {
        return isValid("Frequency");

    }

    void setPower(float value)
    {
        write("Power",value);
    }

    float getPower(void)

    {
        return getFloat("Power");
    }

    bool isPowerValid(void)
    {
        return isValid("Power");

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