#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

	long t;
	t = time(NULL);
	srand(t); //Use the time as a seed to the random number generator.

	int number = rand();
	printf("%d\n", number);
	return 0;

}
