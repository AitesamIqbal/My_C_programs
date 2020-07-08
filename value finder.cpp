#include<stdio.h>
int main()
{
	printf("enter the 1st value");
	int value1;
	scanf("%d",&value1);
	
	printf("enter the 2nd value");
	int value2;
	scanf("%d",&value2);
	
	if(value1>value2)
	{
		printf("the 1st value is greatest");
	}
	else
	{
		printf("value2 is greatest");
	}
}
