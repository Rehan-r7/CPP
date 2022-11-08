/*create a class student having data members as roll_number,name,and marks
and static data member as count which will number of objects created. create
a static function which will return the number of objects created*/
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#define max 100
class Student
{
		int Rollno,Marks;
		char Name[20];
		static int count;
	public :
		void getter();
		void setter();
		static int getCountObject();
};
	int Student::count=0;

	void Student::getter()
	{
		cout<<"Please enter student details :- "<<endl;
		cout<<"Enter your name : ";
		gets(Name);
		cout<<"Enter your Roll number : ";
		cin>>Rollno;
		cout<<"Enter your marks : ";
		cin>>Marks;
		count++;
	}

	void Student::setter()
	{
		cout<<"Showing student details :- "<<endl;
		cout<<"Name : "<<Name<<endl;
		cout<<"Roll number : "<<Rollno<<endl;
		cout<<"Marks : "<<Marks<<endl;

	}

	int Student::getCountObject()
	{
		return count;
	}

	void main()
	{
		clrscr();
		int size;
		Student s[max];
		cout<<"Please Enter the number of students : ";
		cin>>size;

			for(int i=0;i<size;i++)
			{s[i].getter();}

			for(i=0;i<size;i++)
			{s[i].setter();}

		cout<<"Number of objects created : "<<Student::getCountObject();
		getch();
	}
