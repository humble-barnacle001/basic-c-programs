#include<stdio.h>
int main()
{
	int ar[20];
	int i;
	for(i=0;i<19;i++)
	{
		printf("Enter the %d element: ",(i+1));
		scanf("%d",&ar[i]);
	}
	int fl=0;
	int m1=ar[0], m2=ar[1];
	for(i=0;i<20;i++)
	{
		if(ar[i]>m1)
		{
			m2=m1;
			m1=ar[i];
		}
		else if(ar[i]<m1 && ar[i]>m2)
			 m2=ar[i];
			 else
			 	if(m1==m2)
			 	{
			 		if(i==19)
			 		{
			 			fl=1;
			 			continue;
			 		}
			 		m2=ar[i+1];
			 	}
	}
	if(fl==0)
		printf("The second highest number is: %d",m2);
	else
		printf("The array is fully duplicate");
	return 0;
}
