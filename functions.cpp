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
            numLines++;
        }
    }

    if (numLines == 0)
    {
        checkFile.close();
        return 0;
    }
    else
    {
        
        
        if (checkFile.is_open())
        {
            while (std::getline(checkFile, line))
            {
                for (int i = 0; i < numLines - 1 ; i++)
                {
                    checkFile >> arr[i];
                }
            }
        }
        
    }
    checkFile.close();
    return numLines;
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