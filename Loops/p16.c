#include <stdio.h>
int main()
{
	int n,cp=0,cn=0,cz=0;
	int i;
	for(i=0;i<100;i++)
	{
	    printf("Enter number: ");
	    scanf("%d",&n);
	    if(n>0)
	        cp++;
	    else
	        if(n<0)
	            cn++;
	        else
	            cz++;
	}
	printf("You entered %d positive number(s), %d negative number(s) and %d zero(s)\n",cp,cn,cz);
	return 0;
}
