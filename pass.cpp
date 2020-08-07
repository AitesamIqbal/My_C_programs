#include<stdio.h>
int main()
{
	int counter=1;
	int flag=1;
	while (flag)
	{
		printf("enter your password");
		int password;
		scanf("%d",&password);

		if ( password==2345 && counter<=3)
		{
			printf( "the program is running");
			flag=0;
		}
	
		else
		{
			if (counter>3)
			{
				flag=0;
				printf("the system is blocked");
			}
			
			counter++;
		}
	}
}


