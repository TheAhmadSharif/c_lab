#include <stdio.h>
#include <math.h>
int main () {
	double r, area;
	float pi;
	pi = acos(-1);
	printf("Pi Value = %lf\n", pi);
	printf("Write the radius of circle to get the area of a circle.\n");
	scanf("%lf", &r);
	area = pi * r * r;
	printf("Area = %lf * %.4f = %.4f\n", pi, r, area);
	return 0;
}