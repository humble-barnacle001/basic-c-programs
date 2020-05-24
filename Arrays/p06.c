#include <stdio.h>
int main()
{
    int i,j;
    int ar[5][6];
    int mx=0;
    for(i=0;i<5;i++)
    {
        ar[i][5]=0;
        for(j=0;j<5;j++)
        {
            printf("Enter the marks scored by student %d in subject %d: ",i+1,j+1);
            scanf("%d",&ar[i][j]);
            ar[i][5]+=ar[i][j];
        }
        if(ar[i][5]>ar[mx][5])
            mx=i;
        printf("\n");
    }
    for(i=0;i<5;i++)
        printf("Total marks scored by student %d is: %d\n",i+1,ar[i][5]);
    printf("\nHighest Marks: %d\n",ar[mx][5]);
    return 0;
}
