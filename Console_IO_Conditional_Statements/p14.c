#include<stdio.h>
int main()
{
	int n,rn=0,d=0,r=0;
	do
	{
		printf("Enter a five digit number: ");
		scanf("%d",&n);
		if(n>9999&&n<100000)
			break;
		printf("INVALID INPUT!!!!!\nEnter again!\n\n");
	}while(1);
	printf("\nEntered number = %d\n\n",n);
	while(n>0)
	{
		d=n%10;
		n=n/10;
		if(d==9)
		{
			d=0;
		}
		else
			d=d+1;
		rn=rn*10+d;
	}
	while(rn>0)
	{
		d=rn%10;
		rn=rn/10;
		r=r*10+d;
	}
	if(r<10000)
		printf("The resultant number = 0%d\n",r);
	else
		printf("The resultant number = %d\n",r);
	return 0;
}
