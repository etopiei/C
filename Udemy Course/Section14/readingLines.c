#include <stdio.h>

int main() {

	FILE *fp;
	fp = fopen("lines.txt", "r");

	if(fp == NULL) {
		printf("Unable to open file.\n");
		return 1;
	}

	char x[100];
	while(1) {
		fgets(x, 100, fp);
		if(feof(fp)) {
			break;
		}
		printf("%s", x);
	}

	fclose(fp);
	return 0;

}
