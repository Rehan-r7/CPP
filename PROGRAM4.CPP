/*An electricity board charges the following rate to domestic users to
discourage large consumption of energy
1>for the first 100 unit 60 paisa/unit
2>for next 200 unit 80 paisa/unit
3>all users charge minimum 50 rupees
4>beyond 200 units 92 paisa/unit if thetotal amount is more than 300 rupees
then an additional 15% is added

*WAP to read the the name of users,no. of units consumed and print out charge
with the name*/
#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#define max 10
class Electricity_Board
{
	private :
		char Name[20];
		int Units;
		float S_charge,Charge;
	public :
		void getdata();
		void Calculate_charge();
		void Display();
};
void Electricity_Board::getdata()
{
	cout<<"Please enter the user name : ";
	gets(Name);
	cout<<"Please enter the number of units consumed : ";
	cin>>Units;
}
void Electricity_Board::Calculate_charge()
{
	if(Units<=100)
	{
		Charge=Units*0.60;
	}
	else if(Units>100 && Units<=200)
	{
		Charge=Units*0.80;
	}
	else
	{
		Charge=Units*0.92;
	}
	if(Charge>=300)
	{
		S_charge=(Charge*0.15);
		Charge=S_charge+Charge;
	}
	if(Charge<=50)
	{
		Charge=50;
	}


}
void Electricity_Board::Display()
{

		cout<<"\nName of User : "<<Name<<endl;
		cout<<"Total charge = "<<Charge;
}

void main()
{
	int num,n;
	clrscr();
	cout<<"Please enter the numbers of users : ";
	cin>>num;
	Electricity_Board E[max];
		for(int i=0;i<num;i++)
		{
			E[i].getdata();
			E[i].Calculate_charge();
		}
		clrscr();
		for(i=0;i<num;i++)
		{
			E[i].Display();
		}
		getch();

}

