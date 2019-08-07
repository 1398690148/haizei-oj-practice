/*************************************************************************
    > File Name: 227.c
    > Author: liqiang
    > Mail: 1398690148@qq.com 
    > Created Time: 2019年08月07日 星期三 13时49分32秒
 ************************************************************************/

#include <stdio.h>
#include <inttypes.h>

int main() {
	int64_t a, b, p;
	scanf("%"PRId64"%"PRId64"%"PRId64, &a, &b, &p);
	int64_t ans = 0;
	while (b) {
		if (b & 1) ans = (a + ans) % p;
		a = (a + a) % p;
		b >>= 1;
	}
	printf("%"PRId64"\n", ans);
	return 0;	
}
