#include <stdio.h>

int main() {

	FILE *fp;
	FILE *fp2;

	fp = fopen("formattedData.txt", "r");
	if(fp == NULL) {
		printf("Unable to open\n");
		return 1;
	}

	fp2 = fopen("writeData.txt", "w");
	if( fp2 == NULL) {
		printf("Can't open write file.\n");
		return 1;
	}

	char name[100];
	int value;

	while(1) {

		fscanf(fp, "%[^,],%d", name, &value);

		if(feof(fp)) {
			break;
		}

		fprintf(fp2, "Name is: %s and they make $%d per hour.\n", name, value);
	}

	return 0;

}
