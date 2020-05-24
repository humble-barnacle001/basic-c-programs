#include <stdio.h>
int main()
{
    char num[200000];
    int i,fl;
    char s='\0';
    int n=0;
    do
    {
        fl=1;
        printf("Enter the integer as String: ");
        scanf("%s",num);
        i=0;
		if(num[0]=='-')
        {	
			s='-';
        	i=1;
        }
        for(n=0;num[i]!='\0'&&fl;i++)
        {
            if(num[i]>='0'&&num[i]<='9')
                n=n*10+(num[i]-'0');
            else
                fl=0;
        }
        if(!fl)
        {
            printf("Invalid integer input.\nPlease Reenter!!!\n\n");
            continue;
        }
        break;
    }while(1);
    printf("You entered: \"%s\"\nConverted to integer: %c%d\n",num,s,n);
    return 0;
}
