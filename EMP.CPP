/*WAP to create employee class with data members code,name,age,designation,
basic salary,ta,da,hra display employees data with its net salary through
object also define functions outside the class*/
//Task : Employee Details
//Date created : 6/9/22
#include<iostream.h>
#include<conio.h>
class employee
{
	private :
		int emp_code,emp_age;
		long int emp_sal,ta,da,hra,gross;
		float net;
		char emp_name[30];
		char emp_des[20];

	public :
		void emp_input()
		{
			cout<<"--ENTER DETAILS--"<<endl;
			cout<<"Name : ";
			cin>>emp_name;
			cout<<"Age : ";
			cin>>emp_age;
			cout<<"Designation : ";
			cin>>emp_des;
			cout<<"Code : ";
			cin>>emp_code;
			cout<<"Salary : ";
			cin>>emp_sal;
			cout<<"Travel Allowance : ";
			cin>>ta;
			cout<<"Daily Allowance : ";
			cin>>da;
			cout<<"House Allowance : ";
			cin>>hra;
		}
		void emp_output()
		{
			cout<<"\n--SHOWING OUTPUT"<<endl;
			cout<<"Name : "<<emp_name<<endl;
			cout<<"Age : "<<emp_age<<endl;
			cout<<"Designation : "<<emp_des<<endl;
			cout<<"Code : "<<emp_code<<endl;
			cout<<"Salary : "<<emp_sal<<endl;

		}
		void cal()
		{
			gross=ta+da+hra;
			emp_sal+=gross;
			cout<<"Basic Salary :"<<emp_sal<<endl;
			net=emp_sal-(emp_sal*0.1);
			cout<<"Net Salary : "<<net;

		}

};
void main()
{
	clrscr();
	employee obj;
	obj.emp_input();
	obj.emp_output();
	obj.cal();
	getch();

}

