#include<stdio.h>
int main()
{
	int a,sd=0;
	do
	{	
		printf("Enter the number: ");
		scanf("%d",&a);
		if(a>99&&a<1000)	break;
		printf("Enter a proper three digit number!!!!!\nEnter again!\n");
	}while(1);
	for(;a>0;a=a/10)
		sd=sd+a%10;
	printf("The sum of digits is = %d \n",sd);
	return 0;
}	
