#include <stdio.h>

int main() {

	int *p;
	float *f;
	double *d;
	char *c;

	printf("%lu %lu %lu %lu\n", sizeof(p), sizeof(f), sizeof(d), sizeof(c)); //size of addresses are uniform across OS
	printf("%lu %lu %lu %lu\n", sizeof(*p), sizeof(*f), sizeof(*d), sizeof(*c)); //size of types are different

}
