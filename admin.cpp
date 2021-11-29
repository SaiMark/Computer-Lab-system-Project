#include "admin.h"
#include <iostream>
#include <string>
using namespace std;

//Default Constructor
Admin::Admin(){

}
		
//Constructor Parameters for Admin
Admin::Admin(std::string name, std::string pwd){

	this->m_Password=pwd;
	this->m_Name=name;
}

//Create new account
void Admin::addPerson(){

}

//menu page
void Admin::openMenu(){
	cout<<"Welcome Admin user: "<<this->m_Name<<" Login!"<<endl;
	cout<<"\t\t----------------------------------------"<<endl;
	cout<<"\t\t|                                      |"<<endl;
	cout<<"\t\t|          1.Add Account               |"<<endl;
	cout<<"\t\t|                                      |"<<endl;
	cout<<"\t\t|          2.Check Account             |"<<endl;
	cout<<"\t\t|                                      |"<<endl;
	cout<<"\t\t|          3.Check Lab                 |"<<endl;
	cout<<"\t\t|                                      |"<<endl;
	cout<<"\t\t|          4.Cancel Appointment        |"<<endl;
	cout<<"\t\t|                                      |"<<endl;
	cout<<"\t\t|          0.Logout                    |"<<endl;
	cout<<"\t\t|                                      |"<<endl;
	cout<<"\t\t----------------------------------------"<<endl;
	cout<<"Please enter your operation (number): "<<endl;
}
		
//check all information account
void Admin::showPerson(){

}

//Computer Lab information
void Admin::showComputer(){

}

//Clean appointment record
void Admin::cleanFile(){
	
}
