#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the character: ");
    scanf("%c",&ch);
    printf("\n");
    if(ch>='A'&&ch<='Z')
        printf("Entered character is a captial letter\n");
    else
        if(ch>='a'&&ch<='z')
            printf("Entered character is a small case letter\n");
        else
            if(ch>='1'&&ch<='9')
                printf("Entered character is a digit\n");
            else
                printf("Entered character is a special character\n");
    return 0;
}
