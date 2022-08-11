#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 80
#include "converting.h"

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
			doubleNumber = atoi(doubleString);
			printf("Converted number is %d\n", doubleNumber);
		}
	} while (strcmp(doubleString, "q") != 0);
	printf("*** End of Converting Strings to int Demo ***\n\n");
}