#include <stdio.h>

int main() {

	FILE *fp;
	double val;

	fp = fopen("writeBinary.txt", "rb");
	if(fp == NULL) {
		printf("Failed to open file\n");
		return 1;
	}

	fseek(fp, 2*sizeof(double), 0); //skip the first two values before reading

	fread((void *)&val, sizeof(double), 1, fp);
	printf("Read in value: %lf\n", val);

	return 0;

}
