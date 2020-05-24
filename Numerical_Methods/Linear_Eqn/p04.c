#include "Gauss.c"
#include "Jacobi.c"
#include <stdio.h>
int main()
{
    int ch;
    do{
        printf("Choices:\n1. Gauss-Elimination\n2. Jacobi's Method\n");
        printf("Enter your choice: ");
        scanf("%d",&ch);
        if(ch>0&&ch<3)
            break;
        printf("Incorrect choice!!!!\n Please enter choice again.........\n");
    }while(1);
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
    int lim;
	double e;
    switch(ch)
    {
        case 1: if(solveGauss(n,a))
                    printf("Unable to solve properly using Gauss Elimination\n");
                else
                    printf("\nSolved.....\n");
                break;
		case 2:	printf("Enter the maximum number of iterations: ");
    			scanf("%d",&lim);
    			printf("Enter the maximum error: ");
    			scanf("%lf",&e);
				if(solveJacobi(n,a,lim,e))
                    printf("Unable to solve properly using Jacobi's Method\n");
                else
                    printf("\nSolved.....\n");
                break;
    }
    return 0;
}
