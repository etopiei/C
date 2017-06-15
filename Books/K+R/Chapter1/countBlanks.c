#include <stdio.h>

//Author: etopiei
//Exercise 1-8

main() {

	int numberOfBlanks = 0;
	int numberOfTabs = 0;
	int numberOfNewLines = 0;
	int c;

	while((c = getchar()) != EOF) {

		if(c == ' ') {
			numberOfBlanks++;
		}

		else if(c == '\n') {
			numberOfNewLines++;
		}
		else if(c == '\t') {
			numberOfTabs++;
		}		

	}

	printf("\nSpaces: %d, Tabs: %d, NewLines: %d\n", numberOfBlanks, numberOfNewLines, numberOfTabs); 

	return 0; 

}
