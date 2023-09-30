#include <iostream>
using namespace std;

display()
{
	cout<<"No parameters entered"<<endl;
}
display(int a)
{
	cout<<"Parameter entered is an int :"<< a<<endl;
}
display(double b)
{
	cout<<"Parameter entered is a flaot :"<< b<<endl;
}

int main()
{
	int count;
	
	while(count++)
	
	display();
	display(20);
	display(1.50f);
	display('A');
	count++;
	cout<<"the number of times the constructor is called"<<count<<endl;
	
}
