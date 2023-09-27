#include<iostream>
using namespace std;

int main(){//main function
	int base,exp;
	cout<<"enter the base : ";
	cin>>base;
	cout<<"enter the exponent  : ";
	cin>>exp;
	int pow =1;
	while(exp!=0){
		pow = pow * base;
		exp--;
	}
	cout<<"\n Power : "<<pow;
}
