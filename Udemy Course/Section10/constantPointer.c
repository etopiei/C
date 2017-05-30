#include <stdio.h>

int main() {

	const double PI = 3.14;
	int x[] = {1,2,3,4}; //x is a constant pointer to the start of the array

	// int *p; this pointer can be changed

	int *const p = x; //the pointer cannot be changed but values referenced by this pointer can be changed.
	
	//const int *p = x; the value dereferneced by the pointer is constant
	//for the above line p can be changed by the value *p cannot be changed by the pointer.	

	//p = p + 1; This will cause an error because the constant pointer can't be changed

	return 0;

}
