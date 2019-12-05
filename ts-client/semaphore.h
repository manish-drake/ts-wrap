#ifndef SEMAPHORE_H
#define SEMAPHORE_H

#include <condition_variable>
#include <mutex>

/*!
  @class Functions Semaphore, wait,signal .
*/
class Semaphore
{
  private:
    int m_counter;
    std::condition_variable conditionVar;
    std::mutex mtx;
    bool m_dormant;

  public:
    Semaphore() = default;
    Semaphore(bool dormant) : m_dormant{dormant} {}
    void wait()
    {
        std::unique_lock<std::mutex> lock(mtx);
        while (!m_counter)
            conditionVar.wait(lock);
        --m_counter;
    }
    void signal()
    {
        std::unique_lock<std::mutex> lock(mtx);
        ++m_counter;
        conditionVar.notify_one();
    }
};

#endif //SEMAPHORE_H
