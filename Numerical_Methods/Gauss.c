#include <stdio.h>
int solveGauss()
{
    int n;
    do
    {
        printf("Enter the number of unknowns: ");
        scanf("%d",&n);
        if(n>0)
            break;
        printf("Number of unknowns cannot be less than or equal to 0\nPlease enter again!!!\n");
    }while(1);
    double a[n][n+1];
    double x[n];
    int i,j,k;
    for(i=0;i<n;i++)
    {
        printf("\nEquation number %d.....\n",i+1);
        for(j=0;j<n;j++)
        {
            printf("Enter constant for x%d: ",j+1);
            scanf("%lf",&a[i][j]);
        }
        printf("Enter the value of b%d: ",i+1);
        scanf("%lf",&a[i][n]);
    }
    double c;
    for(i=0;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            c=a[i][j]/a[i-1][j];
            for(k=0;k<n+1;k++)
                a[i][k]=a[i][k]-c*a[i-1][k];
        }
    }
    int fl=0;
    double k1;
    for(i=n-1,k1=0;i>=0;i--)
    {
        for(j=i+1,k1=0;j<n;j++)
            k1=k1+a[i][j]*x[j];
        if((a[i][n]-k1)!=0)
            x[i]=(a[i][n]-k1)/a[i][i];
        else
        {
            printf("DIVISION BY ZERO ERROR AT INDEX %d\n",i);
            fl=1;
            break;
        }
    }
    if(!fl)
    {
        printf("Solution of unknowns (upto 11 decimal points): \n");
        for(i=0;i<n;i++)
            printf("x%d = %0.11f\n",(i+1),x[i]);
        return 0;
    }
    return 1;
}
