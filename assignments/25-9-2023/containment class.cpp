#include<iostream>
#include<string.h>
using namespace std;
class Address
{ 
//	public:
	char landmark[30];
	long pinCode;
		public :
				Address(char landmark[],int pinCode)
				{
					strcpy(this->landmark,landmark);
					this->pinCode = pinCode;
				}
				void Display()
				{
					cout<<"Landmark : "<<landmark<<endl;
					cout<<"Pincode : "<<pinCode<<endl;
				}
};


class Student
{	
//public:
	int id;
	int marks[5];
	Address a1;
	public : 
		Student(int id,int marks[],char landmark[],int pinCode):a1(landmark,pinCode)
		{
				this->id = id;
				for(int i = 0; i<5 ;i++)
				{
					this->marks[i]=marks[i];
				}
				
		}
		
		void Display()
		{
			cout<<"Id : "<<id<<endl;
			cout<<"marks : ";
			for(int i = 0; i<5 ;i++)
				{
					cout<<marks[i]<<" ";
				}
			cout<<endl;
			a1.Display();
			
		}
};




int main()
{
	
	int mark[5] ={10,20,30,40,50};
	Student s1(1,mark,"Fortune Business",411057);
	s1.Display();
	//cout<<s1.a1.landmark;  only when all members are Fublic


}
