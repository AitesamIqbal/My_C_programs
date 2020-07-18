#include<stdio.h>
void add(int a,int b);
void subb(int c,int d);
void mult(int e,int f);

int main()
{
	int whilechoice=1;
	int value1;
	int value2;
	while(whilechoice==1)
	{
	printf("\t1: add\n2: subbtract\n3: multiply\n");
	int choice;
	scanf("%d",&choice);
	switch(choice)
		{
			case 1: 
				add(value1,value2);
				break;
			case 2: 
				subb(value1,value2);
				break;
			case 3: 
				mult(value1,value2);
				break;
		}
		printf("press 1 to continue and 0 to exit\n");
		scanf("%d\n",whilechoice);
	}
}

void add(int a,int b)
{
	int valueone;
	int valuetwo;
	
	printf("enter first value\n");
	scanf("%d\n",&valueone);
	
	printf("enter second value\n");
	scanf("%d\n",&valuetwo);
	int result;
	result==valueone+valuetwo;
	printf("the answer is %d",result);
}

