#include<iostream>
#include<Math.h>
#include<algorithm>
using namespace std;
class Student{
	int roll_no;
	int dd,mm,yy;
	int marks;
	public:
		void stu(){
			rol_();
			dat_();
			mark_();
		}
		void rol_(){
			cout<<"enter the roll no : ";
			cin>>roll_no;
		}
		void dat_(){
			cout<<"format (dd m yyyy) : ";
			cin>>dd>>mm>>yy;
		}
		void mark_(){
			cout<<"Enter the marks : ";
			cin>>marks;
		}
		void display(){
			cout<<"roll : "<<roll_no<<endl;
			cout<<"date : "<<dd<<"/"<<mm<<"/"<<yy<<endl;
			cout<<"marks : "<<marks<<endl;
		}
		int get_roll()
		{
			return this->roll_no;
		}
};
void sort_roll(Student *);
int main(){
	
	Student s[5];
	for(int i =0;i<5;i++){
		s[i].stu();
	}
	
	
	sort_roll(s);
	for(int i =0;i<5;i++){
		cout<<"--------------"<<endl;
		s[i].display();
	}
}

void sort_roll(Student *s)
{
	Student temp;
	for(int i =0; i<5 ;i++)
	{
		for(int j = i+1 ; j<5 ;j++)
		{
			if(s[i].get_roll()>s[j].get_roll())
			{
			 	temp = s[i];
			 	s[i] = s[j];
			 	s[j] = temp;
			}
		}
	}
}





