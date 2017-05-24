#include <stdio.h>

int main() {

	int x[100]; //x is an array of 100 integers
	
	//initialise array

	int testArray[4] = {0,1,2,3};	
	
	for(int i = 0; i < 100; i++) {
		x[i] = i+1;
	}

	printf("Array elements range from %d to %d\n", x[0], x[99]);	
	
	printf("Contents of other array is: \n");

	for (int j = 0; j < 4; j++) {
		printf("%d, ", testArray[j]);
	}	
	return 0;

}
