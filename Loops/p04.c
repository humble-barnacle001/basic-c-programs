#include <stdio.h>

int main(void)
{
    int n;
    do{
       printf("Enter the number: ");
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
        s=s+i;
    }
    printf("The sum of series upto n=%d is: %d\n",n,s);
    return 0;
}
