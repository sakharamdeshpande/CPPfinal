#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i;
	char* ptr;
	printf("Enter the element of array : ");
	scanf("%d",&n);
	n=n+1;
	ptr = (char*) calloc(n,sizeof(char));
	printf("Enter the name :");
	for(i = 0;i<n;i++){
		scanf("%c",(ptr+i));
	}
	printf("name : %s",ptr);	
	free(ptr);
}
