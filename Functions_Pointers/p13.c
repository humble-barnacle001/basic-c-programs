#include <stdio.h>
int lst(char s[])
{
    int l=0;
    while(s[l]!='\0')
        l++;
    return l;
}
int main()
{
    char st[99999];
    printf("Enter the String to be checked(in any case): ");
    scanf("%s",st);
    int i=0,fl=0,l=lst(st);
    for(i=0;i<=l/2;i++)
    {
        int c1=st[i]==st[l-i-1];
        int c2=(st[i]>='A'&&st[i]<='Z'&&(char)(st[i]+32)==st[l-i-1]);
        int c3=(st[i]>='a'&&st[i]<='z'&&(char)(st[i]-32)==st[l-i-1]);
        if(c1||c2||c3)
            continue;
        fl=1;
        break;
    }
    if(fl)
        printf("\"%s\" is not palindrome.\n",st);
    else
        printf("\"%s\" is palindrome.\n",st);
    return 0;
}
