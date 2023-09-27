#include<iostream>
using namespace std;
template <class T>
T add(T &a,T &b)
{
	T result=a+b;
	return result;
}
int main(){
	int i=10;
	int j=50;
	float m=1.031;
	float n=5.031;
	
	cout<<"addition of i & j is :"<<add(i,j)<<endl;
	cout<<"addition of m & n is :"<<add(m,n)<<endl;
}
