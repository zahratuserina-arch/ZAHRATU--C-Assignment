#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	float num1, num2;
	printf("Enter first number: ");
	scanf("%f", &num1);
	
	printf("Enter second number: ");
	scanf("%f", &num2);
	
	printf("Addition: %.2f\n", num1 + num2);
	printf("Subtraction: %.2f\n", num1 - num2);
	printf("Multiplication: %.2f\n", num1 * num2);
	// To ensure decimal result, use float
	if
	(num2 != 0)
	printf("Divisiom: %.2f\n",num1 / num2);
	else
	printf("Division: cannot divide by zero\n");
	return 0;
}