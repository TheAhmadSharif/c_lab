#include <stdio.h>
int main () {
	int n, remainder, reversedInteger, originalNumber;
	printf("Enter an integer number\n");
	scanf("%d", &n);

	originalNumber = n;

	while (n!=0) {
		remainder = n%10;
		reversedInteger = remainder * 10 + remainder;
		n = n/10; 
	}

	if(reversedInteger == originalNumber) {
		printf("%d is a paralindrom\n", originalNumber);
	}
	else {
		printf("%d is not a paralindrom\n", originalNumber);
	}

	return 0;
}
