#include "notepad.h"

void writeNote(string filename)
{
    ofstream file(filename);

    if (file.is_open())
    {
        string text;

        cout << "\nWrite a message you want displayed in your notepad file" << endl;
        cout << "Type Stop when finished." << endl;

        cin.ignore();

        while (true)
        {
            getline(cin, text);

            if (text == "END")
            {
                break;
            }

            file << text << endl;
        }

        file.close();

        cout << "Note saved successfully." << endl;
    }
    else
    {
        cout << "Unable to create file." << endl;
    }
}

void readNote(string filename)
{
    ifstream file(filename);

    if (file.is_open())
    {
        string line;

        cout << "\n===== YOUR NOTES =====\n" << endl;

        while (getline(file, line))
        {
            cout << line << endl;
        }

        file.close();
    }
    else
    {
        cout << "File not found." << endl;
    }
}

void updateNote(string filename)
{
    ofstream file(filename, ios::app);

    if (file.is_open())
    {
        string text;

        cout << "Enter your message to add" << endl;
        cout << "Type END when finished." << endl;

        cin.ignore();

        while (true)
        {
            getline(cin, text);

            if (text == "Stop")
            {
                break;
            }

            file << text << endl;
        }

        file.close();

        cout << "Your text was added successfully." << endl;
    }
    else
    {
        cout << "Unable to open the file." << endl;
    }
}
