#include <stdio.h>

void posavg(int n,double av)
{
	if (n>av)
	{
		printf("%d is above average\n",n);
	}
	else
		if (n<av)
		{
			printf("%d is below average\n",n);
		}
		else
		{
			printf("%d is equal to the average\n",n);
		}
}

int main()
{
	int a,b,c=0;
	double av;
	printf("Enter the first number: ");
	scanf("%d",&a);
	printf("Enter the second number: ");
	scanf("%d",&b);
	printf("Enter the third number: ");
	scanf("%d",&c);
	av=(a+b+c)/3.0;
	printf("\nThe average of the numbers is: %lf \n\n",av);
	posavg(a,av);
	posavg(b,av);
	posavg(c,av);
	return 0;
}
