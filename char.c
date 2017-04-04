#include <stdio.h>

int main () {
	char singleLetter;
	printf("Enter a single character\n");
	scanf("%c", &singleLetter);
	printf("You entered %c\n%d\n", singleLetter, singleLetter);
	return 0;
}