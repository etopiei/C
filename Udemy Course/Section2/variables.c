#include <stdio.h>

int main() {

	int aVar, x;
	printf("Enter a number:\n");
	scanf("%d", &aVar);
	x = aVar + 1;
	printf("The value is: %d and x is: %d\n", aVar, x);
	printf("The hex value is: %x\n", aVar);
	return 0;

}
