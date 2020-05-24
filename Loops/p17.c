#include <stdio.h>
int main() 
{
	int n;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	int i;
	int a=0,b=1,c;
	printf("First %d terms of Fibonacci series: ",n);
	for(i=0;i<n;i++)
	{
	    printf("%d",a);
	    if(i==n-1)
	        printf("\n");
	    else
	        printf(", ");
	    c=a+b;
	    a=b;
	    b=c;
	}
	return 0;
}
