#ifndef __ModeSFormats3of3_h
#define __ModeSFormats3of3_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CModeSFormats3of3:public TServerMessage
{
    const int mFormatVersion = 0;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x1b;
    CModeSFormats3of3(void)
    {
        setCmdID(mCmdID);
    }
    CModeSFormats3of3(Json::Value obj):TServerMessage(obj)
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

    void setUf16Df16_Vs(unsigned int value)
    {
        write("Uf16Df16_Vs",value);
    }

    unsigned int getUf16Df16_Vs(void)

    {
        return getUInt("Uf16Df16_Vs");
    }

    bool isUf16Df16_VsValid(void)
    {
        return isValid("Uf16Df16_Vs");

    }

    void setUf16Df16_Sl(unsigned int value)
    {
        write("Uf16Df16_Sl",value);
    }

    unsigned int getUf16Df16_Sl(void)

    {
        return getUInt("Uf16Df16_Sl");
    }

    bool isUf16Df16_SlValid(void)
    {
        return isValid("Uf16Df16_Sl");

    }

    void setUf16Df16_Ri(unsigned int value)
    {
        write("Uf16Df16_Ri",value);
    }

    unsigned int getUf16Df16_Ri(void)

    {
        return getUInt("Uf16Df16_Ri");
    }

    bool isUf16Df16_RiValid(void)
    {
        return isValid("Uf16Df16_Ri");

    }

    void setUf16Df16_Ac(std::string value)
    {
        write("Uf16Df16_Ac",value);
    }

    std::string getUf16Df16_Ac(void)

    {
        return getString("Uf16Df16_Ac");
    }

    bool isUf16Df16_AcValid(void)
    {
        return isValid("Uf16Df16_Ac");

    }

    void setUf16Df16_Ap(std::string value)
    {
        write("Uf16Df16_Ap",value);
    }

    std::string getUf16Df16_Ap(void)

    {
        return getString("Uf16Df16_Ap");
    }

    bool isUf16Df16_ApValid(void)
    {
        return isValid("Uf16Df16_Ap");

    }

    void setUf16Df16_Mv(std::string value)
    {
        write("Uf16Df16_Mv",value);
    }

    std::string getUf16Df16_Mv(void)

    {
        return getString("Uf16Df16_Mv");
    }

    bool isUf16Df16_MvValid(void)
    {
        return isValid("Uf16Df16_Mv");

    }

    void setUf20Df20_Fs(unsigned int value)
    {
        write("Uf20Df20_Fs",value);
    }

    unsigned int getUf20Df20_Fs(void)

    {
        return getUInt("Uf20Df20_Fs");
    }

    bool isUf20Df20_FsValid(void)
    {
        return isValid("Uf20Df20_Fs");

    }

    void setUf20Df20_Dr(unsigned int value)
    {
        write("Uf20Df20_Dr",value);
    }

    unsigned int getUf20Df20_Dr(void)

    {
        return getUInt("Uf20Df20_Dr");
    }

    bool isUf20Df20_DrValid(void)
    {
        return isValid("Uf20Df20_Dr");

    }

    void setUf20Df20_Um(std::string value)
    {
        write("Uf20Df20_Um",value);
    }

    std::string getUf20Df20_Um(void)

    {
        return getString("Uf20Df20_Um");
    }

    bool isUf20Df20_UmValid(void)
    {
        return isValid("Uf20Df20_Um");

    }

    void setUf20Df20_Ac(std::string value)
    {
        write("Uf20Df20_Ac",value);
    }

    std::string getUf20Df20_Ac(void)

    {
        return getString("Uf20Df20_Ac");
    }

    bool isUf20Df20_AcValid(void)
    {
        return isValid("Uf20Df20_Ac");

    }

    void setUf20Df20_Ap(std::string value)
    {
        write("Uf20Df20_Ap",value);
    }

    std::string getUf20Df20_Ap(void)

    {
        return getString("Uf20Df20_Ap");
    }

    bool isUf20Df20_ApValid(void)
    {
        return isValid("Uf20Df20_Ap");

    }

    void setUf20Df20_Mv(std::string value)
    {
        write("Uf20Df20_Mv",value);
    }

    std::string getUf20Df20_Mv(void)

    {
        return getString("Uf20Df20_Mv");
    }

    bool isUf20Df20_MvValid(void)
    {
        return isValid("Uf20Df20_Mv");

    }

    void setUf21Df21_Fs(unsigned int value)
    {
        write("Uf21Df21_Fs",value);
    }

    unsigned int getUf21Df21_Fs(void)

    {
        return getUInt("Uf21Df21_Fs");
    }

    bool isUf21Df21_FsValid(void)
    {
        return isValid("Uf21Df21_Fs");

    }

    void setUf21Df21_Dr(unsigned int value)
    {
        write("Uf21Df21_Dr",value);
    }

    unsigned int getUf21Df21_Dr(void)

    {
        return getUInt("Uf21Df21_Dr");
    }

    bool isUf21Df21_DrValid(void)
    {
        return isValid("Uf21Df21_Dr");

    }

    void setUf21Df21_Um(std::string value)
    {
        write("Uf21Df21_Um",value);
    }

    std::string getUf21Df21_Um(void)

    {
        return getString("Uf21Df21_Um");
    }

    bool isUf21Df21_UmValid(void)
    {
        return isValid("Uf21Df21_Um");

    }

    void setUf21Df21_Id(std::string value)
    {
        write("Uf21Df21_Id",value);
    }

    std::string getUf21Df21_Id(void)

    {
        return getString("Uf21Df21_Id");
    }

    bool isUf21Df21_IdValid(void)
    {
        return isValid("Uf21Df21_Id");

    }

    void setUf21Df21_Ap(std::string value)
    {
        write("Uf21Df21_Ap",value);
    }

    std::string getUf21Df21_Ap(void)

    {
        return getString("Uf21Df21_Ap");
    }

    bool isUf21Df21_ApValid(void)
    {
        return isValid("Uf21Df21_Ap");

    }

    void setUf21Df21_Mv(std::string value)
    {
        write("Uf21Df21_Mv",value);
    }

    std::string getUf21Df21_Mv(void)

    {
        return getString("Uf21Df21_Mv");
    }

    bool isUf21Df21_MvValid(void)
    {
        return isValid("Uf21Df21_Mv");

    }

    void setUf24Df24_Ke(unsigned int value)
    {
        write("Uf24Df24_Ke",value);
    }

    unsigned int getUf24Df24_Ke(void)

    {
        return getUInt("Uf24Df24_Ke");
    }

    bool isUf24Df24_KeValid(void)
    {
        return isValid("Uf24Df24_Ke");

    }

    void setUf24Df24_Nd(unsigned int value)
    {
        write("Uf24Df24_Nd",value);
    }

    unsigned int getUf24Df24_Nd(void)

    {
        return getUInt("Uf24Df24_Nd");
    }

    bool isUf24Df24_NdValid(void)
    {
        return isValid("Uf24Df24_Nd");

    }

    void setUf24Df24_Md(unsigned int value)
    {
        write("Uf24Df24_Md",value);
    }

    unsigned int getUf24Df24_Md(void)

    {
        return getUInt("Uf24Df24_Md");
    }

    bool isUf24Df24_MdValid(void)
    {
        return isValid("Uf24Df24_Md");

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