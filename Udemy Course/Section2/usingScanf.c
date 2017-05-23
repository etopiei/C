#include <stdio.h>

int main() {

	int x, y;
	printf("Enter two integers: ");
	int i = scanf("%d %d", &x, &y);
	printf("Number of values entered is: %d. They were %d and %d.\n", i, x, y);

	return 0;

}
