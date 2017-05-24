#include <stdio.h>

int main() {

	int year;
	printf("Enter a year: ");
	scanf("%d", &year);

	if (year%4==0 && (year%100!=0 || year%400==0)) {
		printf("Year is a leap year!\n");
	} else {
		printf("Year is not a leap year.\n");
	}

	return 0;

}
