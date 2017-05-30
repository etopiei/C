#include <stdio.h>
#include <stdlib.h>

int main() {

	int* p[3];
	int **k;
	k = p;

	int x[] = {1,2,3};
	int y[] = {10, 20, 30};
	int z[] = {5,6,7};

	p[0] = x;
	p[1] = y;
	p[2] = z;

	printf("%d\n", **p); //this will print out 1, the first element of the x array
	printf("%d\n", *(*(p+1)+2)); //this will print the third element of the y array 

	return 0; 

}
