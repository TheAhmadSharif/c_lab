#include <stdio.h>
int main() {
	int a, b;
	printf("Input a integer number \n");
	scanf("%d", &a);
	printf("Input another integer number \n");
	scanf("%d", &b);
	printf("Sum of %d + %d = %d\n", a, b, a + b);
	return 0;
}