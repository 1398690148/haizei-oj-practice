/*************************************************************************
    > File Name: 466.c
    > Author: liqiang
    > Mail: 1398690148@qq.com 
    > Created Time: 2019年08月12日 星期一 20时31分53秒
 ************************************************************************/

#include <stdio.h>

int is_val(int x) {
	int pre_x = x;
	int sum = 0;
	while (x) {
		sum = sum * 10 + x % 10;
		x /= 10;
	}
	return pre_x == sum;
}

int main() {
	int n, ans = 0;
	scanf("%d", &n);
	for (int i = 1; i <= n; ++i) {
		if (is_val(i)) ++ans;
	}
	printf("%d\n", ans);
}
