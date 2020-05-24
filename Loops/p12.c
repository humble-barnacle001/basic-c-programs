#include <stdio.h>
int main(void)
{
	int n;
	printf("Enter the value of n: ");
    scanf("%d",&n);
    int i=1;
    while(i<11)
	{
		if(i<10)
			printf("%d * %d  = %d\n",n,i++,(n*i));
		else
			printf("%d * %d = %d\n",n,i++,(n*i));
	}
	return 0;
}
