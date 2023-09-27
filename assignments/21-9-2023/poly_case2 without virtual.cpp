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
		int findsalry(){
		return 0;
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
		
		int findsalry(){
			return (hr * rate);
		}
		
		void display(){
			employee::display();
			cout<<"Hrs : "<<hr<<endl;
			cout<<"Rate : "<<rate<<endl;
		}
}; 

class salesP : public wageemp
{
	int sales,comm;
	public:
		salesP(){//deafault constr
			sales = 0;
			comm = 0;
		}
		salesP(int id,int hrs,int rate, int sales,int comm):wageemp(id,hrs,rate)
		{//para constr
			cout<<"Para of salesP "<<endl;
			this->sales = sales;
			this->comm = comm;
		}
		int findsalry(){
			return (wageemp::findsalary() ) + (sales * comm);
		}
		void display(){
			wageemp::display();
			cout<<"sales : "<<sales<<endl;
			cout<<"commission : "<<comm<<endl;
			cout<<"Salary : "<<findsalry();
		}
};
int main(){
	employee *ptr=new employee();
	cout<<ptr->findsalry();
	wageemp e1;
	ptr = &e1;
	cout<<ptr->findsalry();
	salesP s1;
	ptr = &s1;
	cout<<ptr->findsalry();
	

}
