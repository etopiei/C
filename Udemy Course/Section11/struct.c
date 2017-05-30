#include <stdio.h>

struct Student {
	int rollNumber;
	char name[20];
	double gpa;	
};

typedef struct Student Student; //creates an alias so struct Student isn't needed, just use Student
				//the struct can be declared at the same time as the alias/typedef as well

void inputStudent(Student *studentPointer){

	printf("Enter name: ");
	scanf("%[^\n]", &studentPointer->name);
	printf("Enter roll number: ");
	scanf("%d", &studentPointer->rollNumber);
	printf("Enter GPA: ");
	scanf("%lf", &studentPointer->gpa);
	
}

void printStudent(Student studentPointer) {

	printf("Name of student is: %s\nRoll number is: %d\nGPA is: %lf", studentPointer.name, studentPointer.rollNumber, studentPointer.gpa); 
	
}

int main() {	
	

	Student s1; //declares an object of type student

	Student *studentPointer;
	studentPointer = &s1;

	inputStudent(studentPointer);
	printStudent(*studentPointer);

	printf("\n");

	return 0;

}
