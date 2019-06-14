#include <stdio.h>
int main () {
	int n1, n2, i, gcd;
	printf("Put two positive integer: \n");
	scanf("%d %d", &n1,&n2);

	
	for (i = 1; i <= n1 && i<=n2; i++)
	{	
		if (n1%i==0 && n2%i==0)
		{	
			
			gcd = i;
		}

	}

	printf("%d is the HCF of %d and %d \n", gcd, n1, n2);
	
	return 0;
}
