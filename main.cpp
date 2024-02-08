#include <iostream>
#include <fstream>
#include "stdlib.h"

#include "functions.h"

const int MAX_SIZE = 50;
std::string lists[MAX_SIZE];
//if num lists > 50 then get user to delete some

//g++ main.cpp functions.cpp functions.h -o todo

//naming convention is 6 digits 
using std::cout;


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

        int FILES = anyFiles(lists);
        

        if (choice == 1)
        {
            //cout << choice; 
            x = false;
            if (FILES == 0)
            {
                cout << "There are no lists that exist\n ";
                x = true;
            }
            else 
            {
                for (int i = 0; i < FILES; i++)
                {
                    cout << lists[i];
                }

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
