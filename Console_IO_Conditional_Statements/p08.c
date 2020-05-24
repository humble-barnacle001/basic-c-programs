#include<stdio.h>
int main()
{
	double ft,cs;
	printf("Enter the temperature in Fahrenheit: ");
	scanf("%lf",&ft);
	cs=(ft-32)*5/9;
	printf("\nTemperature in Centigrade: %lf\n",cs);
	return 0;
}
