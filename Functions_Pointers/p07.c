#include <stdio.h>
int leng(char str[2000])
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
	char str[2000];
	printf("Enter the full name: ");
	scanf("%[^\n]s",str);
	int l=leng(str);
	char rs[l+1];
	int i=0,j=0;
	rs[j++]=str[0];
	for(;i<l;i++)
	{
		if(str[i]==' ')
			rs[j++]=str[i+1];
	}
	rs[j]='\0';
	printf("Initials of \"%s\" is: \"%s\"\n",str,rs);
}
