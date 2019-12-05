#include "datasource.h"
#include <ctime>

/*!
  @brief Used to edit the data by id.
  @param[in] newData holds the json value.
  @details It sets dataDidChange to false and further it takes newData collection in the variable Id after that it checks for particluar data
  Id is not equals to newData Id if true then it sets the same and sets dataDidChange to true.
*/
bool Datasource::Update(const Json::Value &newData)
{
    bool dataDidChange = false;
    for (auto const& id : newData.getMemberNames()){
        if(m_data[id] != newData[id]){
            m_data[id] = newData[id];
            dataDidChange = true;
        }
    }

    if(dataDidChange)
    {
        m_timestamp = time(0);
    }

    return dataDidChange;
}

/*!
  @brief Update is used to edit the data by key.
  @param[in] value is the json value, key .
  @details It sets dataDidChange to false and then checks the value for the particular key if it doesnt match then it sets the same
   and further it sets dataDidChange to true and returns it.
*/
bool Datasource::Update(const char *key, const Json::Value &value)
{
    bool dataDidChange = false;
    if(m_data[key] != value)
    {
        m_data[key] = value;
        dataDidChange = true;
    }
    return dataDidChange;
}

/*!
  @brief Clear is used for clearing the data, and setting time stamp equal to zero.
*/
void Datasource::Clear()
{
    m_data.clear();
    m_timestamp = 0;
}
