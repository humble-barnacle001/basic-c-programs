#include<stdio.h>
int main()
{
    char A,B,C;
    printf("Enter A: ");
    scanf("%c",&A);
    printf("Enter B: ");
    scanf("%c",&B);
    printf("Enter C: ");
    scanf("%c",&C);
    int i=0,j=0,k=0;
    printf("\n");
    for(;i<5;i++)
        printf("%c ",A);
    printf("\n");
    for(i=0;i<2;i++)
    {
        printf("%c ",A);
        for(j=0;j<2-i;j++)
            printf("%c ",B);
        while(i==1)
        {
         printf("%c ",C);
         break;
        }
        printf("%c ",B);
        printf("%c ",A);
        printf("\n");
    }
    for(i=0;i<1;i++)
    {
        printf("%c ",A);
        for(j=0;j<2-i;j++)
            printf("%c ",B);
        while(i==2)
        {
            printf("%c ",C);
            break;
        }
        printf("%c ",B);
        printf("%c ",A);
        printf("\n");
    }
    for(;k<5;k++)
        printf("%c ",A);
    return 0;
}