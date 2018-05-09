#include <stdio.h>
#include <string.h>

int main () {
	char s[20] = "Hello World";
	int i, length;
	length = strlen(s);


	for(i=length; i >= 0; i=i-1) {
			printf("%c", s[i]);
	}

	printf("\n");


	return 0;
}
