#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	// creating variable with suitable data types
	int age = 15;
	float examScore = 85.5;
	float gpa = 3.5;
	char grade = 'A';
	// Displaying values with appriopriate forma specifiers
	
	printf("Age: %d\n", age);
	printf("Examination score: %.2f\n", examScore);
	printf("GPA: %.2f\n",gpa);
	printf("Grade: %c\n", grade);
	return 0;
}