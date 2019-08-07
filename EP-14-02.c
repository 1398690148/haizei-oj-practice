/*************************************************************************
    > File Name: EP-14-02.c
    > Author: liqiang
    > Mail: 1398690148@qq.com 
    > Created Time: 2019年08月07日 星期三 15时05分14秒
 ************************************************************************/

#include <stdio.h>
#define MAX_N 1000000
#define KEEP_MAX_N_LEN 1000000

int keep[KEEP_MAX_N_LEN] = {0};

long long get_len(long long x) {
	if (x == 1) return 1;
	if (x < KEEP_MAX_N_LEN && keep[x]) return keep[x];
int ret;
	if (x & 1) ret = get_len(x * 3 + 1) + 1;
	else ret = get_len(x >> 1) + 1;
	if (x < KEEP_MAX_N_LEN) keep[x] = ret;
	return ret;
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
