//	Implement all control structures through your program

#include<iostream>
using namespace std;

class implement
{
	int a=10;
	int b=5;
	
	public:
		void even()
		{
			if(a%2==0)
			{
				cout<<a<<" is even number"<<endl;	
			}	
		}
		
		void compare()
		{
			if(a>b)
			{
				cout<<a<<" is greater and "<<b<<" is small"<<endl;
			}
			else if(b>a)
			{
				cout<<b<<" is greater and "<<a<<" is small"<<endl;
			}
			else
			{
				cout<<"both "<<a<<" and "<<b<<" are equal"<<endl;
			}
		}	
		
		void calci()
		{
				int choise;
			do
			{
			cout<<"enter 1 for addition "<<endl;
			cout<<"enter 2 for substraction "<<endl;
			cout<<"enter 3 for multiplication "<<endl;
			cout<<"enter 4 for division "<<endl;
			cout<<"enter 0 for exit"<<endl;
			cin>>choise;
			switch(choise)
			{
				case 1:
					cout<<"Addition = "<<(a+b)<<endl;
					break;
				case 2:
					cout<<"Substraction = "<<(a-b)<<endl;
					break;
				case 3:
					cout<<"Multiplication = "<<(a*b)<<endl;
					break;
				case 4:
					cout<<"Division = "<<(a/b)<<endl;
					break;		
			}
		    }while(choise!=0);
		}
		
		void table()
		{
			int i;
			cout<<"Table of "<<a<<" is :"<<endl;
			for(i=0;i<10;i++)
			{
				cout<<(i+1)<<" * "<<a<<" = "<<((i+1)*a)<<endl;
			}
		}
		
		void print_line()
		{
			char ch;
			cout<<"enter the character to print that charater 10 times"<<endl;
			cin>>ch;
			int i=1;
			while(i<11)
			{
				cout<<ch;
				i++;
			}
			cout<<endl;
		}
};

int main()
{
	implement i;
	cout<<"use of if"<<endl;
	i.even();
	
	cout<<"\nuse of else_if"<<endl;
	i.compare();
	
	cout<<"\nuse of for loop"<<endl;
	i.table();
	
	cout<<"\nuse of while loop"<<endl;
	i.print_line();
	
	cout<<"\nuse of switch and do_while"<<endl;
	i.calci();
	
	return 0;
}
