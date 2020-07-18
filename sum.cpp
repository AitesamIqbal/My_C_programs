#include<stdio.h>
int main()
{
	int space[7]={4,3,6,9,4,10,8};
	printf("enter number");
	int num;
	scanf("%d",&num);
	if (space[0]+space[1]==num)
	{
		printf("the values are 0 , 1");
	}
	
	else if (space[0]+space[2]==num)
	{
		printf("the values are 0 , 2");
	}
	
	else if (space[0]+space[3]==num)
	{
		printf("the values are 0 , 3");
	}
	
	else if (space[0]+space[4]==num)
	{
		printf("the values are 0 , 4");
	}
	
	else if (space[0]+space[5]==num)
	{
		printf("the values are 0 , 5");
	}
	
	else if (space[0]+space[6]==num)
	{
		printf("the values are 0 , 6");
	}
	
	else if (space[1]+space[2]==num)
	{
		printf("the values are 1 , 2");
	}
	
	else if (space[1]+space[3]==num)
	{
		printf("the values are 1 , 3");
	}
	
	else if (space[1]+space[4]==num)
	{
		printf("the values are 1 , 4");
	}
	
	else if (space[1]+space[5]==num)
	{
		printf("the values are 1 , 5");
	}
	
	else if (space[1]+space[6]==num)
	{
		printf("the values are 1 , 6");
	}
	
	else if (space[2]+space[3]==num)
	{
		printf("the values are 2 , 3");
	}
	
	else if (space[2]+space[4]==num)
	{
		printf("the values are 2 , 4");
	}
	
	else if (space[2]+space[5]==num)
	{
		printf("the values are 2 , 5");
	}
	
	else if (space[2]+space[6]==num)
	{
		printf("the values are 2 , 6");
	}
	
	else if (space[3]+space[4]==num)
	{
		printf("the values are 3 , 4");
	}
	
	else if (space[3]+space[5]==num)
	{
		printf("the values are 3 , 5");
	}
	
	
	else if (space[3]+space[6]==num)
	{
		printf("the values are 3 , 6");
	}
	
	else if (space[4]+space[5]==num)
	{
		printf("the values are 4 , 5");
	}
	
	else if (space[4]+space[6]==num)
	{
		printf("the values are 4 , 6");
	}
	
	else if (space[5]+space[6]==num)
	{
		printf("the values are 5 , 6");
	}
	
	else
	{
		printf("invalid");
	}
	
}
