#include<stdio.h>
int main()
{
	printf("1: mobile load\n2: bill payment\n3: money transfer\n");
	int number;
	scanf("%d",&number);
	
	switch (number)
	
	{
		case 1:
			printf("1: telenor\n2: jazz\n3: moblink\n");
			int e;
			scanf("%d",&e);
			switch (e)
			{
				case 1:
					printf("1: enter the number\n2: cancel\n");
					int r;
					scanf("%d",&r);
					
					switch (r)
					{
						case 1:
							printf("1: num=\n");
							int jk;
							scanf("%d",&jk);
							printf("Amount of load");
							int loadamount;
							scanf("%d",&loadamount);
							while(loadamount!=50 && loadamount<50)
							{
								printf("Load amount should be greater than or equal to 50");
								scanf("%d",&loadamount);
							}
							printf("Thanks for load");
							break;
						case 2:
							printf("the process is stoped");
							break;
						default:
							printf("THis is the default");
							break;
					}
				break;
				case 2:
					printf("not available");
					break;
					
				default :
					printf("invalid value");
					break;
			}
		break;
		case 2:
			printf("ONLY FIRST CASE IS OPEN");
			break;
		case 3:
			printf("ONLY FIRST CASE IS OPEN");
			break;
		default :
			printf("invalid value");
			break;
	}
}
