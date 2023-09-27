#include<iostream>
using namespace std;


class Student{
	int m1,m2;
	public:
		Student()
		{
			m1 = 0;
			m2 = 0;
		}
		Student(int m1,int m2)
		{
			this->m1 = m1;
			this->m2 = m2;
			sum = m1+m2;
		}
};

class Sports
{
	int sprt;
	public:
		Sport()
		{
			sprt = 0;			
		}	
		Sport(int sprt)
		{
			this->sprt = sprt;
		}
};



class Result : public Student, public Sports
{
	float avg;
	public :
		
		Result(int x,int y,int s):Student(x,y):Sport(s)
		{	
			avg = 
			cout<<
		}
	
};




int main()
{
	
	cout<<"enter the mark1 : ";
	cin>>x;
	cout<<"enter the mark2 : ";
	cin>>y;
	cout<<"enter the sport mark : ";
	cin>>s;
	Result R1(x,y,s);
 } 
