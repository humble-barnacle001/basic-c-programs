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
    int i;
    for(i=1;i<=n;i++)
    {
        s=s+i*(i+1);
    }
    printf("The sum of series upto %d is: %d\n",n,s);
    return 0;
}
