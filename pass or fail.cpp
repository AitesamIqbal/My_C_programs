#include<stdio.h>
int main()
{
	printf("enter yours marks=");
	int marks;
	scanf("%d",&marks);
	
	
	if(marks<45)
	{
		printf("you are fail");
		
	}
	else if(marks>45)
	{
		printf("you are pass");
	}
	else if(marks==45)
	{
		printf("you are pass");
	}
}
