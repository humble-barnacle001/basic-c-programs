#include <stdio.h>
int main()
{
	int n;
	do
	{
		printf("Enter the number: ");
		scanf("%d",&n);
		if(n>=0)
			break;
		printf("Please enter a positive number to find reverse!!!!!!!\n");
	}while(1);
	int r=0;
	int n1=n;
	while(n1>0)
	{
		r=r*10+n1%10;
		n1=n1/10;
	}
	printf("\nReverse of %d is: %d\n",n,r);
	return 0;
}
