#include<iostream>

using namespace std;

class employee{
	public:
		char name[20];
		int salary;
		
		void getdata(){
			cout<<"\n Get name and salary: ";
			cin>>name>>salary;
		}
		
		void display(){
			cout<<"\n Name: " <<name<<  "and salary: "<<salary;
		}
};

int main(){
	employee e1[2];
	for(int i=0; i<2; i++){
		e1[i].getdata();
	}
	
	for(int j=0; j<2; j++){
		e1[j].display();
	}
	

	
}
