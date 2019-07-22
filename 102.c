#include <stdio.h>

int main() {
	double a, b, c, t;
	double x = 0;
	scanf("%lf%lf%lf%lf", &a, &b, &c, &t);
	double ax = (1 / a) * t;
	double bx = (1 / b) * t;
	double sum = 1 - ax - bx;
	double cx = 1 / a + 1 / b - 1 / c;
	x = sum / cx + t;
	printf("%.2f",x); 

}
