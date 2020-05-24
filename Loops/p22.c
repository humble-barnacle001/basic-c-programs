#include <stdio.h>
int main() 
{
	printf("ASCII value   Equivalent Character\n");
	int i=0;
	while(i<255)
	{
	    if(i<10)
	    printf("     %d               %c\n",i,(char)i);
	    else
	    if(i<100)
	    printf("     %d              %c\n",i,(char)i);
	    else
	    printf("    %d              %c\n",i,(char)i);
	    i++;
	}
	return 0;
}
