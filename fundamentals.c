/*
Origin: Sahibpreet Singh, sahibpreet-singh1@myseneca.ca, 165338211,08/12/2022, CPR, Final Assignment
fundamentals.c : input
Purpose: Takes input from the user and measures the length.
*/

#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE		80
#define NUM_INPUT_SIZE  10
#include "fundamentals.h"
/*
Purpose: Provide a valid string input after validation
Parameters: None
Modifies:  Nothing is modified since the input value is stored in a a char array.
*/
void fundamentals(void) {
	
	printf("**** Start of Index Strings Demo ****\n");
	char buffer1[BUFFER_SIZE];
	char numInput[NUM_INPUT_SIZE];
	size_t position;
	
	do {
		printf("Type not empty string (q - to quit):\n");
		fgets(buffer1, BUFFER_SIZE, stdin);
		buffer1[strlen(buffer1) - 1] = '\0';
		if (strcmp(buffer1, "q") != 0) {
			printf("Type the character position within the string:\n");
			fgets(numInput, NUM_INPUT_SIZE, stdin);
			numInput[strlen(numInput) - 1] = '\0';
			position = atoi(numInput);
			if (position >= strlen(buffer1)) {
				position = strlen(buffer1) - 1;
				printf("Too big... Position reduced to max. available\n");
			}
			printf("The character found at %d position is \'%c\'\n", (int)position, buffer1[position]);
		}
	} while (strcmp(buffer1, "q") != 0);
	printf("*** End of Indexing Strings Demo ***\n\n");

	printf("*** Start of Measuring String Demo ***\n");
	char buffer2[80];
	while (TRUE) {
		printf("Type a string (q - to quit) :\n");
		gets(buffer2);
		if (strcmp(buffer2, "q") == 0) break;
		printf("The length is %lu\n", strlen(buffer2));
	}
	printf("*** End of Measuring Strings Demo ***\n\n");
}