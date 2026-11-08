#pragma once
#include<string>
#include"Person.h"
using namespace std;
class Student : public Person
{
private:
	int Grade;
public:
	Student(int i, string n, int a, int g);
	void displayInfo() override;
	void setGrade(int g);
};