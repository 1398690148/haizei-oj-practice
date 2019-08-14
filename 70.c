/*************************************************************************
    > File Name: 70.c
    > Author: liqiang
    > Mail: 1398690148@qq.com 
    > Created Time: 2019年08月14日 星期三 13时59分26秒
 ************************************************************************/

#include <stdio.h>
#define MAX_N 1000

int prime[MAX_N + 5] = {0};

int init() {
	for (int i = 2; i <= MAX_N; ++i) {
		if (!prime[i]) prime[++prime[0]] = i;
		for (int j = 1; j <= prime[0]; ++j) {
			if (i * prime[j] > MAX_N) break;
			prime[i * prime[j]] = i;
			if (i % prime[j] == 0) break;
		}
	}
}

int is_val(int x) {
	int flag = 0;
	for (int j = 1; j <= prime[0]; ++j) {
		if (j <= 3) {
			if (x % prime[j] == 0) flag = 1;
		} else {
			if (x % prime[j] == 0) return 0;
		}
	}

	return flag ? 1 : 0;	
}

int main() {
	init();
	int n;
	scanf("%d", &n);
	printf("1\n");
	for (int i = 1; i <= n; ++i) {
		if (is_val(i)) printf("%d\n", i);
	}	
	return 0;
}
