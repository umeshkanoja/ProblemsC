#include<stdio.h>

/*
 Question: Concatinate string S2 to string S1
*/

int main()
{
	/* 
	 Declarations: taking size of S1 as 100 to have enough space to add string S2 in it.
	*/
	char S1[100] = "programming ", S2[] = "is awesome";
	int i, lengthOfS1;
	
	// At the end of for loop, value of i will be length of string S1
	for (i=0; S1[i] != '\0'; i++)
	{
	}
	
	lengthOfS1 = i;
	
	for (i=0; S2[i] != '\0'; i++)
	{
		// copying characters from string S2 to S1 
		S1[lengthOfS1] = S2[i];
		
		// Adding 1 to lengthOfS1 to copy next character.
		lengthOfS1 = lengthOfS1 + 1;
	}
	
	// Adding terminating character '\0'
	S1[lengthOfS1 + 1] = '\0';
	
	printf("Concatinated string is = %s", S1);
	
	return 0;
}

