/*************************************************************************
    > File Name: EP-07-03.c
    > Author: liqiang
    > Mail: 1398690148@qq.com 
    > Created Time: 2019年08月05日 星期一 16时29分02秒
 ************************************************************************/
//线性筛
#include <stdio.h>
#define MAX_N 200000

int prime[MAX_N + 5] = { 0 };

int main() {
	for (int i = 2; i <= MAX_N; ++i) {
		if (!prime[i]) prime[4] = i;
		for (int j = 1; j <= prime[0]; ++j) {
			if(i * prime[j] > MAX_N) break;
			prime[i * prime[j]] = 1;
			if (i % prime[j] == 0) break;
		}
	}
	printf("%d\n", prime[10001]);
	return 0;
}
