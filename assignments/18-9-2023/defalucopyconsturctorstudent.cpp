#include<iostream>
using namespace std;
#include<string.h>

class student{
	int roll;
	char name[20];
	double fees;
	public:
		student(int,char*,double);
		void show();
		
};
student::student(int r,char* n,double f){
	roll=r;
	strcpy(name,n);
	fees=f;
}
void student::show(){
	cout<<"Roll No is: "<<roll<<endl;
	cout<<"Name is: "<<name<<endl;
	cout<<"Fees is: "<<fees<<endl;
}

int main(){
	student s(14,"Dnyanendra",10000);
	student s1(s);
	s.show();
	s1.show();
}
