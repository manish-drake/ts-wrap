#ifndef ZLISTENER_H
#define ZLISTENER_H

#include <functional>
#include <thread>
#include <memory>
#include <atomic>
#include <string>

class ZListener;
using std::string;

using lsn_callback = std::function<string(string)>;
using up_listener = std::unique_ptr<ZListener>;

/*!
  @class Functions RunAsync Sends the Zlistener message, Stop Sets the z_run to zero.
*/
class ZListener
{
    string m_localEndpoint;
    std::atomic<int> m_run;

public:
    void RunAsync(lsn_callback func);
    void Stop();
    lsn_callback m_callback;
    ZListener(string localEndpoint);
    inline string getLocalEndpoint() const
    {
        return m_localEndpoint;
    }
    inline int isRunning() const
    {
        return m_run;
    }
};

#endif // ZLISTENER_H
