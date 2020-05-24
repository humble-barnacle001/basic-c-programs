#include<stdio.h>
#include<math.h>
int main()
{
	double l=0,b=0,R=0,r=0,PR=0,PC=0,AR=0,Ac=0;
	do
	{
		printf("Enter length: ");
		scanf("%lf",&l);
		if(l>0)		break;
		printf("INVALID LENGTH!!!!!\nEnter again!!\n");
		continue;
	}while(1);
	do
	{
		printf("Enter breadth: ");
		scanf("%lf",&b);
		if(b>0)		break;
			printf("INVALID BREADTH!!!!!\nEnter again!!\n");
			continue;
	}while(1);
	AR=l*b;
	PR=2*(l+b);
	R=sqrt(AR/3.14);
	PC=3.14*2*R;
	r=PR/2/3.14;
	Ac=3.14*r*r;
	printf("\nWhen areas are equal:\nRadius of the circle = %lf\n",R);
	printf("Ratio of perimeter of rectangle to circle = %lf\n",(PR/PC));
	printf("\nWhen perimeters are equal:\nRadius of the circle = %lf\n",r);
	printf("Ratio of area of rectangle to circle = %lf\n\n",(AR/Ac));
	return 0;
}
