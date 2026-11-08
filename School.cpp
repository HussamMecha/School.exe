#include"School.h"
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cctype>
#include"Person.h"
#include"Student.h"
#include"Teacher.h"
#include<conio.h>

using namespace std;

namespace
{
    bool isValidName(const string& name)
    {
        return !name.empty() && name.length() >= 3 && name.length() <= 100 &&
            all_of(name.begin(), name.end(), [](unsigned char character)
                {
                    return isalpha(character);
                });
    }
}

/// Adds a student to the school.
void School::addstudent()
{
    int i, a, c;
    string n;
    cout << endl;
    cout << "Enter Student ID: ";
   
        while (!(cin >> i) || i <= 0)
        {
            cout << "Invalid input. Please enter a valid positive integer for ID" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    
    cout << "Enter Student Name: ";
    while (!(cin >> n) || !isValidName(n))
    {
        cout << "Invalid input. Please enter a valid string for Name" << endl;
        cin.clear();        
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    cout << "Enter Student Age: ";
    while (!(cin >> a) || !(a > 6) || !(a < 20))
    {
        cout << "Invalid input. Please enter a valid positive integer for Age And not Higher Than 19" << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    cout << "Enter Student Grade: ";
    while (!(cin >> c))
    {
        cout << "Invalid input. Please enter a valid integer for Grade" << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    cout << endl;
    Students.emplace_back(i, n, a, c);
    People.push_back(&Students.back());
    

}


/// Adds a teacher to the school.
void School::addteacher()
{
    int id, age;
    string name, subject;
    cout << "Enter Teacher ID: ";
    while (!(cin >> id) || id <= 0)
    {
        cout << "Invalid input. Please enter a valid positive integer for ID" << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    cout << "Enter Teacher Name: ";
    while (!(cin >> name) || !isValidName(name))
    {
        cout << "Invalid input. Please enter a valid string for Name" << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    cout << "Enter Teacher Age: ";
    while (!(cin >> age) || age <= 0 || age > 60 || age <= 22)
    {
        if (age > 60)
        {
            cout << "Too Old.." << endl;
            continue;
        }
        else if (age <= 22)
        {
            cout << "Too Young.." << endl;
            continue;
        }
        else
        {
            cout << "Invalid input. Please enter a valid positive integer for Age" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        cout << "Invalid input. Please enter a valid integer for Age" << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    cout << "Enter Teacher Subject: ";
    while (!(cin >> subject))
    {
        cout << "Invalid input. Please enter a valid string for Subject" << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    Teachers.emplace_back(id, name, age, subject);
    People.push_back(&Teachers.back());
}


/// Displays information for all registered students.
void School::  showAllstu()
{
    for (Student student : Students)

    {
        student.displayInfo();
        cout << "--------------------\n";
        cout << endl;
    }
}


/// Displays information for all registered teachers.
void School::showAllteach()
{
    for (Teacher teacher : Teachers)
    {
        teacher.displayInfo();
        cout << "--------------------\n";
        cout << endl;
    }
}


/// Displays information for all students and teachers.
void School::showAll()
{
    
    cout << "Students Information : " << endl;
    cout << endl;
    showAllstu();
    cout << "====================================" << endl;
    cout << endl;
    cout << "Teachers Information : " << endl;
    cout << endl;
    showAllteach();
    cout << endl;
}
/// Finds and displays a student by ID.
void School::findstu()
{
    int id;
    cout << "Enter Student ID to find: ";
    while (!(cin >> id))
    {
        cout << "Invalid input. Please enter a valid integer for ID" << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    for (Student student : Students)
    {
        if (student.getID() == id)
        {
            student.displayInfo();
            return;
        }
        else
        {
            cout << "Not Found....." << endl;
        }
    }
}


/// Finds and displays a teacher by ID.
void School::findteach()
{
    int id;
    cout << "Enter Teacher ID to find: ";
    while (!(cin >> id))
    {
        cout << "Invalid input. Please enter a valid integer for ID" << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    for (Teacher teacher : Teachers)
    {
        if (teacher.getID() == id)
        {
            teacher.displayInfo();
            return;
        }
        else
        {
            cout << "Not Found....." << endl;
        }
    }
}
/// Removes a student from the school by ID.
void School::removestu()
{
    int id;
    cout << "Enter Student ID to remove: ";
    while (!(cin >> id))
    {
        cout << "Invalid input. Please enter a valid integer for ID" << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    for (auto it = Students.begin(); it != Students.end(); ++it)
    {
        if (it->getID() == id)
        {
            Students.erase(it);
            cout << "Student Removed" << endl;
            return;
        }
        else
        {
            cout << "Not Found" << endl;
        }
    }
}


/// Removes a teacher from the school by ID.
void School:: removeteach()
{
    int id;
    cout << "Enter Teacher ID to remove: ";
    while (!(cin >> id))
    {
        cout << "Invalid input. Please enter a valid integer for ID" << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    for (auto it = Teachers.begin(); it != Teachers.end(); ++it)
    {
        if (it->getID() == id)
        {
            Teachers.erase(it);
            cout << "Teacher Removed" << endl;
            return;
        }
        else
        {
            cout << "Not Found" << endl;
        }
    }
}
/// Prompts for and updates a student's information by ID.
void School::FixinfoFst()
{
    int id;
    cout << "Enter Student ID to fix information: ";
    while (!(cin >> id))
    {
        cout << "Invalid input. Please enter a valid integer for ID" << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    for (auto it = Students.begin(); it != Students.end(); ++it)
    {
        if (it->getID() == id)
        {
            string NName;
            int NAge;
            int NClass;
            cout << "Enter New Name : " << endl;
            while (!(cin >> NName) || !isValidName(NName))
            {
                cout << "Invalid input. Please enter a valid string for Name" << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
            cout << "Enter New Age : " << endl;
            cin >> NAge;
            cout << "Enter New Class : " << endl;
            cin >> NClass;
            it->setName(NName);
            it->setAge(NAge);
            it->setGrade(NClass);
            return;
        }
    }
}
/// Prompts for and updates a teacher's information by ID.
void School::FixinfoFteh()
{
    int id;
    cout << "Enter Teacher ID to fix information: ";
    while (!(cin >> id))
    {
        cout << "Invalid input. Please enter a valid integer for ID" << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    for (auto it = Teachers.begin(); it != Teachers.end(); ++it)
    {
        if (it->getID() == id)
        {
            string NName;
            int NAge;
            string  NSubject;
            cout << "Enter New Name : " << endl;
            while (!(cin >> NName) || !isValidName(NName))
            {
                cout << "Invalid input. Please enter a valid string for Name" << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
            cout << "Enter New Age : " << endl;
            cin >> NAge;
            cout << "Enter New Subject : " << endl;
            cin >> NSubject;
            it->setName(NName);
            it->setAge(NAge);
            it->setSubject(NSubject);
            return;
        }
    }
}


