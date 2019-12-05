#ifndef __RXRegisters_h
#define __RXRegisters_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CRXRegisters:public TServerMessage
{
    const int mFormatVersion = 2;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x1c;
    CRXRegisters(void)
    {
        setCmdID(mCmdID);
    }
    CRXRegisters(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
    }
    void setReg0(unsigned int value)
    {
        write("Reg0",value);
    }

    unsigned int getReg0(void)

    {
        return getUInt("Reg0");
    }

    bool isReg0Valid(void)
    {
        return isValid("Reg0");

    }

    void setReg1(unsigned int value)
    {
        write("Reg1",value);
    }

    unsigned int getReg1(void)

    {
        return getUInt("Reg1");
    }

    bool isReg1Valid(void)
    {
        return isValid("Reg1");

    }

    void setReg2(unsigned int value)
    {
        write("Reg2",value);
    }

    unsigned int getReg2(void)

    {
        return getUInt("Reg2");
    }

    bool isReg2Valid(void)
    {
        return isValid("Reg2");

    }

    void setReg3(unsigned int value)
    {
        write("Reg3",value);
    }

    unsigned int getReg3(void)

    {
        return getUInt("Reg3");
    }

    bool isReg3Valid(void)
    {
        return isValid("Reg3");

    }

    void setReg4(unsigned int value)
    {
        write("Reg4",value);
    }

    unsigned int getReg4(void)

    {
        return getUInt("Reg4");
    }

    bool isReg4Valid(void)
    {
        return isValid("Reg4");

    }

    void setReg5(unsigned int value)
    {
        write("Reg5",value);
    }

    unsigned int getReg5(void)

    {
        return getUInt("Reg5");
    }

    bool isReg5Valid(void)
    {
        return isValid("Reg5");

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