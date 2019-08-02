/*************************************************************************
    > File Name: EP-04-1.c
    > Author: liqiang
    > Mail: 1398690148@163.com 
    > Created Time: 2019年08月02日 星期五 14时22分14秒
 ************************************************************************/

#include <stdio.h>

int is_val(int x, int base) {
	int temp = x, sum = 0;
	while (x) {
		sum = sum * base + x % base;
		x /= base;
	}
	return temp == sum;
}

int main() {
	int ans = 10000;
	for (int a = 100; a < 1000; a++) {
		for (int b = ans / a + 1; b <= a; b++) {
			if (is_val(a * b, 10) && ans < a * b) ans = a * b;
		}
	}
	printf("%d", ans);
	return 0;
}
