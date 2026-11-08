#pragma once
#include<string>
using namespace std;

class Person
{
protected:
	int ID;
	string Name;
	int Age;
public:
	Person(int i, string n, int a);
	int getID() ;
	string getName() ;
	int getAge();
	void setName( string n);
	void setAge(int a);
	virtual void displayInfo();
	virtual ~Person() = default;

};