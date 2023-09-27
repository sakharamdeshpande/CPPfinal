#include<iostream>
#include<string.h>
using namespace std;
class Address
{
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
	int id;
	int marks[5];
	Address a1;
	public : 
		Student(int id,int mark[],char landmark[],int pinCode):a1(landmark,pinCode)
		{
				this->id = id;
				for(int i = 0; i<5 ;i++)
				{
					this->marks[i]=mark[i];
				}
			
		}
		
		void Display()
		{
			cout<<"-----------------------------"<<endl;
			cout<<"Id : "<<id<<endl;
			cout<<"marks : ";
			for(int i = 0; i<5 ;i++)
				{
					cout<<this->marks[i]<<" ";
				}
			cout<<endl;
			a1.Display();
			
		}
};




int main()
{
	Student *s1[3];
	int id,pin;
	int mark[5];
	char landmark[50];
	for(int i =0; i<2; i++)
	{
		cout<<"Enter student id : ";
		cin>>id;
		cout<<"Enter marks 5 :";
		for(int j =0; j<5;j++)
		{
			cin>>mark[j];
		}
		cout<<"Enter Land mark : ";
		cin>>landmark;
		cout<<"Enter pincode : ";
		cin>>pin;
		s1[i] = new Student(id,mark,landmark,pin);
	}
	for(int i = 0;i<3;i++)
	{
		s1[i]->Display();
	}
 
}



















