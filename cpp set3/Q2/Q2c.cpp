#include<iostream>
using namespace std;

class Employee{
	int id;
	int sal;
	public :
	Employee(){
		cout<<"Default of employee"<<endl;
		id = 0;
		sal=0;
	} 
	Employee(int id,int sal){
		cout<<"Para of employee "<<endl;
		this->id = id;  
		this->sal = sal;
	}
	void display(){
		cout<<"Id : "<<id<<endl;
		cout<<"Salary : "<<sal<<endl;
		
	}
};
int main(){
	Employee e1(50,50000);
	e1.display();
}

