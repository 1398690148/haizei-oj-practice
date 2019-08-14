/*************************************************************************
    > File Name: EP-12-01.c
    > Author: liqiang
    > Mail: 1398690148@qq.com 
    > Created Time: 2019年08月14日 星期三 14时20分28秒
 ************************************************************************/

#include <stdio.h>
#include <inttypes.h>
#define MAX_N 100000

int prime[MAX_N + 5] = {0};
int f[MAX_N + 5] = {0};
int cnt[MAX_N + 5] = {0};

void init() {
	for (int i = 2; i < MAX_N; ++i) {
		if (!prime[i]) {
			prime[++prime[0]] = i;
			f[i] = 2;
			cnt[i] = 1;
		}
		for (int j = 1; j <= prime[0]; ++j) {
			if (i * prime[j] > MAX_N) break;
			prime[i * prime[j]] = 1;
			if (i % prime[j] == 0) {
				f[prime[j] * i] = f[i] / (cnt[i] + 1) * (cnt[i] + 2);	
				cnt[prime[j] * i] = cnt[i] + 1;
				break;
			} else {
				f[i * prime[j]] = f[prime[j]] * f[i];
				cnt[prime[j] * i] = 1;
			}
		}
	}
	return ;
}

int main() {
	init();
	int64_t f_max = 0, n = 1;
	while (1) {
		if (n & 1) {
			f_max = f[n] * f[(n + 1) >> 1];
		} else {
			f_max = f[n >> 1] * f[n + 1];
		}
		if (f_max > 500) break;
		n += 1;
	}
	printf("%"PRId64"\n", n * (n + 1) / 2);
	return 0;
}
