/*************************************************************************
    > File Name: 226.c
    > Author: liqiang
    > Mail: 1398690148@qq.com 
    > Created Time: 2019年08月05日 星期一 20时42分54秒
 ************************************************************************/
#include <stdio.h>
#include <inttypes.h>

int main() {
	int64_t a, b, p;
	scanf("%"PRId64"%"PRId64"%"PRId64, &a, &b, &p);
	int64_t ans = 1 % p;
	while (b) {
		if (b & 1) ans = ans * a % p;
		a = a * a % p;
		b /= 2;
	}
	printf("%"PRId64"\n", ans);
	return 0;
}

