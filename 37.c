/*************************************************************************
    > File Name: 37.c
    > Author: liqiang
    > Mail: 1398690148@qq.com 
    > Created Time: 2019年08月12日 星期一 15时15分53秒
 ************************************************************************/

#include <stdio.h>

int is_val(int x) {
	if (x % 2 == 0 && x % 5 == 0) return 0;
	return 1;
}

int main() {
	int m, n, ans = 0;
	scanf("%d%d", &m, &n);
	for (int i = m; i <= n; ++i) {
		if (is_val(i)) ans += 1;
	}
	printf("%d\n", ans);	
	return 0;
}
