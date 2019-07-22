#include <stdio.h>

#define PI 3.14
int main() {
	double r;
	scanf("%lf", &r);
	printf("%.2f\n", 2 * PI * r);
	printf("%.2f\n", PI * r *r); 

	return 0;
}
