#include <stdio.h>
int main()
{
    int r1,c1,r2,c2;
    do
    {
        printf("Enter the number of rows of Matrix 1: ");
        scanf("%d",&r1);
        printf("Enter the number of columns of Matrix 1: ");
        scanf("%d",&c1);
        printf("Enter the number of rows of Matrix 2: ");
        scanf("%d",&r2);
        printf("Enter the number of columns of Matrix 2: ");
        scanf("%d",&c2);
        if(r1>0&&c1>0&&r2>0&&c2>0&&c1==r2)
            break;
        printf("Invalid Input!!!!\nPlease enter again.\n");
    }while(1);
    int m1[r1][c1];
    int m2[r2][c2];
    int m3[r1][c2];
    int i,j;
    printf("Enter the elements of First matrix: \n");
    for(i=0;i<r1;i++)
        for(j=0;j<c1;j++)
            scanf("%d",&m1[i][j]);
    printf("Enter the elements of Second matrix: \n");
    for(i=0;i<r2;i++)
        for(j=0;j<c2;j++)
            scanf("%d",&m2[i][j]);
    int p;
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            m3[i][j]=0;
            for(p=0;p<c1;p++)
                m3[i][j]+=m1[i][p]*m2[p][j];
        }
    }
    printf("\nProduct Matrix:\n\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
            printf("\t%d",m3[i][j]);
        printf("\n\n");
    }
}
