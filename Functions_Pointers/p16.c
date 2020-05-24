#include <stdio.h>
int ctdig(int n)
{
    int ct=0;
    while(n>0)
    {
        ct++;
        n=n/10;
    }
    return ct;
}
int main()
{
    int n;
    printf("Enter the integer: ");
    scanf("%d",&n);
    int fl=0;
    if(n<0)
    {
        fl=1;
        n=-n;
    }
    int l=ctdig(n);
    if(fl)
        l=l+1;
    char num[l+1];
    int n1,i;
    for(n1=n,i=l-1;n1>0;i--,n1/=10)
    {
        num[i]=(char)(n1%10+'0');
    }
    num[l]='\0';
    if(fl)
    {
        num[0]='-';
        n=-n;
    }
    printf("\n%d as String is: \"%s\"\n",n,num);
}
