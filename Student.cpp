#include "Student.h"
#include <iostream>
#include <cstring>
using namespace std;

// Assign studentId and name
void Student::assignDetails(int id,const char n[]) 
{
    studentId=id;
    strcpy (name,n);
}

// Display StudentId and Name
void Student::display() 
{
    cout<<"Student id :"<<studentId<<endl;
    cout<<"Student name :"<<name<<endl;
}
