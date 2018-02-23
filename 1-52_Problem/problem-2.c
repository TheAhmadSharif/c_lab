#include <stdio.h>
#include <string.h>
int main () {	
	int n,i,j;
	char str[101];
	char lastCh;
	printf("Put a number \n");	
	scanf("%d", &n);
	
	for(i=0; i < n; i++) {
			printf("Put Something here ... \n");
			scanf("%s", str);
			j = strlen(str)-1;
			lastCh = str[j];

			switch (lastCh) {
				case '0':
				printf("even);
				break;

				case '2':
				printf("even);
				break;

				case '4':
				printf("even);
				break;
				
				case '6':
				printf("even);
				break;

				case '8':
				printf("even);
				break;

				default: 
				printf("odd);
			}
			
			
	}	
	return 0;
}
