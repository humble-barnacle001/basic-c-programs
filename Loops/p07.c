#include <stdio.h>
int main()
{
    int n;
    do{
       printf("Enter the value of n: ");
       scanf("%d",&n);
       if(n<0)
       {
           printf("Value of n MUST be greater than 1.\nEnter again!!!!\n");
           continue;
       }
       break;
    }while(1);
    long s=0;
    int i=1;
    while(i<=n)
    {
        s=s+fact(i);
        i++;
    }
    printf("The sum of series for n=%d is: %ld\n",n,s);
    return 0;
}
int fact(int i)
{
    if(i<2)
        return 1;
    return i*fact(i-1);
}
