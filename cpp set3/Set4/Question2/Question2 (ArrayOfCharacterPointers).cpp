#include<iostream>
#include<string.h>
using namespace std;
void display(char * name[])
{
	int i,j;
	for( i=0;i<5;i++)
	{
		
	int x= strlen(*(name+i));
		for( j =0;j<=x;j++)
		{
			cout<<*(*(name+i)+j);
		}
			cout<<endl;
	    }
}

int main()
{
	char *name[5]={"abhi","yash","dnyanu","kaustubh","tejas"};
	display(name);
	
	
}

