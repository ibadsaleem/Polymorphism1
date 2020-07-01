//Muhammad Ibad Saleem 19K0220 G Lab7-8 Task 3
#include <iostream>
#include <string>
#include <conio.h>
using namespace std;
//------------------------------------------------------------------------------------------------

class Account{

 
 
public:
float Balance;
Account(){}
Account(float a)
{
	Balance=a;
}
void deposit()
{		
		float d;
		cout<<"Enter Amount To Deposit: ";
		cin>>d;
		if (d>0)
		{
		Balance=Balance+d;
		cout<<"Amount Deposited";
		}
		else 
		{
			cout<<"wrong amount entered";
		}
}

void withdraw()
{
	float i;
		cout<<"Enter Amount To Withdraw: ";
		cin>>i;
	if (i<Balance)
	{
	Balance=i-Balance;
	cout<<i<<" Amount Withdrawn";
	}
	else
	{
		cout<<"Insufficient Amount In The Account";
	}
}

void checkBalance()
{
		cout<<"Amount: "<<Balance;
}

};

class InterestAccount: public Account
{
	protected:
	float interest;
	public:
	InterestAccount(){}
	InterestAccount(float a){
		interest=a;
	}
	
	void deposit()
{
		float f;
		cout<<"Enter Amount To Deposit: ";
		cin>>f;

		if (f>0)
		{
		Balance=(Balance+f)*(interest/100)+(Balance+f);
		cout<<"Amount Deposited";
		}
		else 
		{
			cout<<"Wrong amount entered";
		}
}
};

class ChargingAccount: public Account
{
	public:
	ChargingAccount(){}
	void withdraw()
	{
		float d;
		cout<<"Enter Amount To Withdraw: ";
		cin>>d;
		if (d<(Balance+3))
	{
	Balance=d-(Balance-3);
	
	cout<<d<<" Amount Withdrawn";
	}
	else
	{
		cout<<"Insufficient Amount In The Account";
	}
	}
};

class ACI: public InterestAccount,public ChargingAccount{
	
	public:
	
	ACI(){}
	
	void transfer(float d,Account A)
	{
		A.Balance=d+A.Balance;
	}
	void transfer(float d,InterestAccount IA)
	{
		IA.Balance=IA.Balance+d;
	}
	void transfer(float d,ChargingAccount CA)
	{
		CA.Balance=CA.Balance+d;
	}



};
int main()
{
	Account A(0.0);
	InterestAccount IA(30.0);
	ChargingAccount CA;
	ACI TR;
	system("cls");
	while(1)
	{
	cout<<"Kindly Choose The Account Type\n1) Interest Account 2) Charging Account 3)Account";
	char a = getch();
	system("cls");
	if (a=='1')
	{
		cout<<"INTEREST ACCOUNT OPERATIONS\n-----------------------------------------------------\n";
		cout<<"Kindly Choose From The Following Options\n1)Deposit Cash\n2)Withdraw Cash\n3)Check Balance Status\n4)Transfer Cash";
		char b=getch();
		system("cls");
		if(b=='1')
		{
			IA.deposit();
		}
		else if(b=='2')
		{
			IA.withdraw();
		}
		else if(b=='3')
		{
			IA.checkBalance();
		}
		else if(b=='4')
		{
			float t;
			cout<<"Enter Amount to be transfer: ";
			cin>>t;
			TR.transfer(t,IA);
			
	cout<<t<<" Amount Transferred";
		}
		else {
			cout<<"WRONG OPTION";
		}
	}
	else if(a=='2')
	{
		cout<<"CHARGING ACCOUNT OPERATIONS\n-----------------------------------------------------\n";
		cout<<"Kindly Choose From The Following Options\n1)Deposit Cash\n2)Withdraw Cash\n3)Check Balance Status\n4)Transfer Cash";
		char b=getch();
		system("cls");
		if(b=='1')
		{
			CA.deposit();
		}
		else if(b=='2')
		{
			CA.withdraw();
		}
		else if(b=='3')
		{
			CA.checkBalance();
		}
		else if(b=='4')
		{
			float t;
			cout<<"Enter Amount to be transfer: ";
			cin>>t;
			TR.transfer(t,CA);
			cout<<t<<" Amount Transferred";
	
		}
		else {
			cout<<"WRONG OPTION";
		}	
	}
	else if(a=='3')
	{
		cout<<"ACCOUNT OPERATIONS\n-----------------------------------------------------\n";
		cout<<"Kindly Choose From The Following Options\n1)Deposit Cash\n2)Withdraw Cash\n3)Check Balance Status\n4)Transfer Cash";
		char b=getch();
		system("cls");
		if(b=='1')
		{
			cout<<endl;
			A.deposit();
		}
		else if(b=='2')
		{
			cout<<endl;
			A.withdraw();
		}
		else if(b=='3')
		{
			cout<<endl;
			A.checkBalance();
		}
		else if(b=='4')
		{
			float t;
			cout<<"Enter Amount to be transfer: ";
			cin>>t;
			TR.transfer(t,A);
			cout<<t<<" Amount Transferred";
	
		}
		else {
			cout<<"WRONG OPTION";
		}	
		
	}
	getch();
	system("cls");
	cout<<"\nE to exit or any other key to continue";
	char e=getch();
	system("cls");
	if(toupper(e)=='E')
	{
		exit(1);
	}
}
}