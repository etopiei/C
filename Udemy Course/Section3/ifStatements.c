#include <stdio.h>

int main() {

	int a, b, max;
	int maxExists;
	printf("Enter two integers: ");
	scanf("%d %d", &a, &b);
	if (a>b) {
		max = a;
		maxExists = 1;
	}
	else if (a == b) {
		maxExists = 0;
	} else {
		max = b;
		maxExists = 1;
	}
	if (maxExists == 1) {
		printf("Maximum is %d\n", max);
	} else {
		printf("The numbers are equal\n");
	} 

	return 0;

}
