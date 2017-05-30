#include <stdio.h>
#include <stdlib.h>

int main() {

	int *p;
	int elements;

	printf("Enter number of integers: ");
	scanf("%d", &elements);

	p = (int *)calloc(elements, sizeof(int));
	if (p == NULL) {

		printf("Unable to allocate memory.\n");
		exit(1);
	
	}

	for(int i = 0; i < elements; i++) {

		printf("Next number is: ");
		scanf("%d", p+i);

	}

	printf("Contents of array: ");
	for(int j = 0; j < elements; j++) {

		printf("%4d", *(p+j));

	}

	int addElements = elements + 5;
	p = (int *) realloc(p, addElements * sizeof(int));
	if(p == NULL) {

		printf("Allocation failed.\n");
		exit(1);	

	}

	*(p+elements) = 100;
	*(p+elements+1) = 2000;
	*(p+elements+2) = 300;
	*(p+elements+3) = 40;
	*(p+elements+4) = 10; 

	printf("New contents is: ");

	for(int k = 0; k < addElements; k++) {

		printf("%4d", *(p+k));

	}

	printf("\n");
	free(p);

	return 0;

}
