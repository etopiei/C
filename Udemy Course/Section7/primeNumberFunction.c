#include <stdio.h>
#include <math.h>

int isNumberPrime(int);

int main() {

	for(int i = 2; i < 1000; i++) {
		int result = isNumberPrime(i);
		if(result == 1) {
			printf("%d is prime.\n", i);
		}
	}

	return 0;

}

int isNumberPrime(int number) {

	int result = 1;

	if(number == 2) {
		result = 1;
		return result;
	}

	for(int j = 2; j <= sqrt(number); j++) {
		if(number%j == 0) {
			result = 0;
			return result;
		}
	}

	return result;

}
