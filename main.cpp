#include <iostream>
#include "stdlib.h"

using std::cout;

int main()
{
    bool x = true;
    int choice; 
    while (x == true)
    {
        cout << "Select function\n";
        cout << "1. View list\n";
        cout << "2. Add task\n";
        cout << "3. Remove task\n"; 
        cout << "4. Exit\n";
        cout << "Option: ";
        std::cin >> choice;

        if (choice == 1)
        {
            cout << choice; x = false;
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
        else
        {
            std::system("CLS");
                cout << "Invalid Option! Try again.\n";
        }
    }

    return 0; 
}
