#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	float R1, R2, R3, largest;
	printf("Enter three resistor values: ");
	scanf("%f %f %f", &R1, &R2, &R3);
	largest =R1;
	if (R2 > largest) largest= R2;
	if (R3> largest) largest= R3;
	
	printf("Largest resistor = %.2f,");
	return 0;
}