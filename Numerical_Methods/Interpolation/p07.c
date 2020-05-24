#include "InterpolLang.c"
#include "InterForDiff.c"
#include "InterBackDiff.c"
#include <stdio.h>
int main()
{
	int n=4;
	double x[n];
	double f[n];
	double X=2.5;
	int i;
	for(i=1;i<=n;i++)
	{
		x[i-1]=i;
		f[i-1]=i*i*i;
	}
	char* nm[3];
	nm[0]="Langrange's";
	nm[1]="Newton's Forward Difference";
	nm[2]="Newton's Backward Difference";
	double m[3][2];
	m[0][0]=solveLang(n,x,f,X);
	m[1][0]=solveForward(n,x,f,X);
	m[2][0]=solveBackward(n,x,f,X);
	double a=2.5*2.5*2.5;
	int em=0;
	printf("\n\n");
	for(i=0;i<3;i++)
	{
		m[i][1]=m[i][0]>a?m[i][0]-a:a-m[i][0];
		printf("Error percentage using %s Method = %0.4f%%\n",nm[i],m[i][1]/100);
		if(m[i][1]>m[em][1])
			em=i;
	}
	if(m[em][1]!=0)
		printf("\nMaximum error is seen in %s Method.",nm[em]);	
	return 0;
}
