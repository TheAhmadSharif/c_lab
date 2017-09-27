#include <stdio.h>
int main () {
	int n, i, userInput;
	printf("Please enter a number ");
	scanf("%d", &n);
	
	printf("You press %d\n", n);
	
	for (i=0; i < n; i++) {
			scanf("%d", &n); 
			if(n%2 == 0) {
				printf("Even %d\n", n);
			}			
			
			else {
					printf("Odd %d\n", n);			
				}
			
 	
			
	}
	return 0;
}
