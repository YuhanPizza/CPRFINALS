/*
Origin: Lorenz Alvin Tubo, ltubo@myseneca.ca, 109934224 ,08/12/2022, CPR, Final Assignment
tokenizing.c : Tokenizing
Purpose: Seperating an entered String into Tokens.
*/
#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 300
#include "tokenizing.h"
/*
Purpose: Takes in a string and seperates them by words per space. And counts the number of words entered.
Parameters: None
Modified: phrasesCounter is modified. Value is incremented depending on number of words.
*/

void tokenizing(void) {
	printf("*** Start of Tokenizing Phrases Demo ***\n");
	char phrases[BUFFER_SIZE];
	char* nextPhrase = NULL;
	int phrasesCounter;
	do {
		printf("Type a few phrases separated by space (q - to quit):\n");
		fgets(phrases, BUFFER_SIZE, stdin);
		phrases[strlen(phrases) - 1] = '\0'; // phrases length 
		if (strcmp(phrases, "q") != 0) {
			nextPhrase = strtok(phrases, " ");// searches for a separator string within a larger string then returns to a pointer string 
			phrasesCounter = 1;
			while (nextPhrase) {
				printf("Phrase #%d is \'%s\'\n", phrasesCounter++, nextPhrase);
				nextPhrase = strtok(NULL, " ");
			}
		}
	} while (strcmp(phrases, "q") != 0);
	printf("*** End of Tokenizing Phrases Demo ***\n\n");
}