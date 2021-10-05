#ifndef STUDENT_H
#define STUDENT_H
#include "identity.h"
#include<string>

class Student:public Identity
{
public:
	//default constructor
	Student();

	//Constructor Parameters for studnets
	Student(int id, std::string name, std::string pwd);

	//Menu page (function overloading)
	virtual void openMenu();

	//making appointment
	void applyOrder();

	//check appointment
	void showOrder();

	//check all appointments
	void showAllOrder();

	//cancel appointment
	void cancelOrder();

	//student id
	int m_Id;

};
#endif