#include <stdio.h>

int main() {

	int count, sum = 0, numberOfOddNumbers = 0;

	for(count=1;count<=100;count++) {

		if (count%2==1) {
			numberOfOddNumbers++;
			continue;
		} else {
			sum = sum + count;	
		}

		if (numberOfOddNumbers == 8) {
			break;
		}

	}

	printf("Sum of even numbers before 8 odd numbers ecountered is : %d\n", sum);

	return 0;

}
