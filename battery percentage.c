#include <stdio.h>
#include <stdlib.h>

int main(){
	float battery;
	printf("Enter bettery percentage (0-100): ");
	scanf("%f", &battery);
	if (battery <20){
		printf("Battery Status : LOW\n");
	} else if (battery <=80){
		printf("Battery Status : NORMAL\n");
	} else {
		printf("Battery Status : FULL\n");
		
	}
	return 0;
}