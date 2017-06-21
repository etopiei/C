#include <stdio.h>

int main() {

	int indexOfUnmatchedBrackets[100]; //store an array of unmatched brackets
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
				indexOfUnmatchedBraces[numBraces++] = currentIndex;
				break;

			case '}':
			//later add check to see if close brace comes before open
				--numBraces;
				break;

			case '(':
				indexOfUnmatchedBrackets[numBrackets++] = currentIndex;
				break;

			case ')':
			//later add check to see if close bracket comes before open
					--numBrackets;
					break;

		currentIndex++;

	}

	if(numBrackets > 0 || numBraces > 0) {

		printf("There are unmatched  brackets or braces in your program.\n");
		//later put code here to print out locations plus other details about problems.

	} else {

		printf("All brackets and braces match in your program\n");

	}

	return 0;

}
