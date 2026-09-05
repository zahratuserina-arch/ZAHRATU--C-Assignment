#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	float celsius, fahrenheit;
	printf("Enter temperature in Celsius:");
	scanf ("%f", &celsius);
	fahrenheit = (celsius* 9.0/5.0)+32;
	printf("Temperature in Fahrenheit = %.2f F\n", fahrenheit);
	return 0;
}