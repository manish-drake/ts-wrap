#include "loggerf.h"

LoggerF::LoggerF(): LoggerF("")
{

}
/*!
  @brief Log file is created.
  @param[in] logHead is the log messages contains the state of application.
  @details Log file is created and named as per the current date and time.
*/
LoggerF::LoggerF(const char* logHead)
{
    // std::string logFilename("Z:\\git\\dllexp\\logging.log");
    // m_fp.open(logFilename);
    // this->Log({logHead});
}


/*!
  @brief Its a de-constructor which closes the file writing.
*/
LoggerF::~LoggerF()
{
    // m_fp.close();
}
