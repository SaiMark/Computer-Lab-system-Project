#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
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
			break;
		case 2://Teacher
			break;
		case 3://Admin
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