#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int numStudent, i;
	float score;
	int passCount =0, failCount =0;
	
	printf("How many students? ");
	scanf("%d", &numStudent);
	
	for(i = 1; i <= numStudent; i++){
		//keep asking until valid scole is entered
		do{
			printf("Enter score for student %d: ", i);
			if(score < 0 || score > 100){
				printf("Invalid score! Please enter 0-100 only.\n");
			}
		}while(score < 0 || score > 100);
		//check PASS or FAIL
		if(score >= 50){
			printf("Student %d score: %.0f PASS\n", i, score);
			passCount++;
		} else{
			printf("Student %d score: %.0f FAIL\n", i, score);
			failCount++;
		}
	}
	// Final summary
	printf("\n--- Summary ---\n");
	printf("Total Pass: %d\n", passCount);
	printf("Total Fail: %d\n", failCount);
	return 0;
}