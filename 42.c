/*************************************************************************
    > File Name: 42.c
    > Author: liqiang
    > Mail: 1398690148@qq.com 
    > Created Time: 2019年08月12日 星期一 20时55分27秒
 ************************************************************************/

#include <stdio.h>
int num[10000] = {0};
int w[20];
int main() {
	int m, n;
	scanf("%d%d", &m, &n);
	for (int i = 0; i < m; ++i)
		scanf("%d", &w[i]);
	num[0] = 1;
	for (int i = 0; i < m; ++i) {
		for (int j = w[i]; j <= n; ++j) {
			num[j] += num[j - w[i]];
			num[j] %= 9973;
		}
	}
	printf("%d\n", num[n]);
		
	return 0;
}
