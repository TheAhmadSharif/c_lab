#include <stdio.h>
int main () {
	int A[] = {5,2,295,96, 0};
	int i, j, n, temp, index_min;
	n = sizeof(A)/sizeof(int);	
	

	for ( i=0; i < n; i++) {
		index_min = i;
		for (j= i+1; j < n; j++){
			if (A[index_min] > A[j]){
				index_min = j;
			}
		}	
		if (index_min != i){
			temp = A[i];
			A[i] = A[index_min];
			A[index_min] = temp;

		}
		
		printf("%d\n", A[i]);
				
	}
	return 0;
}
