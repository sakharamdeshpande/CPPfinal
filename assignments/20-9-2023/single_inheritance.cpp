#include<iostream>
using namespace std;

class A{	//base class
	int a;
	public :
		A(){
			cout<<"Default base"<<endl;
		}
		A(int a){//parameterised base contsr
			this->a = a;
		}
		void display(){
			cout<<"value of a : "<<a<<endl;
		}
		
};




class B:private A{
	int b;
	public :
		B(){
			cout<<"Default derive"<<endl;
		}
		B(int b,int ab):A(ab)//parameterised derived constr
		{
			this->b = b;
			cout<<"a : "<<a;
		}
		void display(){
			cout<<"value of b :"<<b<<endl;
			A::display();
		}
};


int main(){
	int a,b;
	cout<<"Enter base value : ";
	cin>>a;
	cout<<"Enter derived value : ";
	cin>>b;
	B bobj(a,b);
	bobj.display();
	
}
