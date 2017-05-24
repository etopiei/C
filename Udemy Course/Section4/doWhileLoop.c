#import <stdio.h>

int main() {

	int number = 0;
	int sum = 0;

	do {
		sum = sum + number;

		printf("Enter a positive integer or -1 to stop: ");
		scanf("%d", &number);

	} while (number!=-1);
	
	printf("Sum is %d\n", sum);
	return 0;

}
