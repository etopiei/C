#include <stdio.h>

int main() {

	FILE *fp;
	double data[4];

	fp = fopen("writeBinary.txt", "rb");
	if(fp == NULL) {
		printf("Unable to open file\n");
		return 1;
	}

	int items = fread((void *)data, sizeof(double), 4, fp);
	if(items == 0) {
		printf("Failed to read items\n");
	}

	int i;
	for(i = 0; i < 4; i++) {
		printf("%lf ", data[i]);
	}

	return 0;

}

