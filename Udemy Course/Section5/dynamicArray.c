#include <stdio.h>

int main() {

	int sizeOfArray;
	printf("What size array would you like?\n");
	scanf("%d", &sizeOfArray);
	int array[sizeOfArray];

	for (int i = 0; i < sizeOfArray; i++) {
		printf("Enter an element to index %d: ", i);
		scanf("%d", &array[i]);
	} 

	printf("Array contents are: \n");
	for (int j = 0; j < sizeOfArray; j++) {
		printf("%d,", array[j]);
	}

	printf("\n");
	return 0;

}
