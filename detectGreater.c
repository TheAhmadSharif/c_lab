// Problem: Find the greater number between two.

#include <stdio.h>

int main () {
	int a,b;
	printf("Please input two number one after another \n");
	scanf("%d %d", &a, &b);
	if (a>b)
	{
		printf("%d is greater than %d\n", a,b);
		/* code */
	}

	else {
		printf("%d is greater than %d\n", b, a);
	}
}