#include<stdio.h>

/*
	Question: Campare string S1 and S2
*/

int main()
{
	char s1[100], s2[100];
	int i=0;
	
	printf("Please enter string 1: ");
	scanf("%s", s1);
	printf("Please enter string 2: ");
	scanf("%s", s2);
	
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			/*
				The ASCII value of the lowercase alphabet is from 97 to 122. 
				And, the ASCII value of the uppercase alphabet is from 65 to 90.
			*/
			if (s1[i] >= 'A' && s1[i] <= 'Z')
			{
				// This means s1[i] character is upper case. Now check if s2[i] is lower case and equal to s1[i]
				if ((s1[i] - 'A') != (s2[i] - 'a'))	
				{
					break;
				}			
			}
			
			if (s1[i] >= 'a' && s1[i] <= 'z')
			{
				// This means s1[i] is lower case. Now check if s2[i] is lower case and equal to s1[i]
				if ((s1[i] - 'a') != (s2[i] - 'A'))	
				{
					break;
				}
			}
			
		}
		
		i++;
	}
	
	if (s1[i] == '\0' && s2[i]== '\0')
	{
		printf("\nStrings are equal\n");
	}
	else
	{
		printf("\nStrings are not equal\n");
	}
	
	getch();
	return 0;
}
