#include<stdio.h>
#include<math.h>
int main()
{
	int table;
	int size;

	printf("enter the digit you want to make the table=");
	scanf("%d",&table);
	
	printf("enter the size of the table=");
	scanf("%d",&size);
	
	int result=1;
	int sum;
	for(int i=1;i<=size;i++)
	{
		result=table*i;
		printf("%d x %d = %d\n",table,i,result);
		sum=sum+result;
	}
	printf("the total sum of the values are=%d",sum);
}
