#include <stdio.h>
int factorial (int i) {
	
	if (i <= 1) {
		return 1;
	}
	
	else {
		return i * factorial (i-1);
	}

}

int main () {
	int i = 5;
	printf("%d\n", factorial(i));
	return 0;
}
