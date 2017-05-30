#include <stdio.h>

int main() {

	int x = 10;
	int *pointer;
	pointer = &x;

	double *p = (double *)10000;
	double *q = (double *)2000;

	printf("Address stored by pointer is: %lu\n", pointer);
	pointer = pointer + 1; //this adds one unit of whatever type in this case 4 bytes for an int.
	printf("Address stored by pointer is: %lu\n", pointer);

	printf("%d\n", p-q); //this is the number of double locations between 10000 and 2000

	return 0;

}
