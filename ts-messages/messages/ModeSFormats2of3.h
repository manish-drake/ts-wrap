#ifndef __ModeSFormats2of3_h
#define __ModeSFormats2of3_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CModeSFormats2of3:public TServerMessage
{
    const int mFormatVersion = 0;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x1a;
    CModeSFormats2of3(void)
    {
        setCmdID(mCmdID);
    }
    CModeSFormats2of3(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
    }
    void setUut(unsigned int value)
    {
        write("Uut",value);
    }

    unsigned int getUut(void)

    {
        return getUInt("Uut");
    }

    bool isUutValid(void)
    {
        return isValid("Uut");

    }

    void setRespondsToUfFormats(std::vector<unsigned int>& value)
    {
        write("RespondsToUfFormats",value);
    }

    std::vector<unsigned int> getRespondsToUfFormats(std::vector<unsigned int> arr)

    {
        return getArray("RespondsToUfFormats",arr);
    }

    bool isRespondsToUfFormatsValid(void)
    {
        return isValid("RespondsToUfFormats");

    }

    void setUf0Df0_Vs(unsigned int value)
    {
        write("Uf0Df0_Vs",value);
    }

    unsigned int getUf0Df0_Vs(void)

    {
        return getUInt("Uf0Df0_Vs");
    }

    bool isUf0Df0_VsValid(void)
    {
        return isValid("Uf0Df0_Vs");

    }

    void setUf0Df0_Cc(unsigned int value)
    {
        write("Uf0Df0_Cc",value);
    }

    unsigned int getUf0Df0_Cc(void)

    {
        return getUInt("Uf0Df0_Cc");
    }

    bool isUf0Df0_CcValid(void)
    {
        return isValid("Uf0Df0_Cc");

    }

    void setUf0Df0_Sl(unsigned int value)
    {
        write("Uf0Df0_Sl",value);
    }

    unsigned int getUf0Df0_Sl(void)

    {
        return getUInt("Uf0Df0_Sl");
    }

    bool isUf0Df0_SlValid(void)
    {
        return isValid("Uf0Df0_Sl");

    }

    void setUf0Df0_Ri(unsigned int value)
    {
        write("Uf0Df0_Ri",value);
    }

    unsigned int getUf0Df0_Ri(void)

    {
        return getUInt("Uf0Df0_Ri");
    }

    bool isUf0Df0_RiValid(void)
    {
        return isValid("Uf0Df0_Ri");

    }

    void setUf0Df0_Ac(std::string value)
    {
        write("Uf0Df0_Ac",value);
    }

    std::string getUf0Df0_Ac(void)

    {
        return getString("Uf0Df0_Ac");
    }

    bool isUf0Df0_AcValid(void)
    {
        return isValid("Uf0Df0_Ac");

    }

    void setUf0Df0_Ap(std::string value)
    {
        write("Uf0Df0_Ap",value);
    }

    std::string getUf0Df0_Ap(void)

    {
        return getString("Uf0Df0_Ap");
    }

    bool isUf0Df0_ApValid(void)
    {
        return isValid("Uf0Df0_Ap");

    }

    void setUf4Df4_Fs(unsigned int value)
    {
        write("Uf4Df4_Fs",value);
    }

    unsigned int getUf4Df4_Fs(void)

    {
        return getUInt("Uf4Df4_Fs");
    }

    bool isUf4Df4_FsValid(void)
    {
        return isValid("Uf4Df4_Fs");

    }

    void setUf4Df4_Dr(unsigned int value)
    {
        write("Uf4Df4_Dr",value);
    }

    unsigned int getUf4Df4_Dr(void)

    {
        return getUInt("Uf4Df4_Dr");
    }

    bool isUf4Df4_DrValid(void)
    {
        return isValid("Uf4Df4_Dr");

    }

    void setUf4Df4_Um(unsigned int value)
    {
        write("Uf4Df4_Um",value);
    }

    unsigned int getUf4Df4_Um(void)

    {
        return getUInt("Uf4Df4_Um");
    }

    bool isUf4Df4_UmValid(void)
    {
        return isValid("Uf4Df4_Um");

    }

    void setUf4Df4_Ac(std::string value)
    {
        write("Uf4Df4_Ac",value);
    }

    std::string getUf4Df4_Ac(void)

    {
        return getString("Uf4Df4_Ac");
    }

    bool isUf4Df4_AcValid(void)
    {
        return isValid("Uf4Df4_Ac");

    }

    void setUf4Df4_Ap(std::string value)
    {
        write("Uf4Df4_Ap",value);
    }

    std::string getUf4Df4_Ap(void)

    {
        return getString("Uf4Df4_Ap");
    }

    bool isUf4Df4_ApValid(void)
    {
        return isValid("Uf4Df4_Ap");

    }

    void setUf5Df5_Fs(unsigned int value)
    {
        write("Uf5Df5_Fs",value);
    }

    unsigned int getUf5Df5_Fs(void)

    {
        return getUInt("Uf5Df5_Fs");
    }

    bool isUf5Df5_FsValid(void)
    {
        return isValid("Uf5Df5_Fs");

    }

    void setUf5Df5_Dr(unsigned int value)
    {
        write("Uf5Df5_Dr",value);
    }

    unsigned int getUf5Df5_Dr(void)

    {
        return getUInt("Uf5Df5_Dr");
    }

    bool isUf5Df5_DrValid(void)
    {
        return isValid("Uf5Df5_Dr");

    }

    void setUf5Df5_Um(unsigned int value)
    {
        write("Uf5Df5_Um",value);
    }

    unsigned int getUf5Df5_Um(void)

    {
        return getUInt("Uf5Df5_Um");
    }

    bool isUf5Df5_UmValid(void)
    {
        return isValid("Uf5Df5_Um");

    }

    void setUf5Df5_Id(std::string value)
    {
        write("Uf5Df5_Id",value);
    }

    std::string getUf5Df5_Id(void)

    {
        return getString("Uf5Df5_Id");
    }

    bool isUf5Df5_IdValid(void)
    {
        return isValid("Uf5Df5_Id");

    }

    void setUf5Df5_Ap(std::string value)
    {
        write("Uf5Df5_Ap",value);
    }

    std::string getUf5Df5_Ap(void)

    {
        return getString("Uf5Df5_Ap");
    }

    bool isUf5Df5_ApValid(void)
    {
        return isValid("Uf5Df5_Ap");

    }

    void setUf11Df11_Ca(unsigned int value)
    {
        write("Uf11Df11_Ca",value);
    }

    unsigned int getUf11Df11_Ca(void)

    {
        return getUInt("Uf11Df11_Ca");
    }

    bool isUf11Df11_CaValid(void)
    {
        return isValid("Uf11Df11_Ca");

    }

    void setUf11Df11_Aa(std::string value)
    {
        write("Uf11Df11_Aa",value);
    }

    std::string getUf11Df11_Aa(void)

    {
        return getString("Uf11Df11_Aa");
    }

    bool isUf11Df11_AaValid(void)
    {
        return isValid("Uf11Df11_Aa");

    }

    void setUf11Df11_Pi(unsigned int value)
    {
        write("Uf11Df11_Pi",value);
    }

    unsigned int getUf11Df11_Pi(void)

    {
        return getUInt("Uf11Df11_Pi");
    }

    bool isUf11Df11_PiValid(void)
    {
        return isValid("Uf11Df11_Pi");

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