#include <stdio.h>
int main()
{
	int dec;
	do
	{
		printf("Enter the positive number in decimal to be converted: ");
		scanf("%d",&dec);
		if(dec>=0)
			break;
	}while(1);
	int bin=tobin(dec);
	printf("%d in binary is: %d\n",dec,bin);
}
int tobin(int dec)
{
	if(dec<2)
		return dec;
	return tobin(dec/2)*10+dec%2;
}
