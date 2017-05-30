#include <stdio.h>

void printArray(int *pointerArray, int numberOfElements) {

	for(int i = 0; i < numberOfElements; i++) {
		printf("%4d", *(pointerArray+i));
	}

}

int main() {

	int x[] = {10,20,30,40,50};
	printf("%p, %p", x, &x[0]);

	for(int i = 0; i < 5; i++) {
		printf("%4d ", *(x+i)); //the name of the array stores the address of the base element use address arithmetic
	}

	printArray(x, 5); //more general function using pointers
	
	printf("\n");

	return 0;

}
