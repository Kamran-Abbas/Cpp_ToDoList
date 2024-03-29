#include "functions.h"
#include <iostream>
#include <fstream>
#include <string>
#include <stdio.h>




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
        listFile.close();
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

            std::fstream listFile("ToDos/" + listName + ".txt");
            if (listFile.is_open())
            {
                std::cout << "KEY: O = INCOMPLETE   X = COMPLETE \n";
                while (std::getline(listFile, line))
                {
                    std::cout << counter << ". " << line << "\n";
                    counter++;
                }
                
                listFile.close();
                // system("pause");
                while (y)
                {
                    std::cout << std::endl;
                    std::cout << "Enter number of task to edit or enter 0 to return to main menu\n";
                    std::cout << "Task: ";
                    std::cin >> listChoice;

                    if (listChoice == 0)
                    {
                        y = x = false;
                    }
                    else if (listChoice > (counter - 1))
                    {
                        std::cout << "Invalid Options - Try Again \n";
                    } 
                    else
                    {
                        //add code to go to the line and change the status of the task
                        counter = 1;
                        std::fstream listFile("ToDos/" + listName + ".txt");
                        std::fstream tmpFile;
                        tmpFile.open("ToDos/tmp.txt", std::fstream::out);
                        if (tmpFile.is_open())
                        {
                            if (listFile.is_open())
                            {
                                while (std::getline(listFile, line))
                                {
                                    // std::cout << line[0];
                                    if (counter == listChoice)
                                    {
                                        if (line[0] == 'O')
                                        {
                                            line[0] = 'X';
                                        }
                                        else if (line[0] == 'X')
                                        {
                                            line[0] = 'O';
                                        }     
                                    }
                                    tmpFile << line << std::endl;
                                    counter++;
                                }
                            }
                        }
                        tmpFile.close();
                        listFile.close();

                        // std::fstream listFile;
                        listFile.open("ToDos/" + listName + ".txt", std::fstream::out);

                        tmpFile.open("ToDos/tmp.txt");

                        if (listFile.is_open())
                        {
                            if (tmpFile.is_open())
                            {
                                while (std::getline(tmpFile, line))
                                {
                                    listFile << line << std::endl;
                                }
                            }  
                            tmpFile.close();
                        }
                    }   listFile.close();   
                    std::cout << "Status changed successfully\n";

                    std::fstream listFile("ToDos/" + listName + ".txt");
                    counter = 1;
                    if (listFile.is_open())
                    {
                        std::cout << "KEY: O = INCOMPLETE   X = COMPLETE \n";
                        while (std::getline(listFile, line))
                        {
                            std::cout << counter << ". " << line << "\n";
                            counter++;
                        }
                    }
                }
            }
        }
        else if (choice == 2)
        {
            x = false;
            std::cout << std::endl;
        }    
    }
    while (x);

    
}


void addTask(std::string listName)
{
    bool x = true;
    while (x)
    {
        
        std::string choice;
        
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
            listFile.close();
        }

        std::string confirm;

    
        std::cout << "Type the task to add of enter 0 to return to the main menu: ";
        std::cin >> choice;

        if (choice == "0")
        {x = false;}
        else
        {
            std::cout << "Enter 'Y' to confirm that you would like to add '" + choice + "' to the list: ";
            std::cin >> confirm;
            if (confirm != "Y")
            {}
            else
            {
                std::ofstream outListFile("ToDos/" + listName + ".txt", std::ios::app);
                outListFile << "O " << choice << std::endl;
                outListFile.close();
            }

        }
    }



}


void removeTask(std::string listName)
{
    bool x = true;
    while (x)
    {
        
        std::string choice;
        
        std::string line;
        int counter = 1;

        std::fstream listFile("ToDos/" + listName + ".txt");

        std::cout << std::endl;
        if (listFile.is_open())
        {
            std::cout << "KEY: O = INCOMPLETE   X = COMPLETE \n";
            while (std::getline(listFile, line))
            {
                std::cout << counter << ". " << line << "\n";
                counter++;
            }
            // system("pause");
            std::cout << std::endl;
            listFile.close();
        }

        int choices;
        bool y = true;
        while (y)
        {
            std::cout << "Enter the number of the task to delete or 0 to go back to the main menu\n";
            std::cout << "Task: ";
            std::cin >> choices;
            if (choices == 0)
            {
                x = y = false;
                // std::cout << "test 0" <<std::endl;
            }
            else if(choices > counter - 1)
            {
                std::cout << "Invalid Option - Try Again! \n";
            } 
            else
            {
                counter = 1;
                listFile.open("ToDos/" + listName + ".txt");
                // std::cout << "test 1";
                std::fstream tmpFile;
                tmpFile.open("ToDos/tmp.txt", std::fstream::out);
                // std::cout << "test 2";
                if (listFile.is_open())
                {
                    // std::cout << "test 3";
                    if (tmpFile.is_open())
                    {
                        // std::cout << "test 4";
                        while (std::getline(listFile, line))
                        {
                            if (counter != choices)
                            {
                                // std::cout << "test 5";
                                tmpFile << line << std::endl;
                            }
                            counter++;
                        }
                        
                    }
                }
                listFile.close();
                tmpFile.close();
                // std::cout << "test 6";

                listFile.open("ToDos/" + listName + ".txt", std::fstream::out);
                tmpFile.open("ToDos/tmp.txt", std::fstream::in);

                if (listFile.is_open())
                {
                    if (tmpFile.is_open())
                    {
                        while (std::getline(tmpFile, line))
                        {
                            listFile << line << std::endl;
                            // std::cout << "test 7";
                        }
                    }
                }
                listFile.close();
                tmpFile.close();
            }
        }
    }
}


void makeList()
{
    //add code to create a newList and add it to head.txt
    std::string listName;
    std::cout << std::endl << "Enter a name for the list or enter 0 to cancel: ";
    std::cin >> listName;

    if (listName == "0")
    {
        return;
    } 
    std::fstream newList("ToDos/" + listName + ".txt", std::ios::out);
    std::fstream headFile("ToDos/head.txt", std::ios::app);
    headFile << "\n" << listName;
}

bool deleteList(std::string arr[], int numLists)
{

    const std::string headPath = "ToDos/head.txt";
    const std::string tmpPath = "ToDos/tmp.txt";
    std::string fileToDelete;
    for (int i = 0; i < numLists; i++)
    {
        std::cout << i + 1 << ". " << arr[i] << "\n";
    }
    int choice;
    bool x = true;
    while (x)
    {
        std::cout << "Enter the number for the list to delete or 0 to cancel: ";
        std::cin >> choice;
        if (choice == 0)
        {
            return false;
        }
        else if (choice > numLists || choice < 0)
        {
            std::cout << "Invalid - Try Again\n";
        }
        else
        {
            fileToDelete = "ToDos/" + arr[choice - 1] + ".txt";
            x = false;
        }
    }

    if (remove(fileToDelete.c_str()) != 0)
    {
        std::cout << "Error occurred! - Try Again\n";
        return false;
    }

    int counter = 1;
    int linesWritten = 0;
    std::string line;
    std::fstream headFile;
    std::fstream tmpFile;
    headFile.open(headPath);
    tmpFile.open(tmpPath, std::ios::out);
    if (headFile.is_open())
    {
        if (tmpFile.is_open())
        {
            while(getline(headFile, line))
            {
                if (counter != choice)
                {
                    if (linesWritten != 0)
                    {
                        tmpFile << "\n" << line;
                    }
                    else
                    {
                        tmpFile << line;
                        linesWritten++;
                    }
                }
                counter++;
            }
        }
    }
    headFile.close();
    tmpFile.close();

    linesWritten = 0;
    headFile.open(headPath, std::ios::out);
    tmpFile.open(tmpPath);
    if (headFile.is_open())
    {
        if (tmpFile.is_open())
        {
            while(getline(tmpFile, line))
            {
                if (linesWritten != 0)
                {
                    headFile << "\n" << line; 
                }
                else
                {
                    headFile << line;  
                    linesWritten++;
                }
            }
        }
    }
    headFile.close();
    tmpFile.close();
    return true;
}