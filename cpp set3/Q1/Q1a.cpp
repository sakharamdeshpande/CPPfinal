#include<iostream>
using namespace std;
int main()
{
	//a. counting number of digits in a number
	int number,counter=0;
	cout<<"Enter Number :";
	cin>>number;
	while(number!=0){
		number=number/10;
		counter++;
	}		
	cout<<"Number of Digits in give Number is: "<<counter;
	return 0;


}
