/*
Origin: Fausto Zarumar, fjzaruma@myseneca.ca, 119758217,08/12/2022, CPR, Final Assignment
converting.c : Converting
Purpose: Converting from numeric string to integer value.
*/

#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 80
#include "converting.h"

/*
Purpose: Provide a safe conversion from numeric string to integer value and displays it in the console.
Parameters: None
Modifies:  Nothing is modified since the converted value is stored in a a new char array.
*/

void converting(void)
{
	printf("*** Start of Converting Strings to int Demo ***\n");
	char doubleString[BUFFER_SIZE];
	int doubleNumber;
	do
	{
		printf("Type an int numeric string (q - to quit):\n");
		fgets(doubleString, BUFFER_SIZE, stdin);
		doubleString[strlen(doubleString) - 1] = '\0';
		if (strcmp(doubleString, "q") != 0)
		{
			doubleNumber = atoi(doubleString); // conversion from alphabetical string to integer value.
			printf("Converted number is %d\n", doubleNumber);
		}
	} while (strcmp(doubleString, "q") != 0); // keep looping until the input is "q".
	printf("*** End of Converting Strings to int Demo ***\n\n");
}