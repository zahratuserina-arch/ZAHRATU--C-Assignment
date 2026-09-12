#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	float voltage, current, time;
	float power, energy;
	//Accept inputs
	printf("Enter voltage in volts:");
	scanf("%f", &voltage);
	
	printf("Enter currents in amperes:");
	scanf("%.2f", &current);
	
	printf("Enter operating time in hours:");
	scanf("%f", &time);
	//calculating power= voltage * current
	power = voltage * current;
	//calculating Energy =power * time
	energy = power * time;
	//displaying results
	printf("\n--- Result ---\n");
	printf("Power =%.2f watts\n", power);
	printf("Energy =%.2f watt-hours\n", energy);
	return 0;
}