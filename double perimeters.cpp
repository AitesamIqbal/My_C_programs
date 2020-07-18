#include<stdio.h>
int main()
{
	printf("enter password=");
	int pass;
	scanf("%d",&pass);
	if(pass==2345)
	{
		printf("hhhhhhhh");
	}
	else if(pass!=2345)
	{
		printf("enter second time");
		int second;
		scanf("%d",&second);
		if (second==2345)
		{
			printf("hhhhhhh");
		}
		
		else if(second!=2345)
		{
			printf("enter last time=");
			int last;
			scanf("%d",&last);
			
			if (last==2345)
			{
				printf("hhhhhhh");
				
			}
			
			else if(last!=2345)
			{
				printf("the program is blocked");
			}
		}
	}
}


