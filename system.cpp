#include "globalFile.h"
#include "identity.h"
#include <iostream>
#include <string>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
void LoginIn(string fileName, int type){

	Identity * person = NULL;

	ifstream ifs;
	ifs.open(fileName,ios::in);

	if(!ifs.is_open()){
		cout<<"File does not exist!"<<endl;
		ifs.close();
		return;
	}

	int id = 0;
	string name;
	string pwd;

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
	cout<<endl;

	cout<<"Please enter password: ";
	cin>>pwd;

	if(type == 1)
	{
		//Student Login check
	}
	else if (type == 2)
	{
		//Teacher Login check
	}
	else if(type == 3)
	{
		//Admin Login check
	}

	cout<< "Check Login failed" <<endl;

	system("pause");
	system("cls");
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