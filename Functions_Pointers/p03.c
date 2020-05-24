#include <stdio.h>
int main()
{
	int n;
	do
	{
		printf("Enter the positive number: ");
		scanf("%d",&n);
		if(n>0)		break;
	}while(1);
	int s=sd(n);
	printf("Sum of digits of %d is: %d\n",n,s);
}
int sd(int dec)
{
	if(dec<9)
		return dec;
	return sd(dec/10)+dec%10;
}
