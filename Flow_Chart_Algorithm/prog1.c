#include <stdio.h>
int main()
{
	int a,b,c=0;
	int mx;
	printf("Enter the first number: ");
	scanf("%d",&a);
	printf("Enter the second number: ");
	scanf("%d",&b);
	printf("Enter the third number: ");
	scanf("%d",&c);
	if(a>b)
	{
		if(a>c)
			mx=a;
		else
			mx=c;
	}
	else
	{
		if(b>c)
			mx=b;
		else
			mx=c;
	}
	printf("The largest number is: %d \n",mx);
	return 0;
}
