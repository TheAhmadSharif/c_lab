#include<stdio.h>

int sum(int n);
int main () {
	int n = 6;	
	int result;
	result = sum (n);
	printf("%d\n", result);
	return 0;
}

int sum (int n) {

	if (n > -1) {
		return n + sum (n-1);
	}

	else {
		return 0;
	}

	
}
