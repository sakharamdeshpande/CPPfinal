#include<iostream>
using namespace std;

class A{
	
	public:
		A()
		{
			cout<<"Default in A :"<<endl;
		}
		~A()
		{
			cout<<"Dis Default in A :"<<endl;
		}
};


class B : public A
{
	public:
		B()
		{
			cout<<"Default in B : "<<endl;
		}
		~B()
		{
			cout<<"Dis Default in B : "<<endl;
		}
};

class C : public A
{
	public :
		C()
		{
			cout<<"Default of C : "<<endl;
		}
		~C()
		{
			cout<<"Dis Default of C : "<<endl;
		}
};


class D : public C,public B
{
	public:
		D()
		{
			cout<<"Default of D : "<<endl;
		}
		~D()
		{
			cout<<"Dis Default of D : "<<endl;
		}
};

int main()
{
	D d1;

	
}
