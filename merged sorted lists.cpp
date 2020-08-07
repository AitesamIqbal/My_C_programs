#include<stdio.h>
int main()
{
	char string[100];
	char string2[100];
	int mergelist;
	
	printf("enter number");
	scanf("%s",&string);
	
	printf("enter second value");
	scanf("%s",&string2);
	
	for ( int i=0; string[i]!='\0'; i++)
	{
		if (string[i]==string2[i])
		{
			string[i]==mergelist;
			printf("the merge list is %d",mergelist);
		}
		
	}
}
