#ifndef __ModeSFormats1of3_h
#define __ModeSFormats1of3_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CModeSFormats1of3:public TServerMessage
{
    const int mFormatVersion = 0;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x25;
    CModeSFormats1of3(void)
    {
        setCmdID(mCmdID);
    }
    CModeSFormats1of3(Json::Value obj):TServerMessage(obj)
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

    void setUfInterrogation(std::vector<unsigned int>& value)
    {
        write("UfInterrogation",value);
    }

    std::vector<unsigned int> getUfInterrogation(std::vector<unsigned int> arr)

    {
        return getArray("UfInterrogation",arr);
    }

    bool isUfInterrogationValid(void)
    {
        return isValid("UfInterrogation");

    }

    void setDfReply(std::vector<unsigned int>& value)
    {
        write("DfReply",value);
    }

    std::vector<unsigned int> getDfReply(std::vector<unsigned int> arr)

    {
        return getArray("DfReply",arr);
    }

    bool isDfReplyValid(void)
    {
        return isValid("DfReply");

    }

    void setResult(std::vector<bool>& value)
    {
        write("Result",value);
    }

    std::vector<bool> getResult(std::vector<bool> arr)

    {
        return getArray("Result",arr);
    }

    bool isResultValid(void)
    {
        return isValid("Result");

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