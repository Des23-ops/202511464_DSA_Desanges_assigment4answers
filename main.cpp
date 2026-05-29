#include "notepad.h"

int main()
{
    int choice;
    string filename;

    do
    {
        cout << "\t\t A SIMPLE NOTEPAD " << endl;
        cout << "\t\t1. Write the file" << endl;
        cout << "\t\t2. Read the file" << endl;
        cout << "\t\t3. Append the file" << endl;
        cout << "\t\t 4. Exit" << endl;

        cout << "Enter choice: ";
        cin >> choice;

        switch(choice){
case 1:
                cout << "Enter your file name: ";
                cin >> filename;
                writeFile(filename);
                break;
case 2:
                cout << "Enter your file name: ";
                cin >> filename;
                readFile(filename);
                break;
case 3:
                cout << "Enter your file name: ";
                cin >> filename;
                appendFile(filename);
                break;
case 4:
                cout << "byeee!" << endl;
                break;

            default:
                cout << "Invalid choice." << endl;
        }

    } 
while(choice != 4);

    return 0;
}
