#include<stdio.h>
int main()
{
	int initial,last;
	int space[7]={4,3,6,9,2,10,8};
	printf("enter number");
	int num;
	scanf("%d",&num);
	for( int i=0; i<=7; i++)
	{
		for(int j=0; j<=7; j++)
		{
			if (space[i]+space[j]==num)
			{
				initial=i;
				last=j;
			}
		}
	}
	printf(" %d and %d ",initial,last);
}
