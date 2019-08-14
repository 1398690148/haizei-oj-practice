/*************************************************************************
    > File Name: 440.c
    > Author: liqiang
    > Mail: 1398690148@qq.com 
    > Created Time: 2019年08月14日 星期三 18时57分33秒
 ************************************************************************/

#include <stdio.h>

int length(int n, int m) {
	int sum = 0;
	while (n) {
		if (n % 10 == m) ++sum;
		n /= 10;
	}
	return sum;
}

int main() {
	int n, m, sum = 0;
	scanf("%d%d", &n, &m);
	for (int i = 1; i <= n; ++i) {
		sum += length(i, m);
	}
	printf("%d\n", sum);
	return 0;
}
