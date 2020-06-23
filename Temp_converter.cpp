#include<stdio.h>
#include<conio.h>
int main()
{
	printf("Enter Temprature in F");
	int F;
	scanf("%d",&F);
	int result = (F-30)/2;
	
	printf("The Temprature in C is %d",result);
	getch();
}
