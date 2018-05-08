#include <stdio.h>


int main () {
	int i, j, max, CHAR;
		CHAR = 2;
	
	printf("please insert a number to make a shape of Diamond\n");
	scanf("%d", &max);
		
	printf("You insert %d\n", max);
	printf("\n");
	
	for (i=1; i<=max; i++)	{
		for(j=1; j<=i; j++) {
			printf("%d", CHAR);			
		}		
	
		printf("\n");
   }
		
		for(i = max - 1; i > 0; i=i-1) {
			for(j=1; j <= i; j++) {
				printf("%d", CHAR);
			}
			printf("\n");		
		}
			
	
	return 0;
} 


