#include "functions.h"
#include <iostream>
#include <fstream>
#include <string>




//count how many files there are in the file using counter then create an array of size counter

bool anyFiles()
{
    int numLines = 0;
    std::string line;
    std::ifstream checkFile("ToDos/head.txt");
    // checkFile.open("ToDos/head.txt", std::ios::out);
    if (checkFile.is_open())
    {
        while (std::getline(checkFile, line))
        {
            numLines++;
        }
    }
    if (numLines == 0)
    {
        return true;
    }
    return false;
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