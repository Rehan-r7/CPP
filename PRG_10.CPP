/*suppose you have a piggy bank with an initial amount of 50 rupees and you
have to add some more amount to it  create a class add amount with a data
member name,amount with initial value of rupees 50 now make two constructors of
this 1.constructor without any parameter in which no amount will be added
to the piggy bank 2. const. having a para which is the amount to be added
to the piggy bank.create an objectof the class addamount the display the final
amount in the piggy bank*/
#include<iostream.h>
#include<conio.h>
class addAmount
{
	int amt;
	public :

	addAmount()
	{
		amt=50;
	}
	addAmount(int x)
	{
		amt+=x;
	}
	void display();
};
void addAmount :: display()
{
	cout<<"Current amount in piggy bank : "<<amt;
}
void mani()
{
	int num;
	clrscr();
	cout<<"Please enter amount to add : ";
	cin>>num;
	addAmount a;
	addAmount b(num);
	b.display();
	getch();
}
