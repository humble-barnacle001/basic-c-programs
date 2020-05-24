#include <stdio.h>
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
	if(a<av)
		printf("%d is below average\n",a);
	else
		printf("%d is above average\n",a);
	if(b<av)
		printf("%d is below average\n",b);
	else
		printf("%d is above average\n",b);
	if(c<av)
		printf("%d is below average\n",c);
	else
		printf("%d is above average\n",c);
	return 0;
}
