#include <stdio.h>
int solveLang()
{
	printf("Langrange's Method of Interpolation:\n\n'");
	int n;
	do
	{
		printf("Enter the number of data points: ");
		scanf("%d",&n);
		if(n<2)
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
	double l[n];
	double num,den;
	int j;
	for(i=0;i<n;i++)
	{
		num=1;
		den=1;
		for(j=0;j<i;j++)
		{
			num*=(X-x[j]);
			den*=(x[i]-x[j]);
		}
		for(j=i+1;j<n;j++)
		{
			num*=(X-x[j]);
			den*=(x[i]-x[j]);
		}
		if(den!=0)
			l[i]=num/den;
		else
			return 1;
	}
	double p=0;
	for(i=0;i<n;i++)
		p=p+f[i]*l[i];
	printf("\nInterpolated value: \n\tf(%lf) = %lf\n",X,p);
	return 0;
}
int main()
{
	return (solveLang());
}
