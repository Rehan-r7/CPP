#include<iostream.h>
#include<stdio.h>
#include<conio.h>
class BOOK
{
	private :
		int Book_no,price;
		char Book_title[20];
	public :
		void input();
		void purchase();
		int total_cost(int);
};
void main()
{
	clrscr();
	BOOK b;
	b.input();
	b.purchase();
	getch();
}
void BOOK::input()
{
	cout<<"Please enter the Book number : ";
	cin>>Book_no;
	cout<<"Plese enter the Book title : ";
	gets(Book_title);
	cout<<"Enter the price of the book : ";
	cin>>price;

}
void BOOK::purchase()
{
	int num,Final_total;
	cout<<"Enter the no. of copies : ";
	cin>>num;
	Final_total=total_cost(num);
	cout<<"Total cost : "<<Final_total;
}
int  BOOK::total_cost(int x)
{
	return x*price;
}

