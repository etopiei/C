#include <stdio.h>
#include <stdlib.h> //this is to include malloc, calloc and realloc

int main() {

	int *p, numberOfNumbers;
	printf("How many integers will you enter? ");
	scanf("%d", &numberOfNumbers);

	//calloc has two arguments number of elements and size of each element, also it auto-initialises values to zero.

	p = (int *)calloc(numberOfNumbers, sizeof(int)); //allocates numberOfNumber slots for integers
	if(p == NULL) {
		printf("Unable to allocate memory.\n");
		exit(1);
	}

	for(int i = 0; i < numberOfNumbers; i++) {
		printf("Next number: ");
		scanf("%d", p+i);
	}

	printf("Content of array: ");
	for(int j = 0; j < numberOfNumbers; j++) {
		printf("%4d", *(p+j));
	}

	printf("\n");

	free(p);

	return 0;

}
