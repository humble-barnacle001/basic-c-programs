#include <stdio.h>
int main()
{
	int ar[10];
	int i;
	for(i=0;i<10;i++)
	{
		printf("Enter element number %d: ",i+1);
		scanf("%d",&ar[i]);
	}
	int temp,j;
	for(i=0;i<9;i++)
	{
		for(j=0;j<9-i;j++)
		{
			if(ar[j]>ar[j+1])
			{
				temp=ar[j+1];
				ar[j+1]=ar[j];
				ar[j]=temp;
			}
		}
	}
	printf("\nArray in ascending order:\n");
	for(i=0;i<10;i++)
	{
		printf("%d\n",ar[i]);
	}
	return 0;
}
