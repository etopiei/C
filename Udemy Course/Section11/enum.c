#include <stdio.h>

typedef enum { 
	SUN, MON, TUES, WED, THURS, FRI, SAT
} days_of_week;

typedef enum {
	FALSE, TRUE
} boolean;

int main() {

	boolean isNumberEven = FALSE; //we have now defined a boolean type	

	days_of_week day = SAT;

	if(day == SUN || day == SAT) {

		printf("Weekend\n");

	} else {

		printf("Not weekend\n");

	}

	// printf("SAT is %d", SAT); THIS PRINTS 6

	return 0;

}
