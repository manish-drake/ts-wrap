/*
 * jsonBase.h
 *
 *  Created on: Oct 13, 2017
 *      Author: qt
 */

#ifndef JSONBASE_H_
#define JSONBASE_H_

#include <string>
#include "json.h"

/*!
  @class .
*/
class JsonMessageBase
{

  protected:
    Json::Value mjsonData;

  public:
    JsonMessageBase(){}
    virtual ~JsonMessageBase(){}
    virtual Json::Value toJSON() { return mjsonData; }
    virtual bool fromJSON(Json::Value jsonData)
    {
        mjsonData = jsonData;
        return true;
    }

    inline std::string toString()
    {
        Json::FastWriter writer;
        return writer.write(mjsonData);
    }
};
#endif /* JSONBASE_H_ */
