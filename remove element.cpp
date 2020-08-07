#include<stdio.h>
#include<conio.h>
int main()
{
	int arr[50], size, i, del, count=0;
	printf("Enter array size : ");
	scanf("%d",&size);
	printf("Enter array elements : ");
	for(i=0; i<size; i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter element to be delete : ");
	scanf("%d",&del);
	for(i=0; i<size; i++)
	{
		if(arr[i]==del)
		{
			for(int j=i; j<(size-1); j++)
			{
				arr[j]=arr[j+1];
			}
			count++;
			break;
		}
	}
	if(count==0)
	{
		printf("Element not found..!!");
	}
	else
	{
    	printf("Element deleted successfully..!!\n");
		printf("Now the new array is :\n");
		for(i=0; i<(size-1); i++)
		{
			printf("%d",arr[i]);
		}
	}
	getch();
}
