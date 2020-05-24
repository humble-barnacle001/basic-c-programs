#include <stdio.h>
int isVow(char a)
{
	if(a>='a'&&a<='z')
		a=(char)(a-32);
	if(a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
		return 1;
	return 0;
}
int main()
{
	char str[2000];
	printf("Enter the line: ");
	scanf("%[^\n]s",str);
	int i=0,ct=0;
	for(;str[i]!='\0';i++)
	{
		if(isVow((char)str[i]))
			if(isVow((char)str[i+1]))
				ct++;
	}
	printf("The number of times vowel occurs successively in \"%s\" is: %d\n",str,ct);
}
