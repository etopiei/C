#include <stdio.h>

int main() {

	char str[80];
	printf("Enter your name: ");
	scanf("%[A-Za-z ]", str); //space stops scanf use pattern matching to allow spaces and alphabetic characters
	printf("Hey there, %s\n", str);
	

	return 0;

}
