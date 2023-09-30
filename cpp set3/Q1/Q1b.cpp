#include<iostream>
using namespace std;
int main(){
	int num,rev=0,temp;
	
	cout<<"Enter the number";
	cin>>num;
	
	temp=num;
	
	while(num==0)
	{
		rev=num%10;
		num/10;
		cout<<"The reverse of number is"<<rev<<endl;
	}
}
