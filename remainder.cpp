#include<stdio.h>
int main()
{
	printf("enter the number");
	int num;
	scanf("%d",&num);
	
	int remainder=num % 10;
	
	printf("the remainder is %d",remainder);
}
