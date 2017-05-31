#include <stdio.h>
#include <stdarg.h>

int sum(int numArgs, ...) {
	
	int sum = 0;
	va_list ap;
	va_start(ap, numArgs);

	for(int i = 1; i <= numArgs; i++) {
		sum += va_arg(ap, int);
	} 

	va_end(ap); //deallocate the argument list
	return sum;

}

int main() {

	int k = sum(4, 10, 20, 30, 40);
	printf("Sum is: %d\n", k);
	return 0;

}
