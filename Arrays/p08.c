#include <stdio.h>
int main()
{
    int r,c;
    do
    {
        printf("Enter the number of rows: ");
        scanf("%d",&r);
        if(r<0)
        {
            printf("Number of rows cannot be less than zero.\n\nPlease enter again!!!!\n");
            continue;
        }
        printf("Enter the number of columns: ");
        scanf("%d",&c);
        if(c<0)
        {
            printf("Number of columns cannot be less than zero.\n\nPlease enter again!!!!\n");
            continue;
        }
        break;
    }while(1);
    int ar[r][c];
    printf("Enter the elements of the matrix in proper order:\n");
    int i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            scanf("%d",&ar[i][j]);
    }
    printf("\nTranspose of the entered matrix:\n");
    for(j=0;j<c;j++)
    {
        for(i=0;i<r;i++)
            printf("\t%d",ar[i][j]);
        printf("\n\n");
    }
    return 0;
}
