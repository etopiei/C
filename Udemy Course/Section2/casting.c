#import <stdio.h>

int main() {

	int a = 5, b = 2;
	float r;
	r = (float)a / b; //this needs to be casted because integer division occurs otherwise.
	printf("r = %f\n", r);
	
	return 0;

}
