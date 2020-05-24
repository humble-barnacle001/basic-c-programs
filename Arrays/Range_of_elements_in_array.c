#include <stdio.h>
int main()
{
	int n;
	printf("Enter the length of the array: ");
	scanf("%d",&n);
	int ar[n];
	printf("Enter the elements of the array:\n");
	int i=0;
	for(i=0;i<n;i++)
	{
		printf("Enter element number %d: ",i+1);
		scanf("%d",&ar[i]);
	}
	int mx=ar[0],mn=ar[0];
	for(i=0;i<n;i++)
	{
		if(ar[i]>mx)
			mx=ar[i];
		else
			if(ar[i]<mn)
				mn=ar[i];
	}
	printf("\nRange of the array is: %d\n",(mx-mn));
	return 0;
}
