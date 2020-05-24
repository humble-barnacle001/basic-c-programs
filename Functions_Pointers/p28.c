#include <stdio.h>
int strend(char s[],char t)
{
    int i=0;
    while(s[i]!='\0')
    {
        i++;
    }
    if(s[i-1]==t)
        return 1;
    else
        return 0;
}
int main()
{
    char str1[99999];
    char ch;
    printf("Enter the String: ");
    scanf("%s",str1);
    fflush(stdin);
    printf("Enter the character to be checked: ");
    scanf(" %c",&ch);
    printf("\nThe function returned: %d\n",strend(str1,ch));
    return 0;
}
