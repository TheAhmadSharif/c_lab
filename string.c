#include <stdio.h>
#include <string.h>
#define PI 3.1416
int main () {
	float area, radius;
	printf("Please insert radius number of a cricle \n");
	scanf("%f", &radius);
	area = PI * radius * radius;
	printf("Area of this circle is A = %f\n", area);; 




	char abul[] = {'a', 'b', '\0'};
	char *c = "Ahmad";
	int length;
	length = strlen(abul);
	
	printf("%s\n", c);
	printf("%p\n", &c);
	char name[20];
	printf("Enter your name\n");
	scanf("%s", name);
	printf("Name is %s\n", name);

	return 0;	
}
