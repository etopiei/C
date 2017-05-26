#include <stdio.h>

void hanoi(int numberToMove, int source, int aux, int dest) {

	if (numberToMove == 1) {
		printf("Move disk at %d to %d\n", source, dest);
		return;
	} else {
		hanoi(numberToMove-1, source, dest, aux);
		hanoi(1, source, aux, dest);
		hanoi(numberToMove-1, aux, source, dest);	
	}

}

int main() {

	int numberOfRings;
	printf("How many rings to use for Tower Of Hanoi: ");
	scanf("%d", &numberOfRings);
	hanoi(numberOfRings, 0, 1, 2);
	return 0;

}
