#include <stdio.h>
#include <stdarg.h>

double sum(char *format, ...) {

	double sum = 0;
	va_list ap;
	va_start(ap, format);

	for(int i = 0; i < strlen(format); i++) {
		char ch = format[i];
		switch(ch) {
			case 'i': sum += va_arg(ap, int);
				break;
			case 'd': sum += va_arg(ap, double);
				break;
			case 'f': sum += va_arg(ap, float);
				break;
			default: printf("Invalid format\n");
				exit(1);
		}
	}

	va_end(ap);
	return sum;

}

int main() {

	double k = sum("idfid", 20, 10.5, 4.2f, 90, 10.9);
	printf("Sum is: %lf\n", k);
	return 0;

}
