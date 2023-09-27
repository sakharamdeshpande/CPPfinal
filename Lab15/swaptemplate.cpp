#include<iostream>
using namespace std;
template <class T>
T swap(T a, T b)
{
	cout<<"Before swapping values are:"<<endl;
	cout<<a<<" "<<b<<endl;
	int temp;
	temp=a;
	a=b;
	b=temp;
	cout<<"After swapping values are:"<<endl;
	cout<<a<<" "<<b<<endl;
}
int main(){
	swap(10,20);

}
