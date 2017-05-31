#include <stdio.h>


//arg stores number of arguments and argv is an array of pointers to character arrays which contain the address of the base of the arguments in memory

int main(int argc, char **argv) {
	
	printf("The number of arguments is: %d\n", argc);

	int i;
	for(i = 1; i < argc; i++) {
		printf("argv[%d] is: %s\n", i, argv[i]);
	}  	

	return 0;

}
