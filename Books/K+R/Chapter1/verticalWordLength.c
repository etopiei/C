#include <stdio.h>

//Exercise 1-13 Extension Task

int main() {

	int wordLength[11];
	int c, currentWord = 1, length = 1;

	int z;
	for(z = 0; z < 10; z++) {

		wordLength[z] = 0;

	}

	while((c = getchar()) != EOF) {

		if(currentWord == 0) {

			if(length <= 10) {
				wordLength[length-1]++;
			} else {
				wordLength[10]++;
			}

			//reset word if this charcater is not a blank or tab or space

			if(c != ' ' && c != '\n' && c != '\t') {


				currentWord = 1;
				length = 1;

			}

		} else {
			//else add to the word if it is alphabetic

			if((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
				length++;
			}

			else if(c == ' ' || c == '\n' || c == '\t') {

				currentWord = 0;

			}

		}
	}

	int highest = 0, i;

	for(i = 0; i < 10; i++) {

		if(wordLength[i] > highest) {

			highest = wordLength[i];

		}

	}

	int j, k;

	for(j = highest; j > 0; j--) {
		for(k = 0; k < 10; k++) {

			if(wordLength[k] >= j) {

				printf("* ");

			} else {

				printf("  ");

			}

		}

		printf("\n");

	}

	printf("1 2 3 4 5 6 7 8 9 10+");
	printf("\n");

	return 0;

}
