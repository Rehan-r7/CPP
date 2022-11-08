/*wap to find the larger of 2 given numbers into different classes using
friend function */
#include<iostream.h>
#include<conio.h>
class B;//forward declaration
class A
{
	int num;
	public :

	A(){
		cout<<"Enter 1 number : ";
		cin>>num;
	}

	friend void greater(A obj1,B obj2);
};
class B
{
	int num;

	public :
	B(){
	       cout<<"Enter 2 number : ";
	       cin>>num;
	}

	friend void greater(A obj1,B obj2);
};
void greater(A obj1,B obj2)
{
	if(obj1.num>obj2.num)
	{
		cout<<"Number 1 is greater than Number 2 : "<<obj1.num<<" > "<<obj2.num;
	}
	if(obj1.num==obj2.num)
	{
		cout<<"Number 1 is equal to Number2 : "<<obj1.num<<" = "<<obj2.num;
	}
	else
		cout<<"Number 2 is greater than number 1 : "<<obj2.num<<" > "<<obj1.num;
}
void main()
{
	clrscr();
	A obj1;
	B obj2;
	greater(obj1,obj2);
	getch();
}