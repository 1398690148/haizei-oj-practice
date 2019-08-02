/*************************************************************************
    > File Name: 182.c
    > Author: liqiang
    > Mail: 1398690148@163.com 
    > Created Time: 2019年07月31日 星期三 14时39分36秒
 ************************************************************************/

#include <stdio.h>
#include <inttypes.h>

int main() {
	int64_t n, a, max = INT64_MIN;
	scanf("%"PRId64, &n);
	while (n--) {
		scanf("%"PRId64, &a);
		if(a > max) max = a;
	}
	printf("%" PRId64"\n", max);
	return 0;
}
