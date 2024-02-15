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
                    if (listChoice > FILES)
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
            cout << choice; x = false;
        }
        else if (choice == 3)
        {
            cout << choice; x = false;
        }
        else if (choice == 4)
        {
            cout << choice; x = false;
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
