/*************************************************************************
    > File Name: 164.c
    > Author: liqiang
    > Mail: 1398690148@qq.com 
    > Created Time: 2019年07月27日 星期六 18时51分24秒
 ************************************************************************/

#include <stdio.h>
#include <math.h>

int main() {
	double n, m;
	scanf("%lf%lf", &n, &m);
	double c = n / m;
	printf("%g", ceil(c));
	return 0;
}
