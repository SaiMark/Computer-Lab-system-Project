#include "globalFile.h"
#include "admin.h"
#include <iostream>
#include <fstream>
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

	cout<<"Please enter account type"<<endl;
	cout<<"1, add new Studnet account"<<endl;
	cout<<"2, add new Teacher account"<<endl;

	string fileName;
	string tip;
	ofstream ofs;

	int select = 0;
	cin>>select;

	if(select == 1){
		fileName = STUDENT_FILE;
		tip = "Please enter student id: ";
	}

	else if(select == 2){
		fileName = TEACHER_FILE;
		tip = "Please enter teacher id: ";
	}

	else{
		cout<<"Sorry, error input"<<endl;
	}

	ofs.open(fileName, ios::out | ios::app);
	int id;
	string name;
	string pwd;
	cout<<tip<<endl;
	cin>>id;
	
	cout<<"Input user name: "<<endl;
	cin>>name;
	cout<<"Input user password: "<<endl;
	cin>>pwd;

	ofs<<id<<" "<<name<<" "<<pwd<<" "<<endl;
	cout<<"Create new account successful!!"<<endl;

	system("clear");

	ofs.close();


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
