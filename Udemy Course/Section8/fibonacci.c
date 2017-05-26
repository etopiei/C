#include <stdio.h>

long fibonacci(int n) {
	
	if(n == 1 || n == 2) {
		return 1;
	}
	else {
		return fibonacci(n-1)+fibonacci(n-2);
	}

}

int main() {

	int term;
	printf("Enter the term number of the fibonacci series: ");
	scanf("%d", &term);
	printf("Fibonacci term %d is: %ld\n", term, fibonacci(term));

	return 0;

}
