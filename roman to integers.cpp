#include<stdio.h>
int main()
{
	string roman;
	
	printf("Enter the roman number (in capital only): ");
	getline(cin,roman);
	
	int number;
	number=roman_to_int(roman);
	
	printf("The interger form is: %d",number);
	
	return 0;
}

