#ifndef DATASOURCE_H
#define DATASOURCE_H

#include "json.h"
#include <iostream>

/*!
  @class Function Update Used to edit the data by id and by key, Clear is used for clearing the data, and setting time stamp equal to zero,
  Data returns the Josn data, Timestamp returns timestamp .
*/
class Datasource
{
    Json::Value m_data;
    long m_timestamp = 0;
    std::string m_name;
public:
    Datasource() = default;
    bool Update(const Json::Value &newData);
    bool Update(const char *key, const Json::Value &value);
    void Clear();
    const Json::Value *Data() const
    {
        return &m_data;
    }
    inline long Timestamp() const
    {
        return m_timestamp;
    }
};

#endif // DATASOURCE_H
