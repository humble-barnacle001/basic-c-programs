#include <stdio.h>
int main()
{
	int n;
	printf("Enter the total number of elements: ");
	scanf("%d",&n);
	int i;
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("Enter the element number %d: ",i+1);
		scanf("%d",&a[i]);
	}
	int* p=a;
	int sm=0;
	printf("\n\tUSING POINTERS ONLY................\n\n");
	printf("Elements of the array:\n");
	for(i=0;i<n;i++)
	{
		int t=*(p+i);
		printf("%d\n",t);
		sm+=t;
	}
	printf("\nSum of all elements of the array = %d\n",sm);
	return 0;
}
