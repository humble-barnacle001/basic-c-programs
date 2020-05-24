#include<stdio.h>
int main()
{
	int a,sd=0;
	printf("Enter the number: ");
	scanf("%d",&a);
	for(;a>0;a=a/10)
		sd=sd+a%10;
	printf("The sum of digits is = %d \n",sd);
	return 0;
}	
