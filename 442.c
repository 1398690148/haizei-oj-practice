/*************************************************************************
    > File Name: 442.c
    > Author: liqiang
    > Mail: 1398690148@qq.com 
    > Created Time: 2019年08月14日 星期三 16时48分08秒
 ************************************************************************/

#include <stdio.h>

int walk(int n) {
	if (n < 0) return 0;
	if (n == 0 || n == 1) return 1;
	return walk(n - 1) + walk(n - 2);
}
int main() {
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; ++i) {
		i != 1 && printf(" ");
		printf("%d", walk(i));
	}
	return 0;
}
