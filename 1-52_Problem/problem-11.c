#include <stdio.h>
int main () {
	int i, factorial;
	printf("Insert a numer to get factorial\n");

	scanf("%d", &factorial);
	for(i=factorial-1; i >= 1; i = i - 1) {
		factorial = factorial * i;
	}	
	
	printf("%d\n", factorial);

	return 0;
}
