#include "InterpolLang.c"
#include "InterForDiff.c"
#include "InterBackDiff.c"
#include <stdio.h>
int main()
{
	int ch;
    do{
        printf("Choices:\n1. Langrange's Method\n");
		printf("2. Newton's Forward Difference Method\n");
		printf("3. Newton's Backward Difference Method\n");
        printf("Enter your choice: ");
        scanf("%d",&ch);
        if(ch>0&&ch<4)
            break;
        printf("Incorrect choice!!!!\n Please enter choice again.........\n");
    }while(1);
    int n;
	do
	{
		printf("Enter the number of data points: ");
		scanf("%d",&n);
		if(n>2)
			break;
		printf("Must enter at least two data points for interpolation!!!!\nPlease enter again.\n");
	}while(1);
	double x[n];
	double f[n];
	double X;
	int i;
	for(i=0;i<n;i++)
	{
		printf("\nEnter the value of x: ");
		scanf("%lf",&x[i]);
		printf("Enter the value of f(%lf): ",x[i]);
		scanf("%lf",&f[i]);
	}
	printf("\n\nEnter the value of point to be found using interpolation: ");
	scanf("%lf",&X);
    switch(ch)
    {
        case 1: solveLang(n,x,f,X);
                break;
        case 2:	solveForward(n,x,f,X);
        		break;
        case 3:	solveBackward(n,x,f,X);
        		break;
    }
    printf("\n\nThank You!!!!\nExiting............\n");
    return 0;
}
