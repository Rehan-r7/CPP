//bank management implement bank management system using
//classes and inheritance story
#include<stdio.h>
#include<conio.h>
#include<iostream.h>
class Account
{
public :
long int accno;
char name[15],atype;

      void getaccountdetail()
	{
	cout<<"\nEnter your Name : ";
	gets(name);
	cout<<"\nEnter Account Number : ";
	cin>>accno;
	}
		void displaydetails()
		{
		cout<<"\n\n Account holder details :";
		cout<<"\n Name of User is : "<<name;
		cout<<"\n Account Number is : "<<accno;

		}
};
	class current_account:public Account
	{
	public :
	int current_balance;
	int cb;
	void c_display()
	{
		cout<<"\nYour Current Account Balance is "<<current_balance;
	}
	      void c_deposit()
		{
		cout<<"\n Enter amount you want to deposit : ";
		cin>>cb;
		current_balance+=cb+1500;

		}
	     void c_withdraw()
	     {
	       cout<<"\nEnter amount you want to withdraw : ";
	       cin>>cb;
	       if(current_balance>1000)
	       {
	       current_balance-=cb;
	       }
	       else
	       {
	       cout<<"\nInsufficient amount ";
	       }
	     }
	};

		class saving_account:public Account
	{
	public :
	int saving_balance;
	int sb;
	void s_display()
	{
		cout<<"\nYour Current Account Balance is "<<saving_balance;
	}
	      void s_deposit()
		{
		cout<<"\n Enter amount you want to deposit : ";
		cin>>sb;
		saving_balance+=sb+1500;

		}
	     void s_withdraw()
	     {
	       cout<<"\nEnter amount you want to withdraw : ";
	       cin>>sb;
	       if(saving_balance>500)
	       {
	       saving_balance-=sb;
	       }
	       else
	       {
	       cout<<"\nInsufficient amount ";
	       }
	     }
	};

void main()
{
clrscr();
int s_cho,c_cho;
current_account c;
saving_account s;
cout<<" \n MENU ";
cout<<"\n Choose Account type \n 1.'C'Current Account. \n 2.'S'Saving Account. ";
cin>>s.atype;
clrscr();
do{
switch(s.atype)
{
case 'C' : c.getaccountdetail();
	cout<<"\n Account Type is : Current "<<endl;
	c.displaydetails();
		cout<<"\nEnter your Choice : \n 1. Deposit Amount \n 2. Withdraw Account \n 3. Display details ";
		     cin>>c_cho;
			 switch(c_cho)
	{
		case 1:
		c.c_deposit();
		break;
		      case 2 :
		c.c_withdraw();
		break;
		      case 3:
		c.c_display();
		break;
		  default :
		cout<<"\nInvalid option";
		break;
	}

case 'S' : s.getaccountdetail();
		cout<<"\n Account Type is : Saving "<<endl;
	s.displaydetails();
		cout<<"\nEnter your Choice : \n 1. Deposit Amount \n 2. Withdraw Account \n 3. Display details ";
		cin>>s_cho;
		switch(s_cho)

	     {	case 1:
		s.s_deposit();
		break;
		case 2:
		s.s_withdraw();
		break ;
		case 3 :
		s.s_display();
		break;
		default :
		cout<<"\nInvalid option";
		break;
	     }
	default: cout<<"LUNCH TIME BAAD ME ANNA";
}}
while(getchar()!=27);
getch();

}
