#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	float voltage, current, power;
	printf("Enter voltage (V): ");
	scanf("%f", &voltage);
	printf("Enter current (I):");
	scanf("%f", &current);
	power = voltage * current;
	printf("Electrical power P =%.2f Watts\n", power);
	return 0;
}