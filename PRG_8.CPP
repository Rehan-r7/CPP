/*create two classes fruit and basket attributes of class fruits are ch of
character type and num of int type methods of class baskets are getdata and
display data class baskets declares fruit as a friend class by using friend*/
#include<iostream.h>
#include<conio.h>

class Fruit
{
	char ch;
	int num;
	public :

	Fruit()
	{
	ch=' ';
	num=0;
	}
	friend class Basket;
};
class Basket
{
	public :

	Fruit getdata(Fruit ob)
	{
		cout<<"Please enter fruit name : ";
		cin>>ob.ch;
		cout<<"Please enter quantity : ";
		cin>>ob.num;

		return ob;
	}
	void displayData(Fruit ob)
	{
		cout<<"Fruit name : "<<ob.ch<<endl;
		cout<<"Quantity : "<<ob.num<<endl;
	}
};
void main()
{
	clrscr();
	Fruit F1;
	Basket B1;
	Fruit F2=B1.getdata(F1);
	B1.displayData(F2);
	getch();
}

