/*************************************************************************
    > File Name: 465.c
    > Author: liqiang
    > Mail: 1398690148@qq.com 
    > Created Time: 2019年08月12日 星期一 20时35分20秒
 ************************************************************************/

#include <stdio.h>
#include <inttypes.h>
#include <math.h>

int main() {
	int64_t n, k;
	scanf("%"PRId64"%"PRId64, &n, &k);
	int len = floor(log10(n)) + 1;
	if (len < k) {
		printf("0\n");
		return 0;
	}
	while (k > 1) {
		n /= 10;
		--k;
	}
	printf("%"PRId64"\n", n % 10);
	return 0;
}
