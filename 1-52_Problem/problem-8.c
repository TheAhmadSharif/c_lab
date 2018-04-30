#include <stdio.h>
#include <math.h>

int main () {
	// int 1 byte
	// float 4 bytes
   // double 8 bytes
   // %3.2f  //(print as a floating point at least 3 wide and a precision of 2) 

	 int num, squareRoot;
	 int chek;	
	
	 printf("Please typea square number.\n");
	 scanf("%d", &num);	 
	 printf("You insert %d\n.", num);
	 printf("--------------------------\n");	
	 squareRoot = sqrt(num);
	 
	  chek = squareRoot * squareRoot;
		if (chek == num) {
			printf("%d This is a square number.\n", num);
		}

		else {
				printf("This is not a square number \n");
		} 
	 	
    return 0; 	

}
