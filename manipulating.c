/*
Origin: Yadveer Kaur, yadveer-kaur@myseneca.ca, 164592214, CPR, Final Assignment
manipulating.c : Manipulating
Purpose: Searching a string
*/

#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 80
#define TRUE 1
#include "manipulating.h"

/*
Purpose: To Search a string
Parameters: None
Modifier: Nothing is modified
*/
void manipulating(void)
{
	printf("*** Start of Searching Strings Demo ***\n");
	char haystack[BUFFER_SIZE];
	char needle[BUFFER_SIZE];
	char* occurrence = NULL;
	do
	{ // continue loop till the condition is true
		printf("Type the string (q - to quit):\n");
		fgets(haystack, BUFFER_SIZE, stdin);
		haystack[strlen(haystack) - 1] = '\0';
		if (strcmp(haystack, "q") != 0)
		{
			printf("Type the substring:\n");
			fgets(needle, BUFFER_SIZE, stdin);
			needle[strlen(needle) - 1] = '\0';
			occurrence = strstr(haystack, needle);
			if (occurrence)
				printf("\'%s\' found at %d position\n", needle, (int)(occurrence - haystack));
			else
				printf("Not found\n");
		}
	} while (strcmp(haystack, "q") != 0);

	printf("*** End of Seaching Strings Demo ***\n\n");
}