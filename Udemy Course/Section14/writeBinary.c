#include <stdio.h>

int main() {

	FILE *fp;
	double data[] = {10.6, 7.8, 8.91, 12.0};

	fp = fopen("writeBinary.txt", "wb");
	if(fp == NULL) {
		fprintf(stderr, "Couldn't open file.\n");
		return 1;
	}


	int written = fwrite((void *) data, sizeof(double), 4, fp);
	if(written == 0) {
		printf("No elements written\n");
	}

	fclose(fp);

	return 0;

}
