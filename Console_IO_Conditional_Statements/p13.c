#include<stdio.h>
int main()
{
	double pm=52/100.0,pw=1-pm;
	double lt=48/100.0,it=1-lt;
	double lw=0,iw=0;
	int t=80000;
	int nim=0.35*t;
	int nit=t*it;
	int niw=nit-nim;
	printf("Total number of iliterates = %d",nit);
	printf("\nNumber of iliterate men = %d",nim);
	printf("\nNumber of iliterate women = %d\n",niw);
	return 0;
}
