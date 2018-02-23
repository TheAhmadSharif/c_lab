#include <stdio.h>
int main () {
	int i, squareNumber, getUserInput; 
	char asterisk[1] = "*";
	scanf("%d", &getUserInput);
	squareNumber = getUserInput * getUserInput;
	for (i = 1; i <= squareNumber; i++) {
		printf("%s", asterisk);	
		if(i%getUserInput==0) {
			printf("\n");		
		}
	}
	printf("\n");
	
	return 0;
}
