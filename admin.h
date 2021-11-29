#ifndef ADMIN_H
#define ADMIN_H
#include "identity.h"
#include <string>

class Admin:public Identity{
	public:
		//Default Constructor
		Admin();
		
		//Constructor Parameters for Admin
		Admin(std::string name, std::string pwd);

		//menu page
		virtual void openMenu();
		
		//Create Account
		void addPerson();
		
		//check all information account
		void showPerson();

		//Computer Lab information
		void showComputer();

		//Clean appointment record
		void cleanFile();
};
#endif