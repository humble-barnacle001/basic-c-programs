#include<stdio.h>
int main()
{
    int sec;
    do
    {	printf("Enter time in seconds: ");
    	scanf("%d",&sec);
        if(sec>=0)
            break;
        printf("INVALID Input!!!!!\nPlease enter again!\n");
    }while(1);
    int h=0,m=0,s=0;
    s=sec;
    h=s/3600;
    s=s%3600;
    m=s/60;
    s=s%60;
    if(h==0&&m==0&&s==0)
    {
        printf("You entered 0 second\n");
        return 0;
    }
    if(sec<2)	printf("\n%d second is equal to ",sec);
    else        printf("\n%d seconds is equal to ",sec);
    if(h<2)
        printf("%d hour ",h);
    else
        printf("%d hours ",h);
    if(m<2)
        printf("%d minute ",m);
    else
        printf("%d minutes ",m);
    if(s<2)
        printf("%d second\n",s);
    else
        printf("%d seconds\n",s);
    return 0;
}
