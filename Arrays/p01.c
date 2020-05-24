#include <stdio.h>
int rev(int n)
{
    int r=0;
    while(n>0)
    {
        r=r*10+n%10;
        n/=10;
    }
    return r;
}
int main()
{
	int l=0;
	do
	{
		printf("Enter the length of the array: ");
		scanf("%d",&l);
		if(l>0)
			break;
		printf("Please enter positive value for length of the array!!!\n");
	}while(1);
	int ar[l];
	int i=0;
	while(i<l)
	{
		printf("Enter the number %d: ",(i+1));
		scanf("%d",&ar[i]);
		if(ar[i]>0)
            ar[i]=rev(ar[i]);
        else
            ar[i]=-rev(-ar[i]);
		i++;
	}
	printf("\nReverse of the elements of the array:\n");
	i=0;
	while(i<l)
	{
		printf("%d\n",ar[i++]);
	}
	return 0;
}
