#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	float ci,p,r,n,t;
	cout<<"enter p,r,n,t : ";
	cin>>p>>n>>r;
	ci = p * pow((1 + ( r / (n * 100) )), ( n * t ));
	cout<<"compound interest is "<<" "<<ci<<endl;

}

