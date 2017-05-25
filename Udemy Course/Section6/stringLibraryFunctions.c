#include <stdio.h>
#include <string.h>

int main() {
	
	char first[80] = "Hello!";
	char second[80];
	char third[80] = "World!";
	char fourth[80] = "Hello! World!";
	strcpy(second, first);
	printf("Second string was copied value: %s\n", second);
	strcat(first, " ");
	strcat(first, third);
	printf("First concatenated with space and third is: %s\n", first);
	int i = strcmp(first, fourth);
	if (i == 0) {
		printf("The strings %s and %s are equal.\n", first, fourth);
	} else {
		printf("the strings %s and %s are not equal.\n", first, fourth);
	}

	return 0;

}
