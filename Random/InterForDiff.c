#include <stdio.h>
int fact(int n)
{
	if(n<=1)
		return 1;
	return n*fact(n-1);
}
int solveForward()
{
	printf("Interpolation using Newton's Forward Difference Method:\n\n");
	int n;
	do
	{
		printf("Enter the number of data points: ");
		scanf("%d",&n);
		if(n>2)
			break;
		printf("Must enter at least two data points for interpolation!!!!\nPlease enter again.\n");
	}while(1);
	printf("\nWARNING: Two consecutive values of x must be equidistant in the same direction\n");
	double x[n];
	double f[n];
	double X;
	int i,j;
	for(i=0;i<n;i++)
	{
		printf("\nEnter the value of x: ");
		scanf("%lf",&x[i]);
		printf("Enter the value of f(%lf): ",x[i]);
		scanf("%lf",&f[i]);
	}
	printf("\n\nEnter the value of point to be found using interpolation: ");
	scanf("%lf",&X);
	double h=x[1]-x[0];
	double s=(X-x[0])/h;
	double df[n-1][n-1];
	//initialise the first difference
	for(j=1;j<n;j++)
		df[0][j-1]=f[j]-f[j-1];
	//initialise upto next n-1 difference
	for(i=1;i<n-1;i++)
		for(j=1;j<n-i;j++)
			df[i][j-1]=df[i-1][j]-df[i-1][j-1];
	double p[n];
	p[0]=f[0];
	double t=s;
	for(i=1;i<n;i++)
	{
		t=s;
		for(j=1;j<i;j++)
			t*=(s-j);
		p[i]=p[i-1]+t/fact(i)*df[i-1][0];
	}
	printf("Tnterpolated value:\n\tf(%lf) = %lf",X,p[n-1]);
	return 0;
}
int main()
{
	return(solveForward());
}
