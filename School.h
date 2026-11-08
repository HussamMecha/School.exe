#pragma once
#include<iostream>
#include<string>
#include<vector>
#include"Person.h"
#include"Student.h"
#include"Teacher.h"
#include<conio.h>


using namespace std;

class School
{
private:

	vector<Student> Students;
	vector<Teacher> Teachers;
	vector<Person*> People;

public:

	void addstudent();
	void addteacher();
	void showAllstu();
	void showAllteach();
	void showAll();
	void findstu();
	void findteach();
	void removestu();
	void removeteach();
	void FixinfoFst();
	void FixinfoFteh();


	
};