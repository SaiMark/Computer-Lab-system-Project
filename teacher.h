#ifndef TEACHER_H
#define TEACHER_H
#include <string>
#include "identity.h"

class Teacher : public Identity{
	public:
		//default Constructor
		Teacher();

		//Constructor Parameters for teacher
		Teacher(int empId, std::string name, std::string pwd);

		//Menu page
		virtual void openMenu();

		//check all appointment
		void showAllOrder();

		//check appointment
		void validOrder();

		int m_EmpId; // Teacher id

};
#endif