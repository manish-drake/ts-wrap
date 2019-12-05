/*
 * messsage.h
 *
 *  Created on: Oct 13, 2017
 *      Author: qt
 */

#ifndef MESSSAGE_H_
#define MESSSAGE_H_

#include "jsonmessagebase.h"

/*!
  @class Functions Message, getMessageID Returns jsondata as integer, setMessageID Assigns id to the json data ID_TAG.
*/
class Message : public JsonMessageBase
{
  public:
    Message();
    Message(int id);
    Message(Json::Value &value);
    virtual ~Message();
    int getMessageID();
    void setMessageID(int id);
};

#endif /* MESSSAGE_H_ */
