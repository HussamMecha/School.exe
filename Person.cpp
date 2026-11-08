#include"Person.h"
#include<iostream>


    Person::Person(int i, string n, int a)
    {
        ID = i;
        Name = n;
        Age = a;
    }
    /// Displays the person's identifying and personal information.
     void Person::displayInfo()
    {
        cout << "ID = " << ID << endl;
        cout << "Name = " << Name << endl;
        cout << "Age = " << Age << endl;
    }
    /// Returns the person's unique ID.
    int Person::getID()
    {
        return ID;
    }

    /// Updates the person's name.
    void Person::setName(string n)
    {
        Name = n;
    }
    /// Updates the person's age.
    void Person::setAge(int a)
    {
        Age = a;
    }


