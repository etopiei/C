#include <stdio.h>

int main() {

	int var = 5;
	int  *pointer, **pointer2;
	printf("The address of var is: %p\n", &var);	
	pointer = &var;	
	*pointer = 10; //dereference the address and set the value of the memory at address pointer to 10
	printf("Var was 5 and is now: %d\n", var);
	pointer2 = &pointer;
	printf("Variable from pointer 2: %d\n", **pointer2);
	printf("Address of variable from pointer 2 is: %p\n", *pointer2);

	return 0;

}
