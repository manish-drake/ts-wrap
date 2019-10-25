///\file json_common.cpp
///\brief Application specific json definitions and functions

#include "json.h"

static Json::FastWriter  gWriter;

/*!
  @brief Writes gWriter object value in the json file.
  @param[in] obj.
*/
std::string toString(Json::Value obj)
{
    return gWriter.write(obj);
}


