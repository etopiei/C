#include <stdio.h>
#include <stdlib.h>

int main() {

	int **p, rows, cols;
	printf("Enter number of rows: ");
	scanf("%d", &rows);
	printf("Enter number of cols: ");
	scanf("%d", &cols);

	p = (int **)malloc(rows * sizeof(int *));
	if(p == NULL) {

		printf("Failed to allocate memory. Exiting.\n");
		exit(1);
	
	}

	for(int i = 0; i < rows; i++) {

		//for each row allocate memory for the column as well.
		*(p+i) = (int *)malloc(cols * sizeof(int));

	}

	//access each element of the 2d array using *(*(p+i)+j) which is equivalant to p[i][j]

	for(int j = 0; j < rows; j++) {
		
		free(*(p+j));

	}

	return 0;

}
