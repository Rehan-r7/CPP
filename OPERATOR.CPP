/**/
#include<iostream.h>
#include<conio.h>
class Complex
{
	int real,img;
	public :
		Complex(int r=0,int i=0)
		{
			real=r;
			img=i;
		}
		Complex operator +(Complex c)
		{
			Complex x;

			x.real=real+c.real;
			x.img=img+c.img;

			return x;
		}
		void display()
		{
			cout<<"RESULT : "<<real<<"+"<<img<<"i"<<endl;
		}
};
void main()
{
	clrscr();
	Complex c1(10,20);
	Complex c2(10,20);
	Complex c3=c1+c2;
	c3.display();
	getch();
}