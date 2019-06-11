#include<stdio.h>
int main () {
	int A = [5,2,6,3,4];
	int n;
	int i, j, index_min, temp;
	for(i=0; i < n-1; i++ ) {
		index_min = i;
			for(j= i + 1; j < n;  j++){
				if (A[j] < A[index_min])
					index_min = j;
					printd("%d", j);
				
			}		
		
	
	}
	

	return 0;
}






// 5,2,6,3,4
