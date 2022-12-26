/*wap to overload (+) operator to add two time class objects (Hint:+ opearator
will be overloaded to perform addition of two time class object add the
sec,min and hr values separately to return a new value of time*/

#include<iostream.h>
#include<conio.h>

class Time
{
	int ss,mm,hh;
	public :
		Time(int h=0,int m=0,int s=0)
		{
		    hh=h;
		    mm=m;
		    ss=s;
		}
		Time operator +(Time t)
		{
			Time x;
			x.ss=ss+t.ss;
			x.mm=mm+t.mm;
			x.hh=hh+t.hh;


			x.normalise();
			return x;
		}

		void normalise()
		{
		    if(ss>=60)
			{
				mm+=ss/60;
				ss=ss%60;
			}
		    if(mm>=60)
			{
				hh+=mm/60;
				mm=mm%60;

			}
		}
		void display()
		{
			cout<<"TIME : "<<hh<<":"<<mm<<":"<<ss;
		}
};
void main()
{
	clrscr();

	Time t1(5,50,30);
	Time t2(7,20,34);
	Time t3=t1+t2;
	t3.display();

	getch();
}