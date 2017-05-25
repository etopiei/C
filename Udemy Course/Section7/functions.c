#include <stdio.h>

double getSimpleInterest(double amount, double interestRate, double time) {

	double calculatedInterest = (amount*interestRate*time)/100.0;
	return calculatedInterest;

}

int main() {

	double amount, interestRate, time;
	printf("Enter amount in dollars: ");
	scanf("%lf", &amount);
	printf("Enter interest rate in dollars: ");
	scanf("%lf", &interestRate);
	printf("Enter time in years: ");
	scanf("%lf", &time);

	printf("Interest = $%0.2lf\n", getSimpleInterest(amount, interestRate, time));	

	return 0;

}
