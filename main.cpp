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
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice){
            case 1:

                cout << "Enter file name: ";
                cin >> filename;

                writeNote(filename);

                break;

            case 2:

                cout << "Enter file name: ";
                cin >> filename;

                readNote(filename);

                break;

            case 3:

                cout << "Enter file name: ";
                cin >> filename;

                updateNote(filename);

                break;

            case 4:

                cout << "Program closed." << endl;

                break;

            default:

                cout << "Invalid choice. Try again." << endl;
                    }

    }
    while (choice != 4);

    return 0;
}
