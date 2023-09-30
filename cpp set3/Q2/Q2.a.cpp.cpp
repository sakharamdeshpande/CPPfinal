#include<iostream>
using namespace std;

class employee{
	int id;
	public :
	employee(){
		cout<<"Default of employee"<<endl;
		id = 0;
	} 
	employee(int id){
		cout<<"Para of employee "<<endl;
		this->id = id;  
	}
	void display(){
		cout<<"Id : "<<id<<endl;
	}
};


class wageemp : public employee
{
	int hr,rate;
	public :
		wageemp(){
			hr = 0;
			rate = 0;
		}
		wageemp(int id,int hrs,int rate):employee(id)
		{	
			cout<<"Para of Wageemp : "<<endl;
			this->hr = hr;
			this->rate = rate;
		}
		
		int findsalary(){
			return (hr * rate);
		}
		
		void display(){
			employee::display();
			cout<<"Hrs : "<<hr<<endl;
			cout<<"Rate : "<<rate<<endl;
		}
}; 

class salesP : public employee,public wageemp
{
	int sales,comm;
	public:
		salesP(){
			sales = 0;
			comm = 0;
		}
		salesP(int id,int hrs,int rate, int sales,int comm):wageemp(id,hrs,rate),employee(id)
		{
			cout<<"Para of salesP "<<endl;
			this->sales = sales;
			this->comm = comm;
		}
		int salry(){
			return (wageemp::findsalary() ) + (sales * comm);
		}
		void display(){
			wageemp::display();
			cout<<"sales : "<<sales<<endl;
			cout<<"commission : "<<comm<<endl;
			cout<<"Salary : "<<salry();
		}
};
int main(){
	salesP obj(101,10,500,2000,1);
	obj.display();
	
}
