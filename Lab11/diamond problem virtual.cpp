#include<iostream>
using namespace std;

class Student
{
	int roll_no;
	public:
		Student()
		{
			roll_no = 0;
		}
		Student(int roll_no)
		{
			this->roll_no = roll_no;
		}
		int get_roll()
		{
			return roll_no;
		}
};


class Marks : virtual public Student
{
	int m1,m2;
	public:
		Marks()
		{
			m1 = 0;
			m2 = 0;
		}
		Marks(int m1,int m2)
		{
			this->m1 = m1;
			this->m2 = m2;
		}
		int get_sum()
		{
			return (m1+m2);
		}
};

class Sport : virtual public Student
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
		int get_sprt()
		{
			return sprt;
		}
};



class Result : public Marks, public Sport
{
	float avg;
	public :
		Result()
		{
			avg = 0;
		}
		
	Result(int m1,int m2,int sprt,int roll_no):Marks(m1,m2),Sport(sprt),Student(roll_no)
		{	
			avg = (Marks::get_sum() + Sport::get_sprt()) / 3;
		}
	void display()
	{
		cout<<"Average : "<<avg;
	}
};




int main()
{
	int m1,m2,r,s;
	cout<<"Enter roll no :";
	cin>>r;
	cout<<"enter the mark1 : ";
	cin>>m1;
	cout<<"enter the mark2 : ";
	cin>>m2;
	cout<<"enter the sport mark : ";
	cin>>s;
	Result R1(m1,m2,s,r);
	R1.display();
	
 } 
