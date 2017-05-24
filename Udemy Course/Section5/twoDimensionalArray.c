#include <stdio.h>

int main() {

	int twoDArray[4][3];
	
	for(int i = 0; i < 4; i++) {
		for(int j = 0; j < 3; j++) {
			twoDArray[i][j] = 10*(i+1)-j;
		}
	}	

	printf("Array contains: \n");

	for(int x = 0; x < 4; x++) {
		for(int y = 0; y < 3; y++) {
			printf("Value at %d,%d is: %d\n", x, y, twoDArray[x][y]);
		} 
	} 

	return 0;

}
