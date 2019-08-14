/*************************************************************************
    > File Name: 445.c
    > Author: liqiang
    > Mail: 1398690148@qq.com 
    > Created Time: 2019年08月12日 星期一 20时48分17秒
 ************************************************************************/

#include <stdio.h>

int is_val(int x)
int main() {
	int n, ans = 0;
	int A[1000] = {0};
	scanf("%d", &n);
	for (int i = 0; i < n; ++i) {
		scanf("%d", &A[i]);
	}
	for (int i = 0; i < n; ++i) {
		if (is_val(i)) ++ans;
	}
	printf("%d", ans);
	return 0;
}
