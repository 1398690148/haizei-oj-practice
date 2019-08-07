/*************************************************************************
    > File Name: EP-10.c
    > Author: liqiang
    > Mail: 1398690148@qq.com 
    > Created Time: 2019年08月05日 星期一 19时04分43秒
 ************************************************************************/

#include <stdio.h>
#include <inttypes.h>
#define MAX_N 2000000

int prime[MAX_N + 5] = {0};
int main() {
	int64_t sum = 0;
	for (int i = 2; i <= MAX_N; ++i) {
		if (!prime[i]) prime[++prime[0]] = i,sum += i;
		for (int j = 1; j <= prime[0]; ++j) {
			if (i * prime[j] > MAX_N) break;
			prime[i * prime[j]] = 1;
			if (i % prime[j] == 0) break;
		}
	}
	printf("%"PRId64"\n", sum);
}
