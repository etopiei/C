#include <stdio.h>
#include <stdlib.h>

int main() {

	FILE *fp;

	fp = fopen("writeBinary.txt", "rb");
	if(fp == NULL) {
		printf("Failed to open file.\n");
		return 1;
	}

	long size;
	size = ftell(fp);
	printf("Start is: %ld\n", size);
	fseek(fp, 0L, 2);
	size = ftell(fp);
	printf("Size in bytes is: %ld\n", size);

	int numberOfRecords = size / sizeof(double);
	printf("Number of records is: %d", numberOfRecords);

	//store the data from the file

	double *data;
	data = (double *)malloc(sizeof(double) * numberOfRecords);

	fseek(fp, 0L, 0);

	fread((void *)data, sizeof(double), numberOfRecords, fp);

	int i;

	for(i = 0; i < numberOfRecords; i++) {
		printf("%10.2lf\n", data[i]);
	}

	fclose(fp);

	return 0;

}
