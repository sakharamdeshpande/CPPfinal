#include<iostream>
using namespace std;

int main(){
	int a,b,temp;
	cout<<"Enter the two numbers : ";
	cin>>a>>b;
	cout<<"before swap : "<<a<<" "<<b<<endl;
	temp = b;
	b = a;
	a  = temp;
	cout<<"after swap : "<<a<<" "<<b<<endl;
	
}
