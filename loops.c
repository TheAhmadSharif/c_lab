#include <stdio.h>
int main () {
    
	int i;
	for (i=0; i < 5; i++) { 
		printf("i = %d\n", i);
	}	
	
	printf("--------------------------------------------------\n");
	int x;
	x = 0;
	while (x<5) {
		printf("x = %d\n", x);
		x++;
	}

	printf("--------------------------------------------------\n");
	int y;	
	y = 1; 
	do {
	y = y + 1;		
	printf ("%d\n", y);
	}while ( y < 20);

	return 0;
}



