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
    bool x = true;
    int choice;
    
    std::string line;
    std::fstream listFile("ToDos/" + listName + ".txt");

    std::cout << std::endl;
    if (listFile.is_open())
    {
        std::cout << "KEY: O = INCOMPLETE   X = COMPLETE \n";
        while (std::getline(listFile, line))
        {
            std::cout << line << "\n";
        }
        // system("pause");
        std::cout << std::endl;
    }

    do
    {
        std::cout << "Select an option: \n";
        std::cout << "1. Edit Status of task\n";
        std::cout << "2. Return to main menu\n";
        std::cout << "Option: ";
        std::cin >> choice;
        if (choice == 1)
        {
            bool y = true;
            int counter = 1;
            int listChoice;

            if (listFile.is_open())
            {
                std::cout << "KEY: O = INCOMPLETE   X = COMPLETE \n";
                while (std::getline(listFile, line))
                {
                    std::cout << counter << ". " << line << "\n";
                    counter++;
                }
                // system("pause");
                while (y)
                {
                    std::cout << std::endl;
                    std::cout << "Enter number of task to edit or enter 0 to return to main menu\n ";
                    std::cout << "Task: ";
                    std::cin >> listChoice;

                    if (listChoice = 0)
                    {
                        y = x = false;
                    } 
                    else
                    {
                        //add code to go to the line and change the status of the task
                    }
                }
                
            }
        }    
    }
    while (x);

    
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