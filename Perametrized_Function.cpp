#include<stdio.h>

void Add(int a, int b);

int main()
{
	int val1 = 10;
	int val2 = 50;
	Add(val1,val2);
	
}
void Add(int a, int b)
{
	int valueone = a;
	int valuetwo = b;
	int sum = valueone + valuetwo;
	printf("The sum of the values is %d",sum);
}


