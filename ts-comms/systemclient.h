#ifndef SYSTEMCLIENT_H
#define SYSTEMCLIENT_H

#include "appclientbase.h"

typedef uint32_t uint;


/*!
  @class Function SetLevel sets the log level and address for the router client,
   SetModule It sets the module level and address for the router client.
*/
class SystemClient : AppClientBase
{
  private:
    int getServiceDestination() const override
    {
        return 12;
    }

  public:
    SystemClient(RouterClient &routerClient);
    void SetLevel(int level);
    void SetModule(uint setBits, uint clearBits);
    UINT GetFPGAVersion();
};

#endif //SYSTEMCLIENT_H
