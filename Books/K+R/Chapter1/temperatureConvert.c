#include <stdio.h>

double convertToCelsius(double temp) {

	return (5.0*(temp-32.0))/9.0;

}

double convertToFaren(double temp) {

	return temp*(9.0/5.0)+32.0;

}

int main() {

	double faren, celsius;

	printf("Enter a temperature in celsius: ");
	scanf("%lf", &celsius);
	faren = convertToFaren(celsius);
	printf("The temperature in farenheit is: %0.2lf\n", faren);
	printf("Enter a temperature in farenheit: ");
	scanf("%lf", &faren);
	celsius = convertToCelsius(faren);
	printf("The temperature in celsius is: %.2lf\n", celsius);

	return 0;

}
