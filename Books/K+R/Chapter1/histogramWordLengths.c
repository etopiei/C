#include <stdio.h>

//Exercise 1-13

int main() {

	int wordLength[11]; 
	int c, currentWord = 1, length = 1;

	int i;
	for(i = 0; i < 10; i++) {

		wordLength[i] = 0;

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

	printf("\n");

	int j;
	for(j = 0; j < 10; j++) {

		if(j < 9) {
			printf("%d:   ", j+1);
		} else {
			printf("%d+:  ", j+1);
		}

		int h;
		for(h = 0; h < wordLength[j]; h++) {
			printf("*");
		}

		printf("\n");	

	}

	return 0;

}
