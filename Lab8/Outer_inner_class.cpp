//Write a program to implement inner class in C++




#include<iostream>
using namespace std;


class Employee
{
	int e_id;
	public:
		
		class salesEmployee
		{
			int s_id;
			public:
				salesEmployee()
				{
					s_id=23;
				}
				salesEmployee(int s_id)
				{
					this->s_id=s_id;
				}
				void display()
				{
					cout<<"inner class salesEmployee"<<endl;
					cout<<"salesEmployee id = "<<s_id<<endl;
				}
		};
		
		void display()
		{
			cout<<"outer class of display function"<<endl;
		}
		
		
};


int main()
{
	Employee e;
	e.display();
    Employee::salesEmployee se1;
    se1.display();
	
	
	return 0;
}
