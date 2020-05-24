#include<stdio.h>
int main()
{
	double l,b,r;
	do
	{
		printf("Enter the length of rectangle: ");
		scanf("%lf",&l);
		if(l>0)	break;
		printf("Length of rectangle cannot be less than or equal to zero!!!!\nEnter again!\n");
	}while(1);
	do
	{
		printf("Enter the breadth of rectangle: ");
		scanf("%lf",&b);
		if(b>0)	break;
		printf("Breadth of rectangle cannot be less than or equal to zero!!!!\nEnter again!\n");
	}while(1);
	do
	{
		printf("Enter the radius of circle: ");
		scanf("%lf",&r);
		if(r>0)	break;
		printf("Radius of circle cannot be less than or equal to zero!!!!\nEnter again!\n");
	}while(1);
	double a1=l*b;
	double p1=2*(l+b);
	double a2=3.14*r*r;
	double p2=2*3.14*r;
	printf("\nThe perimeter of the rectangle is: %lf units\n",p1);
	printf("The area of the rectangle is: %lf square units\n",a1);
	printf("\nThe circumference of the circle is: %lf units\n",p2);
	printf("The area of the circle is: %lf square units\n",a2);
	return 0;
}
