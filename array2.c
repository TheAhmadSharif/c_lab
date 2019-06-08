#include <stdio.h>
int main () {
	
	unsigned int n[] = {1,2,3,4,5,6};
	int i;
	int length = sizeof(n)/sizeof(int);

	for(i=0; i< length; i++) {
		 printf("%d\n", n[i]); 
	}



	return 0;
}
