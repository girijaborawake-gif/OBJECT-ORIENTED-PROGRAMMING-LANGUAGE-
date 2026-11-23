#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
int roll;
string name;
float marks;

//writing student details into a file
ofstream file("student.txt",ios::app);

cout<<"ENTER ROLL NUMBER:";
cin>>roll;

cout<<"ENTER STUDENT NAME:";
cin>>ws;
//ws removes the white space
getline(cin,name);

cout<<"ENTER MARKS:";
cin>>marks;

file<<roll<<endl;
file<<name<<endl;
file<<marks<<endl;

file.close();
//closes the file after writing

cout<<"\n STUDENT RECORD SAVED SUCCESSFULLY!"<<endl;

//reading student details from the file
ifstream readFile("student.txt");

cout<<"\n STUDENT RECORDS:"<<endl;

while(readFile>>roll)
{
//while loop will get executed for repeat the case
readFile>>ws;
getline(readFile,name);
readFile>>marks;

cout<<"\n ROLL NUMBER:"<<roll;
cout<<"\n NAME:"<<name;
cout<<"\n MARKS:"<<marks<<endl;
}

readFile.close();

return 0;
}
