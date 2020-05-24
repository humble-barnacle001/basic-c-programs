#include <stdio.h>
struct student
{
	int roll;
	char Name[200];
	char Dept[200];
	char Cor[200];
	int yr;
};
void smyr(struct student s[],int l)
{
	int y,ct=0,i;
	printf("\nEnter the year to search: ");
	scanf("%d",&y);
	printf("The students who joined in %d:\n",y);
	for(i=0;i<l;i++)
	{
		if(s[i].yr==y)
		{
			printf("%s\n",s[i].Name);
			ct++;
		}
	}
	if(ct==0)
		printf("NIL\n\nNO STUDENT WAS ADMITTED IN THE GIVEN YEAR!\n");
}
void rl(struct student s[],int l)
{
	int r,i;
	printf("\nEnter the Roll Number to search: ");
	scanf("%d",&r);
	for(i=0;i<l;i++)
	{
		if(s[i].roll==r)
		{
			printf("\n%s has roll number %d\n",s[i].Name,s[i].roll);
			printf("Department: %s\n",s[i].Dept);
			printf("Course: %s\n",s[i].Cor);
			printf("Year of joining: %d\n",s[i].yr);
			return;
		}
	}
	printf("Roll number %d not allotted to any student\n",r);
	return;
}	
int main()
{
	struct student s[100];
	int i=0;
	while(i<100)
	{
		printf("\nEnter roll number of student %d (enter zero to stop): ",i+1);
		fflush(stdin);
		scanf("%d",&s[i].roll);
		if(s[i].roll==0)	break;
		printf("Enter Name of student %d: ",i+1);
		fflush(stdin);
		scanf("%[^\n]s",s[i].Name);
		printf("Enter Department of student %d: ",i+1);
		fflush(stdin);
		scanf("%[^\n]s",s[i].Dept);
		printf("Enter Course of student %d: ",i+1);
		fflush(stdin);
		scanf("%[^\n]s",s[i].Cor);
		printf("Enter year of joining of student %d: ",i+1);
		fflush(stdin);
		scanf("%d",&s[i].yr);
		i++;
	}
	smyr(s,i);
	rl(s,i);
	return 0;
}
