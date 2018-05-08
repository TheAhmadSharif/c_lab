#include <stdio.h>
int main () {
	int i, f, range;
	long factorial;
	printf("Please insert a number to get its factorial value\n");
	scanf("%d", &range);
	f = factorial = range;

	for(i=1; i < f; i++) {
		factorial = factorial * i;
	}
	printf("%li\n", factorial);
	return 0;
}
