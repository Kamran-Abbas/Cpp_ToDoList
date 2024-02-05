#include "func.h"
#include <fstream>




//count how many files there are in the file using counter then create an array of size counter

bool anyFiles()
{
    std::fstream checkFile;
    checkFile.open("ToDos/head.txt", std::ios::out);
    if (checkFile.is_open())
    {
        while (!eof())
        {
            
        }
    }
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