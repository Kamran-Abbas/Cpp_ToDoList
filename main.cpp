#include <iostream>
#include <fstream>
#include "stdlib.h"

#include "functions.h"

const int MAX_SIZE = 50;
std::string lists[MAX_SIZE];

using std::cout;

//if num lists > 50 then get user to delete some
//data in lists begin with O (Incomplete) or X (complete)
//g++ main.cpp functions.cpp functions.h -o todo

//naming convention is 6 digits 



int main()
{

    

    // char* files;
    // std::cin >> files;
    // system("ls");
    bool x = true;
    int choice; 
    while (x == true)
    {
        cout << "Select function\n";
        cout << "1. View list\n";
        cout << "2. Add task\n";
        cout << "3. Remove task\n"; 
        cout << "4. Create/Delete list\n";
        cout << "5. Exit\n";
        cout << "Option: ";
        std::cin >> choice;
        cout << std::endl;

        int FILES = anyFiles(lists);
        

        if (choice == 1)
        {
            std::string listName;
            int listChoice;
            bool listCheck = true;
            //cout << choice; 
            // x = false;
            if (FILES == 0)
            {
                cout << "There are no lists that exist\n ";
                // x = true;
            }
            else 
            {
                cout << "Choose a list to view: \n";
                for (int i = 0; i < FILES; i++)
                {
                    cout << i+1 <<". " << lists[i] << "\n";
                }
                while (listCheck)
                {
                    cout << "Option: ";
                    std::cin >> listChoice;
                    if (listChoice > FILES || listChoice <= 0)
                    {
                        cout << "Invalid Option! Try Again\n";
                    }
                    else
                    {
                        listName = lists[listChoice - 1];
                        listCheck = false;
                    }
                }
                viewList(listName);

            }
            // cout << FILES << "\n";
        }
        else if (choice == 2)
        {
            std::string listName;
            int listChoice;
            bool listCheck = true;
            //cout << choice; 
            // x = false;
            if (FILES == 0)
            {
                cout << "There are no lists that exist\n ";
                // x = true;
            }
            else 
            {
                cout << "Choose a list to add to: \n";
                for (int i = 0; i < FILES; i++)
                {
                    cout << i+1 <<". " << lists[i] << "\n";
                }
                while (listCheck)
                {
                    cout << "Option: ";
                    std::cin >> listChoice;
                    if (listChoice > FILES || listChoice <= 0)
                    {
                        cout << "Invalid Option! Try Again\n";
                    }
                    else
                    {
                        listName = lists[listChoice - 1];
                        listCheck = false;
                    }
                }
                addTask(listName);

            }
        }
        else if (choice == 3)
        {
            std::string listName;
            int listChoice;
            bool listCheck = true;
            //cout << choice; 
            // x = false;
            if (FILES == 0)
            {
                cout << "There are no lists that exist\n ";
                // x = true;
            }
            else 
            {
                cout << "Choose a list to delete from: \n";
                for (int i = 0; i < FILES; i++)
                {
                    cout << i+1 <<". " << lists[i] << "\n";
                }
                while (listCheck)
                {
                    cout << "Option: ";
                    std::cin >> listChoice;
                    if (listChoice > FILES || listChoice <= 0)
                    {
                        cout << "Invalid Option! Try Again\n";
                    }
                    else
                    {
                        listName = lists[listChoice - 1];
                        listCheck = false;
                    }
                }
                removeTask(listName);
            }

        }
        else if (choice == 4)
        {
            int descion;
            cout << "Choose an option\n";
            cout << "1. Create a new list\n";
            cout << "2. Delete a list\n";
            cout << "3. Cancel\n";
            cout << "Choice: ";
            std::cin >> descion;
            cout << std::endl;

            if (descion == 1)
            {
                bool x = true
                while (x)
                {
                    if (FILES >= MAX_SIZE)
                    {
                        cout << "Error! - Too many lists! - Delete a list to create a new one \n";

                        //add code to delete to let the user delete the neccessary number of files

                    }
                    else 
                    {
                        x = false;
                    }
                }
                addTask()
            }
            else if (descion == 2)
            {
                deleteList(lists);
            }
        }
        else if (choice == 5)
        {
            cout << choice; x = false;
        }
        else
        {
            std::system("CLS");
                cout << "Invalid Option! Try again.\n";
        }
    }

    return 0; 
}
