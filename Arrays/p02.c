#include <stdio.h>
int main()
{
	int n;
	printf("Enter the length n of the array: ");
	scanf("%d",&n);
	int ar[n];
	int i=0;
	while(i<n)
	{
		printf("Enter the element %d: ",i+1);
		scanf("%d",&ar[i++]);
	}
	int ct=0;
	int k=0,j,fl=0;
	int a2[n-1];
	for(i=0;i<n;i++)
	{
		fl=0;
		for(j=i-1;j>=0;j--)
		{
			if(ar[i]==ar[j])
			{
				fl=1;
				break;
			}
		}
		if(fl==0)
			a2[k++]=ar[i];
		else
			ct++;
	}
	printf("\nNumber of duplicates: %d\n",ct);
	printf("\nArray without duplicates in reverse order:\n");
	for(i=k-1;i>=0;i--)
		printf("%d\n",a2[i]);
	return 0;
}
