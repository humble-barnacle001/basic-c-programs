#include<stdio.h>
int main()
{
	int a=2,x=0;
	int i=2;
	printf("The first 100 prime numbers are:\n\n");
	for(;x<100;a++)
	{
		i=2;
		while(a>i)
		{
			if(a%i==0)
			break;
			i++;
		}
		if(i<a);
		else
			{		
				printf("\t%d\n",a);
				x++;
			}
	}
	return 0;
}
