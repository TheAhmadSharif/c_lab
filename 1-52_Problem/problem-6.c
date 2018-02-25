#include <stdio.h>
int main () {
	int userInput, divisor, sum, firstDigit, lastDigit, remainder;
	scanf("%d",&userInput);
	printf("You insert %d\n\n", userInput);
	
	lastDigit = userInput % 10;
	divisor = userInput;
	
	for(divisor; divisor > 0; divisor = divisor / 10) {
		remainder = divisor%10; 
		printf("Divisor, Remainder: %d : %d\n", divisor, remainder);
		if(divisor == remainder) {
			firstDigit = remainder;
			break;
		}
	}
	sum = firstDigit + lastDigit;
	printf("Total = %d\n", sum);
	return 0;
}
