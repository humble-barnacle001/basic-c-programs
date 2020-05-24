#include "Gauss.c"
#include "GaussPivot.c"
#include "Jacobi.c"
#include <stdio.h>
int main()
{
    int ch;
    do{
        printf("Choices:\n1. Gauss-Elimination\n2. Jacobi's Method\n3. Gauss Elimination Using Pivot\n");
        printf("Enter your choice: ");
        scanf("%d",&ch);
        if(ch>0&&ch<4)
            break;
        printf("Incorrect choice!!!!\n Please enter choice again.........\n");
    }while(1);
    switch(ch)
    {
        case 1: if(solveGauss())
                    printf("Unable to solve properly using Gauss Elimination\n");
                else
                    printf("\nSolved.....");
                break;
        case 2:break;
        case 3:break;
    }
    return 0;
}
