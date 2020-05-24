#include <stdio.h>
double solveLang(int n,double x[],double f[],double X)
{
	printf("\nLangrange's Method of Interpolation:\n");
	int i;
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
		{
			printf("Cannot solve by Langrange's Method due to DIVISION BY ZERO\n");
			return 1;
		}
	}
	double p=0;
	for(i=0;i<n;i++)
		p=p+f[i]*l[i];
	printf("Interpolated value: \n\tf(%lf) = %lf\n",X,p);
	return p;
}
