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


class B : virtual public A
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

class C : virtual public A
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


class D : public B,public C
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
	B d1;

	
}
