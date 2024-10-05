#include "log.h"
#include <string>
#include <fstream>
#include <iostream>

Log::Log() : m_time{time(NULL)}
{}

void Log::save(const std::string& path){
    std::ofstream file(path, std::ios::app);
    if (!file.good())
    {
        fprintf(stdout, "ajć trajć, plik nie plikuje!\r\n");
        return;
    }
    file << m_time << std::endl;
}