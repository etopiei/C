#include <stdio.h>

int main() {
	
	char str[80];
	printf("Enter a string: ");
	scanf("%[^\n]", str);

	int countLetters = 0, countSpaces = 0;

	for(int i = 0; str[i]!='\0'; i++) {
		if((str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z')) {
			countLetters++;
		}
		else if (str[i] == ' ') {
			countSpaces++;
		}
	}

	printf("The number of spaces is: %d\n", countSpaces);
	printf("The number of letters is %d\n", countLetters);	

	return 0;

}
