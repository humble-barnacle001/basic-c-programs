#include <stdio.h>
int factFD(int n)
{
	if(n<=1)
		return 1;
	return n*factFD(n-1);
}
double solveForward(int n,double x[],double f[],double X)
{
	printf("\nInterpolation using Newton's Forward Difference Method:\n");
	int i,j;
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
		p[i]=p[i-1]+t/factFD(i)*df[i-1][0];
	}
	printf("Interpolated value:\n\tf(%lf) = %lf\n",X,p[n-1]);
	return p[n-1];
}
