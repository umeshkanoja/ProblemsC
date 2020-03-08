#include<stdio.h>

/*
	Question: Copy string s2 to another string s1
*/

int main()
{
	char s1[100], s2[] = "Hello world!";
	
	int i;
	
	for (i=0; s2[i] != '\0'; i++)
	{
		s1[i] = s2[i];
	}
	
	// Copy last character '\0'
	s1[i] = s2[i];
	
	printf("\nCopied string s1 = %s", s1);
	getch();
	return 0;
}
