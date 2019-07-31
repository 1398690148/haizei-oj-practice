/*************************************************************************
    > File Name: 163.c
    > Author: liqiang
    > Mail: 1398690148@qq.com 
    > Created Time: 2019年07月27日 星期六 18时14分43秒
 ************************************************************************/

#include <stdio.h>
#include <math.h>
#include <inttypes.h>
int main() {
	double a, b;
	double angle;
	scanf("%lf%lf%lf", &a, &b, &angle);
	double c =  sqrt(a * a + b * b - 2 * a * b * cos(angle * acos(-1) / 180.0));
	printf("%.6f", c);
	return 0;
}
