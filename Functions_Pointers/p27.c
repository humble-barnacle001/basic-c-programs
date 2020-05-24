#include <stdio.h>
char* squeeze(char s[],char c)
{
	int i,j;
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]==c)
		{
			for(j=i+1;s[j]!='\0';j++)
			{
				s[j-1]=s[j];
			}
			s[j-1]='\0';
			i=i-1;
		}
	}
	return s;
}
int main()
{
	char s[2000];
	char c;
	printf("Enter the String: ");
	scanf("%[^\n]s",s);
	fflush(stdin);
	printf("Enter the character to search and remove: ");
	scanf("%c",&c);
	printf("\nThe String after removing all occurences of '%c' is: \"%s\"\n",c,squeeze(s,c));
	return 0;
}
