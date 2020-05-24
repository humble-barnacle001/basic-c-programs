#include <stdio.h>
int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    if(n<101)
        printf("The integers divisible by %d are: ",n);
    else
    {
        printf("Since %d is greater than 100, hence NO NUMBER between 1 to 100 is divisible by %d",n,n);
        return 0;
    }
    int i=n;
    while(i<101)
    {
        if(i%n==0)
        {
            printf("%d",i);
            if(i+n<=100)
                printf(", ");
            else
                printf(" ");
        }
        i++;
    }
    printf("\n");
    return 0;
}
