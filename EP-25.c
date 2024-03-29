/*************************************************************************
    > File Name: EP-25.c
    > Author: liqiang
    > Mail: 1398690148@qq.com 
    > Created Time: 2019年08月07日 星期三 18时49分36秒
 ************************************************************************/

#include <stdio.h>
#include <string.h>

int fib[3][1005] = {{0, 0}, {1, 1}, {1, 1}};

int main() {
	int n = 2;
	while (fib[n % 3][0] < 1000) {
		n += 1;
		int *a = fib[n % 3], *b = fib[(n - 1) % 3], *c = fib[(n - 2) % 3];
		for (int i = 1; i <= b[0]; ++i) {
			a[i] = (b[i] + c[i]);
		}
		a[0] = b[0];
		for (int i = 1; i <= a[0]; ++i) {
			if (a[i] < 10) continue;
			a[i + 1] += a[i] / 10;
			a[i] %= 10;
			a[0] += (i == a[0]);
		}
	}
	printf("%d\n", n);
	return 0;
}
