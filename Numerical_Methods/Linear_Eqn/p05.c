#include "Gauss.c"/*
#include "GaussPivot.c"*/
#include "Jacobi.c"
#include <stdio.h>
double a[3][4];
void eq1()
{
	a[2][0]=1;	a[2][1]=1;	a[2][2]=1;	a[2][3]=6;
	a[0][0]=1;	a[0][1]=1;	a[0][2]=-1;	a[0][3]=0;
	a[1][0]=1;	a[1][1]=-1;	a[1][2]=1;	a[1][3]=2;
}
int main()
{
	int i,j;
	printf("System of Equation Number 1:\n");
	eq1();
	for(i=0;i<3;i++)
		printf("(%0.0f)x+(%0.0f)y+(%0.0f)z=(%0.0f)\n",a[i][0],a[i][1],a[i][2],a[i][3]);
	printf("\nSolving Now.....................\n\n");
	solveGauss(3,a);
	solveJacobi(3,a,9999,0.000001);
}
