#include <stdio.h>
#include <string.h>

int main() {

	char myString[50] = "Hello World";
	char newString[50] = "String has been changed.";
	strcpy(myString, newString);
	printf("Message is: %s\n", myString);
	return 0;

}
