#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 80
#include "manipulating.h"

void manipulating(void) {
	printf("*** Start of Comparing Strings Demo ***\n");
	char compare1[BUFFER_SIZE];
	char compare2[BUFFER_SIZE];
	int result;
	while (TRUE) {
		printf("Type the 1st string to compare (q - to quit):\n");
		gets(compare1);
		
		if (strcmp(compare1, "q") == 0) break; 
			printf("Type the 2nd string to compare:\n");
			gets(compare2);
			
			result=strcmp(compare1, compare2);
			if (result < 0)
				printf("1st string is less than 2nd\n");
			else if (result == 0)
				printf("1st string is equal to 2nd\n");
			else
				printf("1st string is greater than 2nd\n");
		}

	printf("*** End of Comparing Strings Demo ***\n\n");
}