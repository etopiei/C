#include <stdio.h>

void test3() {
	extern int globalVariable;
	globalVariable = 10;

}

int globalVariable;

void test2() {

	static int var2; //static is initialised with 0 but its lifetime is the runtime of the program. scope is local.
	printf("var2 = %d\n", var2);
	var2++;
	printf("var2 = %d\n", var2);

}

void test() {

	auto int var; //auto gives unpredictable value, auto does not have to be specified.
	printf("var = %d\n", var);
	var++;
	printf("var = %d\n", var);

}

int main() {

	printf("Global variable is: %d\n", globalVariable);
	test();
	test2();
	test2();
	test3();
	printf("Global variable is %d\n", globalVariable);
	register int count; //register has same scope and lifetime as local, but it is stored in the register instead of RAM.
	for(count = 1; count<=30; count++) {
		printf("Count is: %d\n", count);	
	}
	return 0;

}
