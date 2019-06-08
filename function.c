#include<stdio.h>

int max(int num1, int num2) {
		int result;
		if (num1 > num2) {
			result = num1;	
		}
	
		else {
				result = num2;
			
			}
	return result;

}

int main () {
	int a = 10;
	int b = 60;
	int ret;

	
	
	ret = max (a,b);
	
	printf("Max value is: %d\n", ret);
	return 1;
}



