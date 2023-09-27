#include<iostream>
using namespace std;
static int a = 0;
int main(){
	int i =1,sum = 0;
	while(i<=20){
		sum= sum + i;
		i++;
	}
	cout<<"sum = "<<sum;
}
