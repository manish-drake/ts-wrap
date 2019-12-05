#ifndef __Part43Squitter_h
#define __Part43Squitter_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CPart43Squitter:public TServerMessage
{
    const int mFormatVersion = 0;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x13;
    CPart43Squitter(void)
    {
        setCmdID(mCmdID);
    }
    CPart43Squitter(Json::Value obj):TServerMessage(obj)
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

    void setSquitterAddressDF11(unsigned int value)
    {
        write("SquitterAddressDF11",value);
    }

    unsigned int getSquitterAddressDF11(void)

    {
        return getUInt("SquitterAddressDF11");
    }

    bool isSquitterAddressDF11Valid(void)
    {
        return isValid("SquitterAddressDF11");

    }

    void setSquitterCADF11(unsigned int value)
    {
        write("SquitterCADF11",value);
    }

    unsigned int getSquitterCADF11(void)

    {
        return getUInt("SquitterCADF11");
    }

    bool isSquitterCADF11Valid(void)
    {
        return isValid("SquitterCADF11");

    }

    void setSquitterCapDF11(unsigned int value)
    {
        write("SquitterCapDF11",value);
    }

    unsigned int getSquitterCapDF11(void)

    {
        return getUInt("SquitterCapDF11");
    }

    bool isSquitterCapDF11Valid(void)
    {
        return isValid("SquitterCapDF11");

    }

    void setSquitterUpdateRateDF11(unsigned int value)
    {
        write("SquitterUpdateRateDF11",value);
    }

    unsigned int getSquitterUpdateRateDF11(void)

    {
        return getUInt("SquitterUpdateRateDF11");
    }

    bool isSquitterUpdateRateDF11Valid(void)
    {
        return isValid("SquitterUpdateRateDF11");

    }

    void setSquitterAddressDF17(unsigned int value)
    {
        write("SquitterAddressDF17",value);
    }

    unsigned int getSquitterAddressDF17(void)

    {
        return getUInt("SquitterAddressDF17");
    }

    bool isSquitterAddressDF17Valid(void)
    {
        return isValid("SquitterAddressDF17");

    }

    void setSquitterBDSRegisters(std::vector<unsigned int>& value)
    {
        write("SquitterBDSRegisters",value);
    }

    std::vector<unsigned int> getSquitterBDSRegisters(std::vector<unsigned int> arr)

    {
        return getArray("SquitterBDSRegisters",arr);
    }

    bool isSquitterBDSRegistersValid(void)
    {
        return isValid("SquitterBDSRegisters");

    }

    void setSquitterUpdateRateDF17(unsigned int value)
    {
        write("SquitterUpdateRateDF17",value);
    }

    unsigned int getSquitterUpdateRateDF17(void)

    {
        return getUInt("SquitterUpdateRateDF17");
    }

    bool isSquitterUpdateRateDF17Valid(void)
    {
        return isValid("SquitterUpdateRateDF17");

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