#pragma once

#include <string>
#include <cstdint>
#include <time.h>

class Log
{
public:
    Log();
    
    void save(const std::string& path);

    // unsigned int year;
    // uint8_t month;
    // uint8_t day;
    // uint8_t hour;
    // uint8_t min;

private:
    time_t m_time;
};