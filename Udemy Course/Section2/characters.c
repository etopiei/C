#include <stdio.h>

int main() {

	printf("Enter a character: \n");
	char another;
	another = getchar(); //this is necessary because scanf can take an enter by accident.
	printf("You entered: %c\n", another);
	printf("The ascii value of the character is: %d\n", another);
	printf("Enter another character: \n");
	scanf(" %c", &another); //the space before %c allows a charcter input to work properly.
	printf("Character entered was: %c\n", another);
	

	return 0;

}
