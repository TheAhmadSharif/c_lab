#include <stdio.h>
int main () {
	int a, b;	
	a = 10;
	for (i = 2; i < 10; i++)
	{
		if (a%i==0)
		{
			printf("%d is a Prime Number\n");
			break;
		}
		
		else {
				printf("%d is not a Prime Number\n");
			}
	}
		
	
	return 0;
}
