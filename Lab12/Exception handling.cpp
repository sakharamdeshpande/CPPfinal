#include<iostream>
using namespace std;

float divide(float a,float b)
{
	if(b==0){
		throw "B cannot be '0'!!";
	}
	return a/b;
}

int main(){
	float a,b;
	cout<<"Enter value of a : ";
	cin>>a;
	cout<<"Enter value of b : ";
	cin>>b;
	float ans;
	try{
		ans = divide(a,b);
	}
	catch(char* e){
		cout<<e<<endl;
	}

	cout<<"Division of a and b is :"<<ans<<endl;
}
