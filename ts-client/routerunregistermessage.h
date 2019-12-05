/*
 * RouterRegisterMessage.h
 *
 *  Created on: Oct 26, 2017
 *      Author: qt
 */

#ifndef ROUTERUNREGISTERMESSAGE_H_
#define ROUTERUNREGISTERMESSAGE_H_

#include "message.h"

/*!
  @class Functions getEndPointName Returns Name tag as integer, getEndPointID Returns ID tag as integer.
*/
class RouterUnregisterMessage:public Message {
public:
    static const int MESSAGE_ID=1001;
public:
                RouterUnregisterMessage();
                RouterUnregisterMessage(Json::Value value);
    virtual 	~RouterUnregisterMessage();
    std::string	getEndPointName();
    void		setEndPointName(std::string name);
    int			getEndPointID();
    void		setEndPointID(int id);

};

#endif /* ROUTERREGISTERMESSAGE_H_ */
