#include <stdio.h>

int recursiveAddNTo1(n) {
	
	if(n == 1) {
		return 1;
	}
	else {
		return n+recursiveAddNTo1(n-1);
	}

}

int main () {

	printf("%d\n", recursiveAddNTo1(20));
	return 0;
}
