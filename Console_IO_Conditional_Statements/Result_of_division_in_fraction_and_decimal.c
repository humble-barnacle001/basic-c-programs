#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter the first number: ");
	scanf("%d",&a);
	printf("Enter the second number: ");
	scanf("%d",&b);
	int mx,mn;
	mn=a+b-(mx=a>b?a:b);
	if(mn==0)
	{
		printf("DIVIDE BY ZERO ERROR!!!!!!!!!!\n");
		return 1;
	}
	double r=(1.0*mx)/mn;
	char sn='\0';
	if(mn<0)
	{
		if(mx<0)
		{
			mx=-mx;
			mn=-mn;
		}
		else
		{
			sn='-';
			mn=-mn;
		}
	}
	printf("\nResult in fraction is: %c%d/%d\n",sn,mx,mn);
	printf("Result in decimal is: %lf\n",r);
	return 0;
}
