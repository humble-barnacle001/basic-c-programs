#include <stdio.h>
int main()
{
	char str[200000];
	printf("Enter the String: ");
	scanf("%[^\n]s",str);
	int i=0,ct=0;
	while(str[i++]!='\0')
	{
		ct++;
	}
	printf("The number of characters in \"%s\" is: %d\n",str,ct);
}
