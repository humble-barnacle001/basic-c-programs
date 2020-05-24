#include<stdio.h>
int main()
{
	int a;
	printf("Enter the number to check for prime: ");
	scanf("%d",&a);
	int i=2;
	while(a>i)
	{
		if(a%i==0)
		break;
		i++;
	}
	if(i<a)
		printf("%d is not a prime number\n",a);
	else
		printf("%d is a prime number\n",a);
	return 0;
}
