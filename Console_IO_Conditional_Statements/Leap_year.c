#include<stdio.h>
int main()
{
    int yr;
    do{
        printf("Enter the value of year: ");
        scanf("%d",&yr);
        if(yr>0)
            break;
        printf("INVALID Input!!!!\nPlease enter again\n");
    }while(1);
    int l=0;
    l=yr%100==0?yr%400==0?1:0:yr%4==0?1:0;
    if(l)
        printf("\n%d is a leap year\n",yr);
    else
        printf("\n%d is not a leap year\n",yr);
    return 0;
}
