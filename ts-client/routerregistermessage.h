/*
 * RouterRegisterMessage.h
 *
 *  Created on: Oct 26, 2017
 *      Author: qt
 */

#ifndef ROUTERREGISTERMESSAGE_H_
#define ROUTERREGISTERMESSAGE_H_

#include "message.h"

/*!
  @class Functions getEndPointName Returns json data NAME TAG as String, getEndPointID Returns ID TAG as integer,
  getEndPointURI Returns ADDRESS URI TAG as string, setDynamic , isDynamic Returns DYNAMIC TAG as boolean.
*/
class RouterRegisterMessage:public Message {
public:
    static const int MESSAGE_ID=1000;
public:
                RouterRegisterMessage();
                RouterRegisterMessage(Json::Value value);
    virtual 	~RouterRegisterMessage();
    std::string	getEndPointName();
    void		setEndPointName(std::string name);
    int			getEndPointID();
    void		setEndPointID(int id);
    std::string getEndPointURI();
    void		setEndPointURI(std::string uri);
    void		setDynamic(bool b);
    bool		isDynamic();
};

#endif /* ROUTERREGISTERMESSAGE_H_ */
