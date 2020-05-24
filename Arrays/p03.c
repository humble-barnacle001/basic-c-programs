#include <stdio.h>
void printMat(int a[3][3])
{
    int i,j;
    for(i=0;i<3;i++)
	{
        for(j=0;j<3;j++)
            printf("%d\t",a[i][j]);
        printf("\n");
    }
}
int main()
{
	int a[3][3];
	int b[3][3];
	printf("Enter the elements of the matrix 1:\n\n");
	int i=0,j=0,k=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			 printf("Enter the element of row %d and column %d: ",(i+1),(j+1));
			 scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	printf("\nEnter the elements of the matrix 2:\n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			 printf("Enter the element of row %d and column %d: ",i+1,j+1);
			 scanf("%d",&b[i][j]);
		}
		printf("\n");
	}
	int res[3][3];
	int ch=0;
	int p=3,q=3;
	do
	{
		printf("\nEnter '1' to print Sum\nEnter '2' to print Difference\nEnter '3' to print product\n");
		printf("Enter your choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:	printf("\nYou entered matrix 1 as:\n");
					printMat(a);
					printf("\nYou entered matrix 2 as:\n");
					printMat(b);
					printf("\nSum of matrices is:\n");
                    for(i=0;i<3;i++)
                        for(j=0;j<3;j++)
                            res[i][j]=a[i][j]+b[i][j];
					printMat(res);
					printf("\nEnter '0' to repeat or anything else to exit: ");
					scanf("%d",&ch);
					break;
			case 2:	printf("\nYou entered matrix 1 as:\n");
					printMat(a);
					printf("\nYou entered matrix 2 as:\n");
					printMat(b);
					printf("\nDifference of matrices is:\n");
                    for(i=0;i<3;i++)
                        for(j=0;j<3;j++)
                            res[i][j]=a[i][j]-b[i][j];
					printMat(res);
					printf("\nEnter '0' to repeat or anything else to exit: ");
					scanf("%d",&ch);
					break;
			case 3:	printf("\nYou entered matrix 1 as:\n");
					printMat(a);
					printf("\nYou entered matrix 2 as:\n");
					printMat(b);
					printf("\nProduct of matrices is:\n");
                    for(i=0;i<3;i++)
                    {
                        for(j=0;j<3;j++)
                        {
                            res[i][j]=0;
                            for(k=0;k<3;k++)
                                res[i][j]=res[i][j]+a[i][k]*b[k][j];
                        }
                    }
					printMat(res);
					printf("\nEnter '0' to repeat or anything else to exit: ");
					scanf("%d",&ch);
					break;
			default:printf("Wrong choice!!!!! Please enter a valid option...........\n\n");
					ch=0;
		}
	}while(!ch);
	return 0;
}
