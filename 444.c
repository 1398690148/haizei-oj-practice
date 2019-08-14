/*************************************************************************
    > File Name: 444.c
    > Author: liqiang
    > Mail: 1398690148@qq.com 
    > Created Time: 2019年08月14日 星期三 17时51分22秒
 ************************************************************************/

#include <stdio.h>

int main() {
	int A[105];
	int n, m;
	scanf("%d", &n);
	for (int i = 1; i <= n; ++i)
		scanf("%d", &A[i]);
	scanf("%d", &m);
	int tmp = A[n];
	for (int i = n; i >= m; --i) {
		A[i] = A[i - 1];
	}
	A[m] = tmp;
	for (int i = 1; i <= n; ++i) {
		i != 1 && printf(" ");
		printf("%d", A[i]);
	}
	return 0;
}
