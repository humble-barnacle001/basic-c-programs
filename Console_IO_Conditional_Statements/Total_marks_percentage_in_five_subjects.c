#include<stdio.h>
int main()
{
	int m[5];
	int t=0;
	int i=0;
	printf("\n");
	while(i<5)
	{
		printf("Enter marks in subject %d: ",(i+1));
		scanf("%d",&m[i]);
		if(m[i]<0||m[i]>100)
		{
			printf("\nInvalid marks entered for subject %d!!!!\nEnter Again!\n",(i+1));
			continue;
		}
		t=t+m[i];
		i++;
	}
	printf("\nTotal (Aggregate) marks: %d\n",t);
	printf("Percentage marks: %0.2f\n\n",(t/5.0));
}
