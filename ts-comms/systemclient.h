#ifndef SYSTEMCLIENT_H
#define SYSTEMCLIENT_H
#include <thread>
#include <functional>
#include "appclientbase.h"

typedef uint32_t uint;


/*!
  @class Function SetLevel sets the log level and address for the router client,
   SetModule It sets the module level and address for the router client.
*/
class SystemClient : AppClientBase
{
    class Async
    {
        std::thread m_th;
        static void runTask(std::function<UINT()> task, UINT *result)
        {
            *result = task();
        }
    public:
        Async(std::function<UINT()> task):m_th(runTask, task, &m_result)
        {

        }
        UINT m_result;
        UINT get()
        {
            m_th.join();
            return m_result;
        }
    };

  private:
    int getServiceDestination() const override
    {
        return 12;
    }

  public:
    SystemClient(RouterClient &routerClient);
    void SetLevel(int level);
    void SetModule(uint setBits, uint clearBits);
    Async GetFPGAVersionAsync();
};

#endif //SYSTEMCLIENT_H
