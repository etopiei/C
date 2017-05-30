#include <stdio.h>

void swap(int *a, int *b) {

	int temp = *a;
	*a = *b;
	*b = temp;

}

int main() {

	int x = 1, y = 20;
	printf("x is: %d and y is: %d\n", x, y);
	swap(&x, &y);
	printf("x is: %d and y is: %d\n", x, y);
	return 0;

}
