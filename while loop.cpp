#include<stdio.h>
#include<conio.h>
int main()
{
	char choice='y';
	while(choice=='y')
	{
		printf("enter yours marks=");
		int marks;
		scanf("%d",&marks);	
		if (marks>=45)
		{
			printf("you are pass\n");
		}
		else if(marks<=45)
		{
			printf("you are fail\n");
		}
		else
		{
			printf("This is else");
		}
	printf("if you have to continue click on y\n\n");
	choice = getch();
	}
	getch();
}
