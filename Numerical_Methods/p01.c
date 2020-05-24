#include <stdio.h>
double f(double x)
{
	return 3*x*x*x+9*x*x-4*x+2;
}
double abs1(double x)
{
	if(x<0)
		return -x;
	return x;
}
double f1(double x)
{
	return (f(x+0.0000001)-f(x))/0.0000001;
}
double bisection(double a,double b,double e)
{
	printf("Using Bisection Method.............\n\n");
	int i;
	double ta=a,tb=b;
	double c;
	for(i=0;i<9999999;i++)
	{
		if(abs1(f(a))<=e)
		{
			printf("Convergent Solution: f(%lf)=%lf\nAfter %d iterations\n",a,f(a),i);
			return 0;
		}
		if(abs1(f(b))<=e)
		{
			printf("Convergent Solution: f(%lf)=%lf\nAfter %d iterations\n",b,f(b),i);
			return 0;
		}
		c=(a+b)/2;
		if(abs1(f(c))<=e)
		{
			printf("Convergent Solution: f(%lf)=%lf\nAfter %d iterations\n",c,f(c),i);
			return 0;
		}
		if(f(a)*f(c)<0)
			b=c;
		else if(f(b)*f(c)<0)
				a=c;
	}
	printf("Non-Converging after %d iterations with limits %lf to %lf\n",i,ta,tb);
	return 1;
}
double NewRap(double x0,double e)
{
	int i;
	double tt=x0;
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
		if(abs1((x1-x0)/x1)<=e)
		{
			printf("Convergent Solution: f(%lf)=%lf\nAfter %d iterations\n",x1,f(x1),i);
			return 0;
		}
		x0=x1;
	}
	printf("Does not converge in %d iterations with guess root = %lf\n",i,tt);
	return 1;
}
int main()
{
	int ch;
	do
	{
		printf("Options:\n1. Bisection\n2. Regula-Falsi\n3. Newton-Raphson\n\nEnter now: ");
		scanf("%d",&ch);
		if(ch>0||ch<4)		//checking validity of choice input
			break;
		printf("Invalid input of choice.........\nPlease enter again!!!!\n\n");
	}while(1);
	double a,b,e;
	switch(ch)
	{
		case 1: printf("Enter the top limit: ");
				scanf("%lf",&a);
				printf("Enter the bottom limit: ");
				scanf("%lf",&b);
				if(a>b)
				{
					int t=a;
					a=b;
					b=t;
				}
				printf("Enter the maximum error tolerance: ");
				scanf("%lf",&e);
				bisection(a,b,e);			//call to solve using bisection method
				break;
		case 2: printf("\nRegula-Falsi Method is not yet supported.........\nPlease wait for an upgrade\n");
				break;
		case 3: printf("Enter the guess root of the polynomial: ");
				scanf("%lf",&a);
				printf("Enter the maximum error tolerance: ");
				scanf("%lf",&e);
				NewRap(a,e);				//call to solve uing Newton-Raphson Method
				break;
	}
	printf("\nThankYou!!!\nExiting...............\n");
	return 0;
}
