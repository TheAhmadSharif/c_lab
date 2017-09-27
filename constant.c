#include <stdio.h>
#define PI 3.1416
int main () {
	const char NL = '\n';
	float area; 
	int radius;
	printf("Please enter a radius number to get the area of the radius\n");
	scanf("%d", &radius);
	area = PI * radius * radius;
	printf("Area of the circle is = %f %c", area, NL);
	return 0;
}
