#include<stdio.h>
int main()
{
	int amt;
	int fl=1,f=0,t=0,h=0;
	do
	{
		if(fl==0)
			printf("INVALID!!! Please enter again!\n");
		printf("Enter the amount: ");
		scanf("%d",&amt);
		if(amt<=0)
		{
			fl=0;
			continue;
		}
		h=amt/100;
		amt=amt%100;
		f=amt/50;
		amt=amt%50;
		t=amt/10;
		amt=amt%10;
		if(amt>0)
		{
			printf("Enter in multiples of 10 only\n");
			fl=0;
			continue;
		}
		fl=1;
		printf("\nThe cashier has to give:\n");
		if(h>0)
			printf("Number of Rs. 100 notes = %d\n",h);
		if(f>0)
			printf("Number of Rs. 50 notes = %d\n",f);
		if(t>0)
			printf("Number of Rs. 10 notes = %d\n",t);
	}while(fl==0);
}
