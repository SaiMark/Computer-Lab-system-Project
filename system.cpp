#include "globalFile.h"
#include "identity.h"
#include <iostream>
#include <string>
#include <fstream>
#include "student.h"
#include "teacher.h"
#include "admin.h"

using namespace std;
void adminMenu(Identity* &manager)
{
	while(true)
	{
		manager->openMenu();

		Admin* man = (Admin*)manager;
		int select = 0;

		cin>>select;

		if(select == 1)
		{
			cout<<"Add Account"<<endl;
			man->addPerson();
		}

		else if(select == 2){
			cout<<"Check Account"<<endl;
			man->showPerson();
		}

		else if(select == 3){
			cout<<"Check Lab"<<endl;
			man->showComputer();
		}

		else if(select == 4){
			cout<<"Check Account"<<endl;
			man->cleanFile();
		}

		else{
			delete manager;
			cout<<"Logout Successful"<<endl;
			system("pause");
			system("clear");
			return;

		}
	}

}

void LoginIn(string fileName, int type){

	Identity* person = NULL;

	//Reading information from txt file
	ifstream ifs;
	ifs.open(fileName,ios::in);

	if(!ifs.is_open()){
		cout<<"File does not exist!"<<endl;
		ifs.close();
		return;
	}

	int id = 0;//User ID
	string name;//User name variable
	string pwd;//User name variable

	if(type==1)
	{
		cout<<"Please enter your student ID:"<<endl;
		cin>>id;
	}

	else if(type == 2)
	{
		cout<<"Please enter teacher ID"<<endl;
		cin>>id;
	}


	cout<<"Please enter user name: ";
	cin>>name;

	cout<<"Please enter password: ";
	cin>>pwd;

	if(type == 1)
	{
		//Student Login check
		int fId;//Student Id read from txt file
		string fName;//Student name read from txt file
		string fPwd;//Student password read from txt file
		while(ifs>>fId && ifs>>fName && ifs>>fPwd)
		{
			if(id == fId && name == fName && pwd == fPwd)
			{
				cout<<"Student Login Successful!"<<endl;
				system("pause");
				system("clear");
				person = new Student(id, name, pwd);


				return ;
			}
		}
	}
	else if (type == 2)
	{
		//Teacher Login check
		//Teacher Login check
		int fId;//Teacher Id read from txt file
		string fName;//Teacher name read from txt file
		string fPwd;//Teacher password read from txt file
		while(ifs>>fId && ifs>>fName && ifs>>fPwd)
		{
			if(id == fId && name == fName && pwd == fPwd)
			{
				cout<<"Teacher Login Successful!"<<endl;
				system("pause");
				system("clear");
				person = new Teacher(id, name, pwd);

				return ;
			}
		}
	}
	else if(type == 3)
	{
		//Admin Login check
		string fName;
		string fPwd;
		while(ifs>>fName && ifs>>fPwd){
			if(name == fName && fPwd == pwd){
				cout<<"Admin Login Successful"<<endl;
				//After login 
				system("pause");
				system("clear");
				person = new Admin(name,pwd);

				//Into the menu
				adminMenu(person);
				return ;
			}
		}
	}

	cout<< "Check Login failed" <<endl;

	system("pause");
	system("clear");
	return;



}

int main(){

	int select = 0;//Value storage the user input

	while(true)
	{
	cout<<"======================  Welcome to Computer Lab Appointment System  ======================"<<endl;
	cout<<endl<<"Please enter your user identity"<<endl;
	//----------
	//1. Student
	//2. Teacher
	cout<<"\t\t -------------------------------\n";
	cout<<"\t\t|                               |\n";
	cout<<"\t\t|          1.Student            |\n";
	cout<<"\t\t|                               |\n";
	cout<<"\t\t|          2.Teacher            |\n";
	cout<<"\t\t|                               |\n";
	cout<<"\t\t|          3.Admin              |\n";
	cout<<"\t\t|                               |\n";
	cout<<"\t\t|          0.Logout             |\n";
	cout<<"\t\t|                               |\n";
	cout<<"\t\t -------------------------------\n";

	cout<<"Please enter your number: ";
	cin>>select;


	switch(select){//Identify the user identity
		case 1://Student
			LoginIn(STUDENT_FILE,1);
			break;
		case 2://Teacher
			LoginIn(TEACHER_FILE,2);
			break;
		case 3://Admin
			LoginIn(ADMIN_FILE,3);
			break;
		case 0:
			cout<<"Thanks for using, See you next time"<<endl;
			system("pause");
			return 0;
			break;
		default:
			cout<<"!!!ERROR INPUT,PLEASE INPUT AGAIN!!!"<<endl;
			system("pause");
			system("cls");
			break;
	}
	
	}//while loop close

}