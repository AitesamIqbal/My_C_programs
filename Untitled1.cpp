#include<stdio.h>
void add(int a, int b);
void subb(int c, int d);
void mult(int e, int f);
int main()
{
	int whilechoice=1;
	int choice;
	int valueone;
	int valuetwo;
	printf("enter first value");
	scanf("%d",&valueone);
	printf("enter second value");
	scanf("%d",&valuetwo);
	while (whilechoice==1)
	{
		printf("1: add\n2: subbtract\n3: multiply\n");
		scanf("%d",&choice);
		switch (choice)
		{
			case 1: 
				add(valueone,valuetwo);
				break;
			case 2: 
				subb(valueone,valuetwo);
				break;
			case 3: 
				mult(valueone,valuetwo);
				break;
			default : 
				printf("invalid");
				break;
		}
		printf("press 1 to continue and 0 to exit");
		scanf("%d",&whilechoice);
	}
	
}

void add(int a, int b)
{
	int abc=a;
	int cdf=b;
	int result;
	result=abc + cdf;
	printf("the answer is %d\n",result);
}

void subb(int c, int d)
{
	int abc=c;
	int cdf=d;
	int result;
	result=abc - cdf;
	printf("the answer is %d\n",result);
}

void mult(int e, int f)
{
	int abc=e;
	int cdf=f;
	int result;
	result=abc * cdf;
	printf("the answer is %d\n",result);
}
