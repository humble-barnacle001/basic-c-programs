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
    int n1;
    for(n1=n;n1>0;n1=n1/10)
    {
        s=s+n1%10;
    }
    printf("The sum of digits of %d is: %d\n",n,s);
    return 0;
}
