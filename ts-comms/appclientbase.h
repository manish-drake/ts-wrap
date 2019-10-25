#ifndef APPBASECLIENT_H
#define APPBASECLIENT_H

#include "routerclient.h"

class AppClientBase
{
protected:
    RouterClient &m_routerClient;
    virtual int getServiceDestination() const
    {
        return -1;
    }

public:
    AppClientBase(RouterClient &routerClient) : m_routerClient(routerClient)
    {
    }
};

#endif //APPBASECLIENT_H
