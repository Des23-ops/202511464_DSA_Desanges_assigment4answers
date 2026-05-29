#include "notepad.h"

void writeFile(string filename)
{
    ofstream file(filename);

    string text;
    cout << "Write the message you displayed in your notepad file" << endl;
    cout << "Type END to stop writing." << endl;
    cin.ignore();
    while (true){
        getline(cin, text);
        if (text == "END"){
            break;
}
 file << text << endl;
    }
file.close();
cout << "File saved successfully." << endl;
}

void readFile(string filename){
    ifstream file(filename);
    string line;
if (!file)
    {
        cout << "File not found." << endl;
        return;
    }

    cout << "\nFile Contents\n" << endl;

    while (getline(file, line))
    {
        cout << line << endl;
    }

    file.close();
}

void appendFile(string filename)
{
    ofstream file(filename, ios::app);

    string text;

    cout << "\nEnter new text." << endl;
    cout << "Type END to stop." << endl;

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

    cout << "Text added successfully." << endl;
}
