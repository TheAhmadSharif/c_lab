#include <stdio.h>
int main () {
	int n, i;	
	printf("Insert a positive number to check whether the number is Prime or not\n");
	scanf("%d", &n);

		for (i = 2; i < n; i += 1)
		{
			if (n%i == 0)
			{
				printf("%d is not a Prime Number\n", n);
				break;
			}
			else {
					printf("%d is a Prime Number\n", n);
					break;
				}
		}
		if (n == 1)
		{
			printf("%d is not Primer number\n", n);
		}
	return 0;
} 
