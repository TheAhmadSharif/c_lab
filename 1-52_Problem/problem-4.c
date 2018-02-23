#include <stdio.h>
int main () {
	int i, j, userInput, productNumber;
	
	scanf("%d", &userInput); 
	for (i=0; i <= userInput; i++) {
		printf("Please insert a number to get the product of that number\n");
		scanf("%d", &productNumber);
		for (j=1; j <= productNumber; j++) {
				if(productNumber%j == 0) {
					printf(" %d", j);				
				}
				
		}	
	}
	return 0;
}
