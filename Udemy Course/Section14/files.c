#include <stdio.h>

int main() {

	FILE *fp;
	fp = fopen("new.txt", "w");

	if(fp == NULL) {
		printf("File failed to open\n");
		return 1;
	}

	fputc('a', fp);
	fputc('b', fp);

	fclose(fp);

	printf("Wrote to file.\n");

	FILE *fp2;

	fp2 = fopen("new.txt", "r");

	//priming read	

	char currentChar;
	currentChar = fgetc(fp2);

	while(!feof(fp2)) {

		//print out file

		printf("%c", currentChar);
		currentChar = fgetc(fp2);

	}

	fclose(fp2);

	return 0;

}
