#include <stdio.h>
int leng(char str[200])
{
	int i=0,ct=0;
	while(str[i++]!='\0')
	{
		ct++;
	}
	return ct;
}
int main()
{
	char str[200];
	printf("Enter the String: ");
	scanf("%[^\n]s",str);
	int l=leng(str);
	char rs[l+1];
	int i=0;
	for(;i<l;i++)
	{
		rs[i]=str[l-i-1];
	}
	rs[l]='\0';
	printf("Reverse of \"%s\" is: \"%s\"\n",str,rs);
}
