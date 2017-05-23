#include <stdio.h>

int main() {

	int one = 1, zero = 0;
	printf("%d\n", one&&zero); //this should print 0
	printf("%d\n", one||zero); //this should print 1
	printf("%d\n", !one); //this should print 0
	return 0;
}
