#include<iostream.h>
#include<stdlib.h>
#include<conio.h>

class TollBoth
{
	int car;
	double cash;
public :
	TollBoth()
	{
		car=0;
		cash=0.0;
	}
	void payingcars();
	void nonpayingcars();
	void display();

};
void TollBoth::payingcars()
{
	car++;
	cash+=50;
}
void TollBoth::nonpayingcars()
{
	car++;
}
void TollBoth::display()
{
	cout<<"Total number of cars : "<<car<<endl;
	cout<<"Total amount of cash collected : "<<cash<<endl;

}
void main()
{
	int choice;
	char ch=5;
	clrscr();

	cout<<"1.If payment is deliverd by car owner"<<endl;
	cout<<"2.If payment is not deliverd by  car owner"<<endl;
	cout<<"3.Total payment collected and Total number of cars "<<endl;
	TollBoth tb;
	do{
	cout<<"Please Enter your choice : ";
	cin>>choice;
	switch(choice)
	{
		case 1 : tb.payingcars();
			break;
		case 2 : tb.nonpayingcars();
			break;
		case 3 : tb.display();
			break;
		default : cout<<"Invalid choice please select again!"<<endl;
	}
	cout<<" Press Y to continue \nOtherwise press ESC for exit :";
	cin>>ch;
	}while(ch!=27);
	getch();
}
