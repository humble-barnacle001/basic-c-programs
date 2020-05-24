#include<stdio.h>
int main()
{
	int a,r;
	printf("Enter the number: ");
	scanf("%d",&a);
	while(a>0)
	{
		int d=a%10;
		r=r*10+d;
		a=a/10;
	}
	printf("The reverse of the number is %d\n",r);
	return 0;
}
