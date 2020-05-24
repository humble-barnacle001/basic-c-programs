#include <stdio.h>
int main()
{
    int n;
    do{
       printf("Enter the value of n: ");
       scanf("%d",&n);
       if(n<0)
       {
           printf("Please enter a positive number.\nEnter again!!!!\n");
           continue;
       }
       break;
    }while(1);
    int s=0;
    int i=1;
    while(i<=n)
    {
        s=s+factor(i,i);
        i++;
    }
    printf("The sum of series for n=%d is: %d\n",n,s);
    return 0;
}
int factor(int n,int i)
{
    if(i<=1)
        return i;
    if(n%i==0)
        return i+factor(n,i-1);
    return factor(n,i-1);
}
