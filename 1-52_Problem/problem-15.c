#include <stdio.h>
#include <string.h>

int main () {
	char s[1000] = "hello";
	int i;
	
	i = 0;
	while(i < strlen(s) ) {
		printf("%c\n", s[i]);
		i=i+1;	
	}
	
	
	return 0;
}
