#include <stdio.h>
int main()
{
	char str[2000];
	printf("Enter the line: ");
	scanf("%[^\n]s",str);
	int i=0;
	for(;str[i]!='\0';i++)
	{
		if(str[i]>='a'&&str[i]<='z')
			str[i]=(char)(str[i]-32);
	}
	printf("The line in full capitals is: \"%s\"\n",str);
}
