#include <stdio.h>

int main() {

	void *voidPointer; //this can store the address of a type but it cannot dereference unless casted.
	int x = 100;
	voidPointer = &x;

	printf("%d\n", *((int *)voidPointer));

	return 0;

}
