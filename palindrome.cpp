#include<stdio.h>
#include<conio.h>
int StringLength(char a[]);
int main()
{
   	char number1[100];
   	char number2[100];
   	char number3[100];
   	char prefixBank[100];
   	int counter =0;
   	int PrefixLength = 0;
   
  	printf("Enter the String\n ");
   	scanf("%s",number1);
   
    printf("Enter the second String\n ");
   	scanf("%s",number2);
   	
   	printf("Enter the third String\n ");
   	scanf("%s",number3);
   	
   	printf("Enter the length of the prefix");
   	scanf("%d",&PrefixLength);
   	
   	for (int i=0; number1[i]!='\0'; i++)
   	{
   		if(number2[i]==number1[i])
   		{
   			if(number1[i]==number3[i])
   			{
   				
   				if(counter<=PrefixLength)
   				{
				   prefixBank[i]= number1[i];
				}	
				counter++;
			}	
		}
   		
	}
	if(prefixBank[2]!='\0')
	{
		printf("The prefix is %s",prefixBank);
	}
	else
	{
		printf("No Prefix Found");

	}
	
}

int StringLength(char a[])
{
	int Length_ = 0;
	
	 for(int i=0; a[i]!='\0'; i++)
 	 {
		Length_=Length_+1;
 	 }
 	 return Length_;
}
