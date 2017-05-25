#include <stdio.h>
#include <string.h>

int main() {

	char str[100];
	printf("Enter a string: ");
	scanf("%[^\n]", str);

	int i = 0;
	while(str[i] != '\0') {
		i++;
	}
	printf("String is of length: %d\n", i);
	int j = strlen(str);
	printf("strlen function gives length: %d\n", j);	
	return 0;

}
