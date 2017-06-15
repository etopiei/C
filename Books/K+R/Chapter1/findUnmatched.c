#include <stdio.h>

#define BRACE_OPEN 0
#define BRACE_CLOSE 1
#define BRACKET_OPEN 2
#define BRACKET_CLOSE 3

int main() {

	int indexOfUnmatchedBrackets[100]; //store an array of unmatched brackets using a stack structure
	int indexOfUnmatchedBraces[100]; //same for braces.

	int numBrackets = 0; //add one to this for every opening bracket, minus for closing
	int numBraces = 0; //same for this and braces. It should be zero at the end

	char c;
	int type;
	int currentIndex = 0;

	while((c = getchar()) != EOF) {

		//if code is any of the bracket types perform operations needed.

		switch (c) {
			case '{':
				type = BRACE_OPEN;
				indexOfUnmatchedBraces[numBraces++] = currentIndex;
				break;
			case '}':
				type = BRACE_CLOSE;
				if(numBraces > 0){
					--numBraces;
				} //fix this so a closed bracket before an open creates an error.
				break;
			case '(':
				type = BRACKET_OPEN;
				indexOfUnmatchedBrackets[numBrackets++] = currentIndex;
				break;
			case ')':
				type = BRACKET_CLOSE;
				--numBrackets;
				break;
		}

		currentIndex++;

	}

	if(numBrackets > 0 || numBraces > 0) {

		printf("There are unmatched  brackets or braces in your program.\n");

	} else {

		printf("All brackets and braces match in your program\n");

	}

	return 0;

}
