#include <stdio.h>
int main () {
	int A[] = {5,2,295,96};
	int i, j, n, temp, index_min;
	n = sizeof(A)/sizeof(int);	
	

	for ( i=0; i < n; i++) {
		for (j= i+1; j < n; j++){
			
			if (A[j] > A[i]){
				A[j] = A[i];	
			
			}
		}	
		
		printf("%d\n", A[i]);		
	}
	
	
	return 0;
}
