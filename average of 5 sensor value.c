#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	float value, sum = 0, average;
	int i;
	for (i =1; i<= 5; i++){
		printf("Enter sensor value %d:", i);
		scanf("%f", &value);
		sum += value;
	}
	average = sum/5.0;
	printf("Average of 5 sensor values = %.2f\n", average);
	return 0;
}