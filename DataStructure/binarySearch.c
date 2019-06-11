#include <stdio.h>

int main () {
	int left, right, arrayLength, x, result, midLength;
	int a [] = {0,2,6,8,11,16};
	x = 20;
	arrayLength = sizeof(a)/sizeof(int);
	left = 0;
	right = arrayLength -1;
	

	int binary_search (int x) {
		

		while (right >= left) {
			midLength = (left + right)/2;

			if (a[midLength] == x)	{
				return midLength;
			}	
		
			if (a[midLength] > x) {
				right = midLength - 1;
			}
		
			if (a[midLength] < x) {
				left = midLength + 1;
			}
	
		}

		return -1;	
		
	}
	
	result = binary_search(x);
	printf("position of x: %d\n", result);
	
	
	
	return 0;
}
