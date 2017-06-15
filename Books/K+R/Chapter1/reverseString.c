#include <stdio.h>
#include <string.h>

void reverse(char *stringToReverse);

int main() {

	char string[] = "Testing this!";
	printf("Original string is: %s\n", string);
	reverse(string);
	printf("Reversed string is: %s\n", string);

	return 0;

}

void reverse(char *stringToReverse) {

	int i, length;

	length = strlen(stringToReverse);

	for(i = 0; i < (length/2); i++) {

		char temp = stringToReverse[i];
		stringToReverse[i] = stringToReverse[length-i-1];		
		stringToReverse[length-i-1] = temp;

	}

}
