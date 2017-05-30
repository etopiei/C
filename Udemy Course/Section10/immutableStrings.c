#include <stdio.h>
#include <stdlib.h>

int main() {

	char *str = "Hi there"; //str can be used to reference the string but the contents of the string literal cannot be changed.
	printf("%s\n", str);
	//*(str+1) = "b"; this is not legal and will cause a runtime error.
	return 0;

}
