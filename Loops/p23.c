#include <stdio.h>
#include <math.h>
int main()
{
	int dec;
	printf("Enter a decimal integer: ");
	scanf("%d",&dec);
	int oct=0;
	int d1=dec;
	int i=0;
	char cr='\0';
	if(dec<0)
	{
	    cr='-';
	    dec=-dec;
	}
	for(;dec>0;dec=dec/8,i++)
	{
	    oct=oct+(dec%8)*(int)pow(10,i);
	}
	printf("Octal equivalent of %d is: %c%d\n",d1,cr,oct);
	return 0;
}
