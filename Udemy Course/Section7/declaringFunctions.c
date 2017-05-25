#include <stdio.h>

double getSimpleInterest(double, double, double);

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

double getSimpleInterest(double amount, double interestRate, double time) {
	return (amount*interestRate*time)/100;
}
