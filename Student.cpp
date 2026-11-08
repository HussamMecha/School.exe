#include"Student.h"
#include<iostream>
/// Creates a student with personal information and a grade.
Student::Student(int i, string n, int a, int g)
    :Person(i, n, a)
{
    Grade = g;
}
/// Displays the student's personal information and grade.
void Student::displayInfo() 
{
    Person::displayInfo();
    cout << "Grade = " << Grade << endl;
}


/// Updates the student's grade.
void Student::setGrade(int g)
{
    Grade = g;
}