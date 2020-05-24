#include <stdio.h>
#include <math.h>
int solveJacobi()
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
        x[i]=0;
    }
    int lim;
    double e,e1,fl;
    printf("Enter the maximum number of iterations: ");
    scanf("%d",&lim);
    printf("Enter the maximum error: ");
    scanf("%lf",&e);
    double c,t;
    printf("Jacobi's Method............\n");
    for(k=0;k<lim;k++)
    {
        fl=0;
        for(i=0;i<n;i++)
        {
            for(j=0,c=0;j<n;j++)
            {
                if(i!=j)
                    c+=a[i][j]*x[j];
            }
            t=((a[i][n]-c)/a[i][i]);
            e1=fabs((x[i]-t)/x[i]);
            x[i]=t;
            if(e1>e)
                fl=e1;
            if(fl==0)
                break;
        }
        if(fl<e||x[i]==0)
            break;
    }
    if(k==lim)
    {
        printf("Does not converge after %d iterations....\n",lim);
        return 1;
    }
    printf("\nFinal Solution after %d iterations:\n",k);
    for(i=0;i<n;i++)
        printf("x%d = %.10f\n",i+1,x[i]);
    return 0;
}
