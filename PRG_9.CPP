/*wap to create a class name Complex.take two complex numbers by using default
constructor.write a function to add two complex num. and a fun to display the
sum of two complex two numbers in proper format that is 10+20i*/
#include<iostream.h>
#include<conio.h>
class Complex
{
	private :
	int real,img;
	int real1,real2;
	int img1,img2;

	public :
		Complex()
		{
		       cout<<"Please enter real part of number 1 and 2 : ";
		       cin>>real1>>real2;
		       cout<<"Please enter imaginary part of number 1 and 2 : ";
		       cin>>img1>>img2;
		     /*  cout<<"Please enter real part of number 2 : ";
		       cin>>real2;
		       cout<<"Please enter imaginary part of number 2 : ";
		       cin>>img2; */
		}
		void sum();
		void display();
};
void Complex :: sum()
{
	real=real1+real2;
	img=img1+img2;
}
void Complex :: display()
{
	cout<<"SUM : "<<real<<"+"<<img<<"i";
}
void main()
{
	clrscr();
	Complex c;
	c.sum();
	c.display();
	getch();
}