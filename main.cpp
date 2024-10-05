#include <fstream>
#include <string>
#include <cstdlib>
#include "log.h"



void displayAvg(const std::string& path){


}

int main(int argc, char const *argv[])
{
    const std::string path = "logs.txt";
    switch (argc)
    {
    case 1:
        Log().save(path);
        break;
    case 2:

        break;
    
    default:
        fprintf(stdout, "help for help\r\n");
        break;
    }
    
    

    return 0;
}