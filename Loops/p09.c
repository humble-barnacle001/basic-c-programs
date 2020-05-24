#include<stdio.h>
int main()
{
	int a=2;
	int i=2;
	printf("\nThe prime numbers between 1 to 100 are:\n");
	for(;a<100;a++)
	{
		i=2;
		while(a>i)
		{
			if(a%i==0)
			break;
			i++;
		}
		if(i==a)	printf("\t%d\n",a);
	}
	return 0;
}
