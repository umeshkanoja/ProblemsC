#include<stdio.h>

/*
	Question: Find length of given string
*/

int main()
{
	// Assuming string will be less than 100 character
	char S1[100];
	
	int i;
	
	printf("Please enter string\n");
	//Get string from user
	scanf("%s", S1);
	
	// At the end of for loop, value of i will be string length
	for (i=0; S1[i] != '\0'; i++)
	{
	}
	
	printf("Length of string = %d", i);
	
	getch();
	return 0;
}
