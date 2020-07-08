#include<stdio.h>
int main()
{
	//Just a comment line added to it.
	printf("enter your marks");
	int marks;
	scanf("%d",&marks);
	
	if (marks<=100 && marks>=80)
	{
		printf("your grade is A+");	
	}
	else if(marks<=79 && marks>=70)
	{
		printf("your grade is A");
	}
	else if(marks<=69 && marks>=60)
	{
		printf("your grade is B+");
	}
	else if(marks<=59 && marks>=50)
	{
		printf("your grade is B");
	}
	else if(marks<=49 && marks>=40)
	{
		printf("your grade is C+");
		
	}
	else if (marks<=39 && marks>=30)
	{
		printf("your grade is C");
		
	}
	else if (marks<=29 && marks>=20)
	{
		printf("your grade is D");
		
	}
	else if (marks<=19 && marks>=10)
	{
		printf("your grade is E");
		
	}
	else if (marks<=9 && marks>1)
	{
		printf("your grade is F");
		
	}
	else if(marks<0)
	{
		printf("you put an invalid value");
	}
}
