#include <stdio.h>
#include <math.h>
double dist(double a[],double b[])
{
	return sqrt(pow(a[0]-b[0],2)+pow(a[1]-b[1],2));
}
double area(double a[], double b[], double c[])
{
	double AB=dist(a,b);
	double BC=dist(b,c);
	double CA=dist(c,a);
	double s=(AB+BC+CA)/2;
	return sqrt(s*(s-AB)*(s-BC)*(s-CA));
}
int main()
{
	double a[2],b[2],c[2],x[2];
	printf("Enter the co-ordinates of the triangle:\n");
	printf("Enter x1: ");
	scanf("%lf",&a[0]);
	printf("Enter y1: ");
	scanf("%lf",&a[1]);
	printf("Enter x2: ");
	scanf("%lf",&b[0]);
	printf("Enter y2: ");
	scanf("%lf",&b[1]);
	printf("Enter x3: ");
	scanf("%lf",&c[0]);
	printf("Enter y3: ");
	scanf("%lf",&c[1]);
	printf("\nEnter the co-ordinates of the point:\n");
	printf("Enter x: ");
	scanf("%lf",&x[0]);
	printf("Enter y: ");
	scanf("%lf",&x[1]);
	double ar=area(a,b,c);
	double ar2=area(x,a,c);
	double ar3=area(x,a,b);
	double ar1=area(x,b,c);
	if(ar1+ar2+ar3<=ar)
	{
		printf("\nReturned: 1\n");
		return 1;
	}
	printf("\nReturned: 0\n");
	return 0;
}
