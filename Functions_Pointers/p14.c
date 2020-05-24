#include <stdio.h>
int lst(char s[])
{
    int ct=1,i=0;
    while(s[i]!='\0')
    {
    	if(s[i++]==' ')
    		ct++;
	}
    return ct;
}
int main()
{
    char st[99999];
    printf("Enter the String to count number of words: ");
    scanf("%[^\n]s",st);
    printf("The number of words in \"%s\" is: %d\n",st,lst(st));
    return 0;
}
