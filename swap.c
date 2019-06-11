#include <stdio.h>
int main () {
	
	int temp, n1, n2;
		n1 = 4;
		n2 = 6;
		
		temp = n1;
		
		n1 = n2;
		n2 = temp;

		printf("n1 = %d; n2 = %d;\n", n1,n2);	
		
	
	return 0;
}
