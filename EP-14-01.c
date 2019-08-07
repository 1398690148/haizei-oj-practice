/*************************************************************************
    > File Name: EP-14-01.c
    > Author: liqiang
    > Mail: 1398690148@qq.com 
    > Created Time: 2019年08月07日 星期三 14时52分12秒
 ************************************************************************/

#include <stdio.h>
#define MAX_N 1000000

long long get_len(long long x) {
	if (x == 1) return 1;
	if (x < 0) {
		printf("ERROR\n");
	}
	if (x & 1) return get_len(3 * x + 1) + 1;
	else return get_len(x >> 1) + 1;
}
int main() {
	int ans = 0, num = 0;
	for (int i = 1; i < MAX_N; ++i) {
		int l = get_len(i);
		if (l > ans) ans = l, num = i;
	}
	printf("%d\n", num);
	return 0;
}
