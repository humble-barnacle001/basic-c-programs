#include <stdio.h>
#define n 10
struct student
{
	char roll[30];
	char Name[200];
	float m[6];
	float avg;
};
void rklist(struct student s[])
{
	int t;
	int ar[n];
	int i,j;
	for(i=0;i<n;i++)
		ar[i]=i;
	for(i=0;i<n-1;i++)		//Bubble Sort
	{
		for(j=0;j<n-i-1;j++)
		{
			if(s[ar[j]].avg<s[ar[j+1]].avg)
			{
				t=ar[j];
				ar[j]=ar[j+1];
				ar[j+1]=t;
			}
		}
	}
	printf("\nRank List ----------------------------------------------------------------->\n\n");
	printf("\tRank\t\tRoll Number\t\tName\t\t\tAverage Marks\n");
	for(i=0;i<n;i++)
	{
		j=ar[i];
		printf("\t  %d\t\t  %s\t\t\t%s\t\t   %0.2f\n",i+1,s[j].roll,s[j].Name,s[j].avg);
	}
}
int main()
{
	struct student s[n];
	int i=0,j;
	while(i<n)
	{
		printf("\nEnter Name of student %d: ",i+1);
		fflush(stdin);
		scanf("%[^\n]s",s[i].Name);
		printf("Enter roll number of student %d: ",i+1);
		fflush(stdin);
		scanf("%s",s[i].roll);
		s[i].avg=0;
		for(j=0;j<6;j++)
		{
			printf("Enter the marks of student %d in subject %d: ",i+1,j+1);
			scanf("%f",&s[i].m[j]);
			s[i].avg+=s[i].m[j];
		}
		s[i].avg/=6;
		i++;
	}
	rklist(s);
	return 0;
}
