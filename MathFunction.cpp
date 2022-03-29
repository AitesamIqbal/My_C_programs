#include<stdio.h>


void addition();
void subbtraction();
void multiplication();

//File of function usage
int main()
{	
	int Whilechoice =1;
	
	printf("\t\t\twelcome to math function\n");
	
	while (Whilechoice==1)
	{
		printf("\t1: sum\n\t2: subbtract\n\t3: multiply\n");
		int number;
		scanf("%d",&number);
	
		switch(number)
		{
		case 1:
			addition();
			break;
		case 2:
			subbtraction();
			break;
		case 3:
				multiplication();
				break;
		default :
			printf("invalid");
			break;
		}
		printf("Press 1 to continue and 0 to Exit");
		scanf("%d",&Whilechoice);
	}
}

void addition()
{
	int a;
	int b;
	printf("enter the first value =\n");
	scanf("%d",&a);
	printf("enter the second value=\n");
	scanf("%d",&b);
	int sum;
	sum=a+b;
	printf("the sum is %d",sum);
}
void subbtraction()
{
	int a;
	int b;
	printf("enter the first value =\n");
	scanf("%d",&a);
	printf("enter the second value=\n");
	scanf("%d",&b);
	int minus;
	minus=a-b;
	printf("the subbtraction is %d",minus);
}

void multiplication()
{
	int a;
	int b;
	printf("enter the first value =\n");
	scanf("%d",&a);
	printf("enter the second value=\n");
	scanf("%d",&b);
	int multiply;
	multiply=a*b;
	printf("the multiplication is %d",multiply);
}
