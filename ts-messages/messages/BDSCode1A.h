#ifndef __BDSCode1A_h
#define __BDSCode1A_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CBDSCode1A:public TServerMessage
{
    const int mFormatVersion = 0;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0xd;
    CBDSCode1A(void)
    {
        setCmdID(mCmdID);
    }
    CBDSCode1A(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
    }
    void setBDS_A8(bool value)
    {
        write("BDS_A8",value);
    }

    bool getBDS_A8(void)

    {
        return getBool("BDS_A8");
    }

    bool isBDS_A8Valid(void)
    {
        return isValid("BDS_A8");

    }

    void setBDS_A7(bool value)
    {
        write("BDS_A7",value);
    }

    bool getBDS_A7(void)

    {
        return getBool("BDS_A7");
    }

    bool isBDS_A7Valid(void)
    {
        return isValid("BDS_A7");

    }

    void setBDS_A6(bool value)
    {
        write("BDS_A6",value);
    }

    bool getBDS_A6(void)

    {
        return getBool("BDS_A6");
    }

    bool isBDS_A6Valid(void)
    {
        return isValid("BDS_A6");

    }

    void setBDS_A5(bool value)
    {
        write("BDS_A5",value);
    }

    bool getBDS_A5(void)

    {
        return getBool("BDS_A5");
    }

    bool isBDS_A5Valid(void)
    {
        return isValid("BDS_A5");

    }

    void setBDS_A4(bool value)
    {
        write("BDS_A4",value);
    }

    bool getBDS_A4(void)

    {
        return getBool("BDS_A4");
    }

    bool isBDS_A4Valid(void)
    {
        return isValid("BDS_A4");

    }

    void setBDS_A3(bool value)
    {
        write("BDS_A3",value);
    }

    bool getBDS_A3(void)

    {
        return getBool("BDS_A3");
    }

    bool isBDS_A3Valid(void)
    {
        return isValid("BDS_A3");

    }

    void setBDS_A2(bool value)
    {
        write("BDS_A2",value);
    }

    bool getBDS_A2(void)

    {
        return getBool("BDS_A2");
    }

    bool isBDS_A2Valid(void)
    {
        return isValid("BDS_A2");

    }

    void setBDS_A1(bool value)
    {
        write("BDS_A1",value);
    }

    bool getBDS_A1(void)

    {
        return getBool("BDS_A1");
    }

    bool isBDS_A1Valid(void)
    {
        return isValid("BDS_A1");

    }

    void setBDS_A0(bool value)
    {
        write("BDS_A0",value);
    }

    bool getBDS_A0(void)

    {
        return getBool("BDS_A0");
    }

    bool isBDS_A0Valid(void)
    {
        return isValid("BDS_A0");

    }

    void setBDS_9F(bool value)
    {
        write("BDS_9F",value);
    }

    bool getBDS_9F(void)

    {
        return getBool("BDS_9F");
    }

    bool isBDS_9FValid(void)
    {
        return isValid("BDS_9F");

    }

    void setBDS_9E(bool value)
    {
        write("BDS_9E",value);
    }

    bool getBDS_9E(void)

    {
        return getBool("BDS_9E");
    }

    bool isBDS_9EValid(void)
    {
        return isValid("BDS_9E");

    }

    void setBDS_9D(bool value)
    {
        write("BDS_9D",value);
    }

    bool getBDS_9D(void)

    {
        return getBool("BDS_9D");
    }

    bool isBDS_9DValid(void)
    {
        return isValid("BDS_9D");

    }

    void setBDS_9C(bool value)
    {
        write("BDS_9C",value);
    }

    bool getBDS_9C(void)

    {
        return getBool("BDS_9C");
    }

    bool isBDS_9CValid(void)
    {
        return isValid("BDS_9C");

    }

    void setBDS_9B(bool value)
    {
        write("BDS_9B",value);
    }

    bool getBDS_9B(void)

    {
        return getBool("BDS_9B");
    }

    bool isBDS_9BValid(void)
    {
        return isValid("BDS_9B");

    }

    void setBDS_9A(bool value)
    {
        write("BDS_9A",value);
    }

    bool getBDS_9A(void)

    {
        return getBool("BDS_9A");
    }

    bool isBDS_9AValid(void)
    {
        return isValid("BDS_9A");

    }

    void setBDS_99(bool value)
    {
        write("BDS_99",value);
    }

    bool getBDS_99(void)

    {
        return getBool("BDS_99");
    }

    bool isBDS_99Valid(void)
    {
        return isValid("BDS_99");

    }

    void setBDS_98(bool value)
    {
        write("BDS_98",value);
    }

    bool getBDS_98(void)

    {
        return getBool("BDS_98");
    }

    bool isBDS_98Valid(void)
    {
        return isValid("BDS_98");

    }

    void setBDS_97(bool value)
    {
        write("BDS_97",value);
    }

    bool getBDS_97(void)

    {
        return getBool("BDS_97");
    }

    bool isBDS_97Valid(void)
    {
        return isValid("BDS_97");

    }

    void setBDS_96(bool value)
    {
        write("BDS_96",value);
    }

    bool getBDS_96(void)

    {
        return getBool("BDS_96");
    }

    bool isBDS_96Valid(void)
    {
        return isValid("BDS_96");

    }

    void setBDS_95(bool value)
    {
        write("BDS_95",value);
    }

    bool getBDS_95(void)

    {
        return getBool("BDS_95");
    }

    bool isBDS_95Valid(void)
    {
        return isValid("BDS_95");

    }

    void setBDS_94(bool value)
    {
        write("BDS_94",value);
    }

    bool getBDS_94(void)

    {
        return getBool("BDS_94");
    }

    bool isBDS_94Valid(void)
    {
        return isValid("BDS_94");

    }

    void setBDS_93(bool value)
    {
        write("BDS_93",value);
    }

    bool getBDS_93(void)

    {
        return getBool("BDS_93");
    }

    bool isBDS_93Valid(void)
    {
        return isValid("BDS_93");

    }

    void setBDS_92(bool value)
    {
        write("BDS_92",value);
    }

    bool getBDS_92(void)

    {
        return getBool("BDS_92");
    }

    bool isBDS_92Valid(void)
    {
        return isValid("BDS_92");

    }

    void setBDS_91(bool value)
    {
        write("BDS_91",value);
    }

    bool getBDS_91(void)

    {
        return getBool("BDS_91");
    }

    bool isBDS_91Valid(void)
    {
        return isValid("BDS_91");

    }

    void setBDS_90(bool value)
    {
        write("BDS_90",value);
    }

    bool getBDS_90(void)

    {
        return getBool("BDS_90");
    }

    bool isBDS_90Valid(void)
    {
        return isValid("BDS_90");

    }

    void setBDS_8F(bool value)
    {
        write("BDS_8F",value);
    }

    bool getBDS_8F(void)

    {
        return getBool("BDS_8F");
    }

    bool isBDS_8FValid(void)
    {
        return isValid("BDS_8F");

    }

    void setBDS_8E(bool value)
    {
        write("BDS_8E",value);
    }

    bool getBDS_8E(void)

    {
        return getBool("BDS_8E");
    }

    bool isBDS_8EValid(void)
    {
        return isValid("BDS_8E");

    }

    void setBDS_8D(bool value)
    {
        write("BDS_8D",value);
    }

    bool getBDS_8D(void)

    {
        return getBool("BDS_8D");
    }

    bool isBDS_8DValid(void)
    {
        return isValid("BDS_8D");

    }

    void setBDS_8C(bool value)
    {
        write("BDS_8C",value);
    }

    bool getBDS_8C(void)

    {
        return getBool("BDS_8C");
    }

    bool isBDS_8CValid(void)
    {
        return isValid("BDS_8C");

    }

    void setBDS_8B(bool value)
    {
        write("BDS_8B",value);
    }

    bool getBDS_8B(void)

    {
        return getBool("BDS_8B");
    }

    bool isBDS_8BValid(void)
    {
        return isValid("BDS_8B");

    }

    void setBDS_8A(bool value)
    {
        write("BDS_8A",value);
    }

    bool getBDS_8A(void)

    {
        return getBool("BDS_8A");
    }

    bool isBDS_8AValid(void)
    {
        return isValid("BDS_8A");

    }

    void setBDS_89(bool value)
    {
        write("BDS_89",value);
    }

    bool getBDS_89(void)

    {
        return getBool("BDS_89");
    }

    bool isBDS_89Valid(void)
    {
        return isValid("BDS_89");

    }

    void setBDS_88(bool value)
    {
        write("BDS_88",value);
    }

    bool getBDS_88(void)

    {
        return getBool("BDS_88");
    }

    bool isBDS_88Valid(void)
    {
        return isValid("BDS_88");

    }

    void setBDS_87(bool value)
    {
        write("BDS_87",value);
    }

    bool getBDS_87(void)

    {
        return getBool("BDS_87");
    }

    bool isBDS_87Valid(void)
    {
        return isValid("BDS_87");

    }

    void setBDS_86(bool value)
    {
        write("BDS_86",value);
    }

    bool getBDS_86(void)

    {
        return getBool("BDS_86");
    }

    bool isBDS_86Valid(void)
    {
        return isValid("BDS_86");

    }

    void setBDS_85(bool value)
    {
        write("BDS_85",value);
    }

    bool getBDS_85(void)

    {
        return getBool("BDS_85");
    }

    bool isBDS_85Valid(void)
    {
        return isValid("BDS_85");

    }

    void setBDS_84(bool value)
    {
        write("BDS_84",value);
    }

    bool getBDS_84(void)

    {
        return getBool("BDS_84");
    }

    bool isBDS_84Valid(void)
    {
        return isValid("BDS_84");

    }

    void setBDS_83(bool value)
    {
        write("BDS_83",value);
    }

    bool getBDS_83(void)

    {
        return getBool("BDS_83");
    }

    bool isBDS_83Valid(void)
    {
        return isValid("BDS_83");

    }

    void setBDS_82(bool value)
    {
        write("BDS_82",value);
    }

    bool getBDS_82(void)

    {
        return getBool("BDS_82");
    }

    bool isBDS_82Valid(void)
    {
        return isValid("BDS_82");

    }

    void setBDS_81(bool value)
    {
        write("BDS_81",value);
    }

    bool getBDS_81(void)

    {
        return getBool("BDS_81");
    }

    bool isBDS_81Valid(void)
    {
        return isValid("BDS_81");

    }

    void setBDS_80(bool value)
    {
        write("BDS_80",value);
    }

    bool getBDS_80(void)

    {
        return getBool("BDS_80");
    }

    bool isBDS_80Valid(void)
    {
        return isValid("BDS_80");

    }

    void setBDS_7F(bool value)
    {
        write("BDS_7F",value);
    }

    bool getBDS_7F(void)

    {
        return getBool("BDS_7F");
    }

    bool isBDS_7FValid(void)
    {
        return isValid("BDS_7F");

    }

    void setBDS_7E(bool value)
    {
        write("BDS_7E",value);
    }

    bool getBDS_7E(void)

    {
        return getBool("BDS_7E");
    }

    bool isBDS_7EValid(void)
    {
        return isValid("BDS_7E");

    }

    void setBDS_7D(bool value)
    {
        write("BDS_7D",value);
    }

    bool getBDS_7D(void)

    {
        return getBool("BDS_7D");
    }

    bool isBDS_7DValid(void)
    {
        return isValid("BDS_7D");

    }

    void setBDS_7C(bool value)
    {
        write("BDS_7C",value);
    }

    bool getBDS_7C(void)

    {
        return getBool("BDS_7C");
    }

    bool isBDS_7CValid(void)
    {
        return isValid("BDS_7C");

    }

    void setBDS_7B(bool value)
    {
        write("BDS_7B",value);
    }

    bool getBDS_7B(void)

    {
        return getBool("BDS_7B");
    }

    bool isBDS_7BValid(void)
    {
        return isValid("BDS_7B");

    }

    void setBDS_7A(bool value)
    {
        write("BDS_7A",value);
    }

    bool getBDS_7A(void)

    {
        return getBool("BDS_7A");
    }

    bool isBDS_7AValid(void)
    {
        return isValid("BDS_7A");

    }

    void setBDS_79(bool value)
    {
        write("BDS_79",value);
    }

    bool getBDS_79(void)

    {
        return getBool("BDS_79");
    }

    bool isBDS_79Valid(void)
    {
        return isValid("BDS_79");

    }

    void setBDS_78(bool value)
    {
        write("BDS_78",value);
    }

    bool getBDS_78(void)

    {
        return getBool("BDS_78");
    }

    bool isBDS_78Valid(void)
    {
        return isValid("BDS_78");

    }

    void setBDS_77(bool value)
    {
        write("BDS_77",value);
    }

    bool getBDS_77(void)

    {
        return getBool("BDS_77");
    }

    bool isBDS_77Valid(void)
    {
        return isValid("BDS_77");

    }

    void setBDS_76(bool value)
    {
        write("BDS_76",value);
    }

    bool getBDS_76(void)

    {
        return getBool("BDS_76");
    }

    bool isBDS_76Valid(void)
    {
        return isValid("BDS_76");

    }

    void setBDS_75(bool value)
    {
        write("BDS_75",value);
    }

    bool getBDS_75(void)

    {
        return getBool("BDS_75");
    }

    bool isBDS_75Valid(void)
    {
        return isValid("BDS_75");

    }

    void setBDS_74(bool value)
    {
        write("BDS_74",value);
    }

    bool getBDS_74(void)

    {
        return getBool("BDS_74");
    }

    bool isBDS_74Valid(void)
    {
        return isValid("BDS_74");

    }

    void setBDS_73(bool value)
    {
        write("BDS_73",value);
    }

    bool getBDS_73(void)

    {
        return getBool("BDS_73");
    }

    bool isBDS_73Valid(void)
    {
        return isValid("BDS_73");

    }

    void setBDS_72(bool value)
    {
        write("BDS_72",value);
    }

    bool getBDS_72(void)

    {
        return getBool("BDS_72");
    }

    bool isBDS_72Valid(void)
    {
        return isValid("BDS_72");

    }

    void setBDS_71(bool value)
    {
        write("BDS_71",value);
    }

    bool getBDS_71(void)

    {
        return getBool("BDS_71");
    }

    bool isBDS_71Valid(void)
    {
        return isValid("BDS_71");

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