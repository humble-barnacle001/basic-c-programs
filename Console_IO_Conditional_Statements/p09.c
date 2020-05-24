#include<stdio.h>
int main()
{
	double sal;
	printf("Enter basic salary: ");
	scanf("%lf",&sal);
	double da=sal*60/100;
	printf("\nDearness Allowance: %0.2f\n",da);
	double hra=sal*15/100;
	printf("House Rent Allowance: %0.2f\n",hra);
	double gs=sal+da+hra;
	printf("\nGross salary is: %0.2f\n",gs);
	return 0;
}
