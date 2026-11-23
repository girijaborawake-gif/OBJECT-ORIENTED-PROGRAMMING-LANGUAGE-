#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    int id;
    string name, department;
    float salary;

    // Writing employee details into a file
    ofstream file("employee.txt", ios::app);

    cout << "ENTER EMPLOYEE ID:";
    cin >> id;

    cout << "ENTER EMPLOYEE NAME:";
    cin >> ws;
    // ws removes the white space
    getline(cin, name);

    cout << "ENTER DEPARTMENT:";
    getline(cin, department);

    cout << "ENTER SALARY:";
    cin >> salary;

    file << id << endl;
    file << name << endl;
    file << department << endl;
    file << salary << endl;

    file.close();
    // closes the file after writing

    cout << "\nEMPLOYEE RECORD SAVED SUCCESSFULLY!" << endl;

    // Reading employee details from the file
    ifstream readFile("employee.txt");

    cout << "\nEMPLOYEE RECORDS:" << endl;

    while (readFile >> id)
    {
        // while loop will execute repeatedly
        readFile >> ws;
        getline(readFile, name);
        getline(readFile, department);
        readFile >> salary;

        cout << "\nEMPLOYEE ID:" << id;
        cout << "\nNAME:" << name;
        cout << "\nDEPARTMENT:" << department;
        cout << "\nSALARY:" << salary << endl;
    }

    readFile.close();

    return 0;
}
