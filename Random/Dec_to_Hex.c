#include <stdio.h>

int main()
{
    int dec;
	printf("Enter the number: ");
	scanf("%d",&dec);
	int dc=dec;
	char hex[20]={'0'};
	char di[16]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
	int i=0;
	for(;dec>0;dec=dec/16)
	{
	    hex[i++]=di[dec%16];
	}
	int j=i-1;
	printf("The hexadecimal equivalent of %d is: ",dc);
	while(j>=0)
	{
	    printf("%c",hex[j--]);
	}
	printf("\n");
	return 0;
}
