/*************************************************************************
    > File Name: 79.c
    > Author: liqiang
    > Mail: 1398690148@qq.com 
    > Created Time: 2019年08月14日 星期三 13时52分02秒
 ************************************************************************/

#include <stdio.h>
#define MAX_N 10000000

int prime[MAX_N + 5] = {0};
int is_Prime[MAX_N + 5] = {0};
int init() {
	for (int i = 2; i < MAX_N; ++i) {
		if (!prime[i]) prime[++prime[0]] = i;
		for (int j = 1; j <= prime[0]; ++j) {
			if (i * prime[j] > MAX_N) break;
			is_Prime[i * prime[j]] = 1;
			if (i % prime[j] == 0) break;
		}
	}
}

int main() {
	init();
	int a, b;
	is_Prime[0] = is_Prime[1] = 1;
	scanf("%d%d", &a, &b);
	for (int i = a; i < b; ++i) {
		if (is_Prime[i]) continue;
		printf("%d\n", i);
	}
	return 0;
}
