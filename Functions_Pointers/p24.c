#include <stdio.h>
int main()
{
    char str1[99999];
    char str2[99999];
    printf("Enter the String: ");
    scanf("%[^\n]s",str1);
    int i=0,l2=0,i2=0;
    char t1[999];
    while(str1[i]!='\0')
        i++;
    str1[i]=' ';
    str1[i+1]='\0';
    i=0;
    while(str1[i]!='\0')
    {
        if(str1[i]!=' ')
        	t1[i2++]=str1[i];
        else
        {
            while(i2!=0)
                str2[l2++]=t1[--i2];
            str2[l2++]=' ';
            i2=0;
        }
        i++;
    }
    str2[--l2]='\0';
    printf("\"%s\" with each word reversed is: \"%s\"\n",str1,str2);
    return 0;
}
