#include<iostream>
#include"Teacher.h"

/// Creates a teacher with personal information and a subject.
Teacher::Teacher(int i, string n, int a, string s)
    : Person(i, n, a)
{
    Subject = s;
}
/// Displays the teacher's personal information and subject.
void Teacher::displayInfo()
{
    Person::displayInfo();
    cout << "Subject = " << Subject << endl;
}

/// Updates the teacher's subject.
void Teacher:: setSubject(string s)
{
    Subject = s;
}