#include "functions.h"
#include <iostream>
#include <fstream>
#include <string>




//count how many files there are in the file using counter then create an array of size counter

int anyFiles(std::string arr[])
{
    int numLines = 0;
    std::string line;
    std::ifstream checkFile("ToDos/head.txt");
    // checkFile.open("ToDos/head.txt", std::ios::out);
    if (checkFile.is_open())
    {
        while (std::getline(checkFile, line))
        {
            arr[numLines] = line;
            numLines++;
            
        }
    }

    if (numLines == 0)
    {
        checkFile.close();
        return 0;
    }
    checkFile.close();
    return numLines;
}

void viewList(std::string listName)
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