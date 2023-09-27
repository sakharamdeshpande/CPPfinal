#include <iostream>
#include <istream>
#include <ostream>
#include <sstream>
#include <string.h>
#include<stdlib.h>
#include<iomanip>
 
using namespace std;
 
int main()
{
	char str[30];
	
	cout<<"*********"<<"Unformatted I/o Operations : "<<endl<<"***************";
	cout<<"Enter the String to display : ";
	cin>>str;
	cout<<"String in unformatted form : "<<str<<endl;
	fflush(stdin);
	
	cout<<"Enter the string including whitespaces : ";
	cin.getline(str,25);
	
	cout<<"Unformatted String including whitespaces : ";
	puts(str);
	
	cout<<"*********"<<"Formatted I/o Operations : "<<"***************";
	cout<<"\n Enter the String to display : ";
	cin>>str;
	
	cout<<"Entered string in formatted form : "<<endl;
	cout<<" \t  "<<str<<endl;
	cout<<endl;
	cout<<"Using Setwidth Function : ";
	cin>>str;
	cout<<setw(100)<<str<<endl;
	
	float pi;
	fflush(stdin);
	cout<<"Using SetPrecision Function : ";
	cin>>pi;
	cout<<setprecision(4)<<pi<<endl;

	cout<<"Using SetFill Function : ";
	cin>>str;
	cout<<setfill('*')<<setw(10)<<" ";
	cout<<str<<endl;
	fflush(stdin);
	cout<<"Enter the string including whitespaces : ";
	cin.getline(str,25);
	fflush(stdin);
	istringstream name(str);
	string newName;
	name>>ws>>newName;
	cout<<"String in formatted op without whitespace : ";
	cout<<newName;
	//getline(name>>ws,newName);

}
