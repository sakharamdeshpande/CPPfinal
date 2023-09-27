//"	Assignments to overload =, ==, +, ++, --, <<, >> and [ ]operators.

#include <iostream>
using namespace std;
#include<String.h>
class String1{
	int len;
	char* ptr;
	public:
		String1(char * sptr){
			len=strlen(sptr);
			ptr= new char[len+1];
			strcpy(this->ptr,sptr);
		}
		String1& operator=(String1& s){
			len=s.len;
			delete[] ptr;
			ptr=new char[len+1];
			strcpy(ptr,s.ptr);
			return *this;
		}
		void display(){
			cout<<"String length is : "<<len<<endl;
			cout<<"Name : "<<ptr<<endl;
		}
};

class Complex{
	int real;
	int img;
	public:
		Complex(){
			real=0;
			img=0;
		}
		Complex(int real,int img){
			this->real=real;
			this->img=img;
		}
		Complex operator+(Complex& c){
			Complex temp;
			temp.real=this->real+ c.real;
			temp.img = this->img +c.img;
			return temp;
		}
		Complex operator+(int value){
			this->real=this->real+value;
			this->img=this->img+value;	
			return *this;
		}
		Complex operator++(){
			this->real+=1;
			this->img+=1;
			return *this;
		}
		Complex operator++(int value){
			Complex temp=*this;
			this->real+=1;
			this->img+=1;
			return temp;
		}
		Complex operator--(){
			this->real-=1;
			this->img-=1;
			return *this;
		}
		Complex operator--(int value){
			Complex temp=*this;
			this->real-=1;
			this->img-=1;
			return temp;
		}
		friend Complex operator+(int value,Complex& c);
		friend void operator<<(ostream& out,Complex& c);
		friend void operator>>(istream& in,Complex& c);
		void display(){
			if(this->img<0){
				cout<<"Complex number : "<<real<<" "<<img<<"i"<<endl;
			}
			else{
			cout<<"Complex number : "<<real<<" + "<<img<<"i"<<endl;
			}
		}
};
Complex operator+(int value,Complex& c){
	c.real=c.real+value;
	c.img=c.img+value;	
	return c;
}
void operator>>(istream& in,Complex& c){
	in>>c.real;
	in>>c.img;
}
void operator<<(ostream& out,Complex& c){
	out<<c.real;
	out<<" + "<<c.img<<"i"<<endl;
}

int main(){
	String1 s1("Kaustubh");
	String1 s2("Pawar");
	
	String1 s3(s2);
	s3.display();
	s2=s1;
	s1.display();
	s2.display();
	
	Complex c1(1,2);
	Complex c2(3,4);
	Complex c3 = c1+c2;
	c3.display();
	Complex c4 = c1+5;
	c4.display();
	Complex c5 = 5+c2;
	c5.display();
	
	Complex c6=++c1;
	c6.display();
	Complex c7=c1++;
	c7.display();
	
	Complex c8=--c1;
	c8.display();
	Complex c9=c1--;
	c9.display();
	
	Complex c10(5,5);
	cout<<c10;
	
	int real,img;
	cout<<"Enter real and img value : ";
	cin>>real>>img;
	Complex c11(real,img);
	c11.display();
}
