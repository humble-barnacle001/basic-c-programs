#include <stdio.h>
#include <math.h>
double c;
double f(double x)
{
	return x*tan(x)-c;
}
double abs1(double x)
{
	if(x<0)
		return -x;
	return x;
}
double f1(double x)
{
	return (tan(x)+x/cos(x)/cos(x));
}
double bisection(double a,double b,double e)
{
	int i;
	double c;
	for(i=0;i<9999999;i++)
	{
		if(abs1(f(a))<=e)
		{
			printf("Root: %lf\n",a);
			return 0;
		}
		if(abs1(f(b))<=e)
		{
			printf("Root: %lf\n",b);
			return 0;
		}
		c=(a+b)/2;
		if(abs1(f(c))<=e)
		{
			printf("Root: %lf\n",c);
			return 0;
		}
		if(f(a)*f(c)<0)
			b=c;
		else if(f(b)*f(c)<0)
				a=c;
	}
	return 1;
}
double NewRap(double x0,double e)
{
	int i;
	double x1;
	double y0,y1;
	double del=0.00001;
	for(i=0;i<9999999;i++)
	{
		y0=f(x0);
		y1=f1(x0);
		if(abs1(y1)<=del)
		{
			printf("Too small slope......\n");
			return 1;
		}
		x1=x0-(y0/y1);
		if(abs1(x1-x0)/x1<=e)
		{
			printf("Root: %lf\n",x1);
			return 0;
		}
		x0=x1;
	}
	return 1;
}
void genroot()
{
	int i,ct=0;
	printf("\n\nRoots using Bisection method: \n");
	for(i=-100.0001;i<100&&ct<3;i+=1)
	{
		if(f(i)*f(i+1)<0)
		{
			if(!bisection(i,i+1,0.0001))
			ct++;
		}
	}
	printf("\n\nRoots using Newton-Raphson method: \n");
	for(i=-50.0001,ct=0;i<100&&ct<3;i+=1)
	{
		if(f(i)*f(i+1)<0)
		{
			if(!NewRap(i,0.0001))
			ct++;
		}
	}
}
int main()
{
	printf("Enter the value of c: ");
	scanf("%lf",&c);
	genroot();
	return 0;
}
