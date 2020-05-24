#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter the first number: ");
	scanf("%d",&a);
	printf("Enter the second number: ");
	scanf("%d",&b);
	printf("Entered numbers: %d, %d \n", a,b);
	a=a+b;		/*Swapping numbers*/
	b=a-b;		/*Swapping numbers*/
	a=a-b;		/*Swapping numbers*/
	printf("Swapped numbers: %d, %d \n", a,b);
}
