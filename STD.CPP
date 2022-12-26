#include<iostream.h>
#include<conio.h>
#define max 10
class student
{
	private :
		int age,sem;
		char name[20],branch[10],roll[20];

	public :
		void putdata()
		{
			cout<<"Please enter your name : ";
			cin>>name;
			cout<<"Enter your roll number : ";
			cin>>roll;
			cout<<"Enter your age : ";
			cin>>age;
			cout<<"Enter your branch :";
			cin>>branch;
			cout<<"Enter your semester :  ";
			cin>>sem;

		}
		void getdata()
		{
			cout<<"Name : "<<name<<endl;
			cout<<"Roll number : "<<roll<<endl;
			cout<<"Age : "<<age<<endl;
			cout<<"Branch : "<<branch<<endl;
			cout<<"Smester : "<<sem<<endl;
		}
};
void main()
{
	clrscr();

	int i,size;
	cout<<"Enter number of students : ";
	cin>>size;

	student s[max];

	cout<<"PLEASE ENTER YOUR DETAILS : "<<endl;

	for(i=0;i<size;i++)
		{s[i].putdata();}
	cout<<"SHOWING DETAILS : "<<endl;
	for(i=0;i<size;i++)
		{s[i].getdata();}
	getch();
}