#include <stdio.h>
#include <string.h>
int main () {
	char matchword[5] = "o";
	char keyword[100] = "Hello woooooooooooooooord";
	int i = 0;
	int count = 0; 
	
	while ( i < strlen(keyword)) {
		if (matchword[0] == keyword[i]) {
			count = count + 1;		
		}
		i = i + 1;
	}	
	printf("%d\n", count);
	
	return 0;
}
