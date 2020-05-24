#include <stdio.h>
#include <math.h>
int solveJacobi(int n,double a[n][n+1],int lim,double e)
{
	printf("\nJacobi's Method:--------------->\n");
    double x[n];
    int i,j,k;
    for(i=0;i<n;i++)
    {
        x[i]=0;
    }
    double e1,fl;
    double c,t;
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
        if(fl<e)
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
