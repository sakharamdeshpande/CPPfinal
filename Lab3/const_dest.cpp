#include<iostream>
using namespace std;

class A
{
	public: ~A(){
		cout<<"destrc of A :";
	}
};

class B: public A
{
	public: ~B(){
		cout<<"destr of B";
	}
};

int main(){
	A *ptr=new B();
	delete ptr;
}
