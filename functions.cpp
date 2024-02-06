#include "func.h"
#include <iostream>
#include <fstream>
#include <string>




//count how many files there are in the file using counter then create an array of size counter

bool anyFiles()
{
    std::string line;
    std::fstream checkFile;
    checkFile.open("ToDos/head.txt", std::ios::out);
    if (checkFile.is_open())
    {
        while (std::getline(checkFile, line))
        {
            std::cout << line << std::endl;
            std::cin >> line;
        }
    }
    return true;
}

void viewList()
{

}


void addTask()
{

}


void removeTask()
{

}


void newList()
{

}