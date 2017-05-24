#include <stdio.h>

int main() {

	int a, b, difference;
	printf("Enter two integers: ");
	scanf("%d %d", &a, &b);

	//computing difference with if-else block

	if (a>b) {
		difference = a-b;
	} else {
		difference = b - a;
	}

	printf("The difference between the two numbers is %d according to if-else block.\n", difference);

	(a>b)?(difference=a-b):(difference=b-a);

	printf("The difference between the two numbers is %d according to the ternary conditional operator.\n", difference);

	return 0;

}
