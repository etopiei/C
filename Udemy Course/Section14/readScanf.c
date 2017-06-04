#include <stdio.h>

int main() {

	FILE *fp;

	fp = fopen("formattedData.txt", "r");
	if(fp == NULL) {
		printf("Unable to open\n");
		return 1;
	}

	char name[100];
	int value;

	while(1) {

		fscanf(fp, "%[^,],%d", name, &value);

		if(feof(fp)) {
			break;
		}

		printf("Name is: %s and value is %d\n", name, value);
	}

	return 0;

}
