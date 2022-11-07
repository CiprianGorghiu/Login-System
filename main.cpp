#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

void login();
void registeration();

int main()
{
	int menu;
	cout<<"\t\t\t______________________________________________________\n\n\n";
	cout<<"\t\t\t                Welcome to the login page              \n\n\n";
	cout<<"\t\t\t________________     MENU       _______________________\n\n\n";
	cout<<"Press 1 to LOGIN"<<endl;
	cout<<"Press 2 to REGISTER"<<endl;
	cout<<"Press 3 to recover your PASSWORD"<<endl;
	cin>>menu;
	cout<<endl;
	switch(menu)
	{
		case 1: 
				login();
				break;
		case 2: 
				registeration();
				break;		
	}
return 0;
}

void login()
{
	int count;
	string userId, password, id, pass;
	cout<<"Username:"<<endl;
	cin>>userId;
	cout<<"Password"<<endl;
	cin>>password;

	ifstream input("records.txt");

	while(input>>id>>pass)
	{
		if(id == userId && pass == password)
		{
			count = 1;
		}
	}
	input.close();
	if(count == 1)
	{
		cout<<userId<<"\nYou loggin is succesfull!"<<endl;
	}
	else
	{
		cout<<"\n Login Error !"<<endl;
	}

}

void registeration()
{
	string ruserId, rpassword, rid, rpass;
	cout<<"Register: "<<endl;
	cout<<"Username: "<<endl;
	cin>>ruserId;
	cout<<"Password:"<<endl;
	cin>>rpassword;
	ofstream f1("records.txt", ios::app);
	//punem userul si parola pe aceeasi linie separate prin spatiu
	f1<<ruserId<<' '<<rpassword<<endl;
	cout<<"Te-ai inregistrat cu succes!"<<endl;

}