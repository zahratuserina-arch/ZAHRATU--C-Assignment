#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int number;
	int i;
	
	printf("Enter number:");
	scanf("%d", &number);
	
	//loop from 1 to 12
	for(i = 1; i <= 12; i++){
		printf("%d X %d =%d\n", number, i, number * i);
	}
	return 0;
}