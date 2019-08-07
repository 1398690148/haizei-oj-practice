/*************************************************************************
    > File Name: 200.c
    > Author: liqiang
    > Mail: 1398690148@163.com 
    > Created Time: 2019年08月02日 星期五 20时08分52秒
 ************************************************************************/

#include <stdio.h>

int main() {
	int n, a = 3, b = 4;
	double sum = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		b = a + b;
		a = b - a;
		double aa = a;
		double bb = b;
		sum += aa / bb;
	}
	printf("%d/%d\n%.2f\n", a, b, sum);
	return 0;
}
