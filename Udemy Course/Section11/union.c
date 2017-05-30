#include <stdio.h>

//memory for the maximum size of the union is allocated as only one of these needs to be stored

typedef union {
	double weight;
	int size;
	char color[10];
} Description;

typedef struct {
	int iNumber;
	char iName[30];
	
	//double weight;
	//int size;
	//char color[10];

	//instead of the above we can utilise the union
	Description d;	

	double price;

} Item;

int main() {

	Item item;
	item.d.size = 10;
	item.d.weight = 60.5;

	//item.d contains weight now, as size is overwritten

	return 0;

}
