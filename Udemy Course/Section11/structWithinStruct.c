#include <stdio.h>

typedef struct {
	int day, month, year;
} Date;

typedef struct {
	int employeeNo;
	char name[30];
	double income;
	Date dob;
} Employee;

int main() {

	Employee e;
	e.dob.day = 15;
	e.dob.month = 6;
	e.dob.year = 1996;

	return 0;

}
