#include<iostream>
using namespace std;
int main(){
	int num=1,count=0;
	int n = num,onum,x,res,sum=0;
	while(num <=999 )
	{
		onum = num;
		if(n!= 0){
			x = n % 10;
			n = n/10;
			res = x * x * x;
			sum = sum + res;
		}
		if(sum == onum )
		{
			cout<<onum<<" ";
			count++;
		}
		num++;
	}
	cout<<"total arm : "<<count;
}
