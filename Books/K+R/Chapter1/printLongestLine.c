#include <stdio.h>
#define MAXLINE 1000

int getLine(char line[], int max); //This function returns the next lines length and stores it in a character array called line.
void copy(char to[], char from[]); //Copy one array to another

int main() {

	int length;
	int maxSoFar; //Line length and max length so far
	char line[MAXLINE];
	char longest[MAXLINE]; //Current line is stored in this array and longest line stored in other array

	maxSoFar = 0;

	while((length = getLine(line, MAXLINE)) > 0) {

		if(length > maxSoFar) {

			maxSoFar = length;
			copy(longest, line);

		}

	}

	if(maxSoFar > 0) {
		printf("\nThe longest line was: %s\n", longest);
	} else {
		printf("No input\n");
	}

	return 0;

}

int getLine(char line[], int max) {

	int currentChar, i;

	for(i = 0; i < max - 1 && (currentChar = getchar()) != EOF && currentChar != '\n'; i++) {

		line[i] = currentChar;

	}

	if(currentChar == '\n') {

		line[i] = currentChar;
		++i;

	}

	line[i] = '\0';

	return i;



}

void copy(char to[], char from[]) {

	int i = 0;

	while((to[i] = from[i]) != '\0')
		++i;

}
