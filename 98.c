#include <stdio.h>

#define PI 3.14
int main() {
	double r, h;
	scanf("%lf%lf", &r, &h);
	printf("%.2f\n", r * r * PI);
	printf("%.2f\n", PI * r * r * h);

	return 0;
}
