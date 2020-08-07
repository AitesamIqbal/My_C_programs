#include<stdio.h>
#include<conio.h>
int StringLength(char a[]);
int main()
{
   	char Original[100];
   	char reverse[100];
   	int counter = 0;
   
  	printf("Enter the String ");
   	scanf("%s",Original);
   
   	int Result = StringLength(Original);
	Result = Result -1;
	
   	for(int i =0; Original[i]!='\0';i++)
   	{
   		reverse[i] = Original[Result];
   		Result-=1;
	   
   		if (reverse [i]== Original[i])
   		{
   			counter++;
		}
   	}
   	printf("The Reverse string %s\n ",reverse);
   	if(counter == StringLength(Original))
   	{
   		printf("This is palindrome");
	}
	else
	{
		printf("This is not palindrome");
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
