//============================================================================
// Name        : guessnumber.cpp
// Author      : timawesomeness
// Version     : 1.0
// Copyright   : (C) 2014 timawesomeness
//============================================================================

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	int maxNum = 100;
	srand(time(0));
	int randNum = rand() % maxNum + 1;
	int guess = 0;

	printf("Guess a number between 1 and 100: ");
	printf("%i", randNum);

	while (guess != randNum) {
		scanf("%i", &guess);
		if (guess < randNum) {
			printf("Guess higher next time.\n");
			printf("Guess again: ");
		} else if (guess > randNum) {
			printf("Guess lower next time.\n");
			printf("Guess again: ");
		} else if (guess != randNum) {
			printf("Failure!\n");
			printf("Guess again: ");
		}
	}

	printf("Correct! Now go eat some chicken!");
	return 0;
}
