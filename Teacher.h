#pragma once
#include"Person.h"
#include<string>
using namespace std;

class Teacher : public Person
{
private:
	string Subject;
public:
	Teacher(int i, string n, int a, string s);
	void displayInfo() override;
	void setSubject(string s);
};