#include <stdio.h>
int main()
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
    int f=fact(n);
    printf("The factorial of %d is: %d\n",n,f);
    return 0;
}
int fact(int i)
{
    if(i<2)
        return 1;
    return i*fact(i-1);
}
