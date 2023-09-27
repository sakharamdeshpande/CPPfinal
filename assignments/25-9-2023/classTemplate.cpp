#include<iostream>
using namespace std;

template <class T, class T1>

class A
{
	T a;
	T1 b;
	public:
		A(T a,T1 b)
		{
			this->a = a;
			this->b = b;
		}
		T1 add()
		{
			return a + b;
		}
};


int main()
{
	int a1 = 6;
	int b1 = 8;
	float f1 = 5.6;
	A <int,float>a(a1,f1);
	cout<<a.add();
}
