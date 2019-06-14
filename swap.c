#include <stdio.h>
int main () {
	int a, b, temp;
	a = 1;
	b = 2;
	temp = a = 1;
	a = b;
	b = temp;
	
	printf("a: = %d\nb: = %d\n", a, b);	
	
	
	return 0;
}
