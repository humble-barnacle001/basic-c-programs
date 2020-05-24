#include <stdio.h>
int main(int ct,char* arg[])
{
    int n1,n2;
    int i=0;
    for(i=0,n1=0;arg[ct-2][i]!='\0';i++)
    {
        n1=n1*10+(int)(arg[ct-2][i]-'0');
    }
    for(i=0,n2=0;arg[ct-1][i]!='\0';i++)
    {
        n2=n2*10+(int)(arg[ct-1][i]-'0');
    }
    printf("\nLast two arguments passed is: %s, %s\n\n",arg[ct-2],arg[ct-1]);
    printf("Sum of %d, %d is: %d\n",n1,n2,n1+n2);
    return 0;
}
