#include <stdio.h>
int main () {
	
	int i, j, max;
	
	printf("please put a number.");
	scanf("%d", &max);	

	for(i=1; i <= max; i++) {
			for (j=1; j <=i; j++) {
					printf("*");
			}
		printf("\n");
 	}
	return 0;
}
