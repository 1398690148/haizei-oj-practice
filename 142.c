/*************************************************************************
    > File Name: 142.c
    > Author: liqiang
    > Mail: 1398690148@qq.com 
    > Created Time: 2019年08月05日 星期一 19时33分40秒
 ************************************************************************/

#include <stdio.h>
#include <inttypes.h>
#define MAX_N 100000

int64_t prime[MAX_N + 5] = {0};
int is_val(int i) {
	int pre_i = i,sum = 0;
	while (i) {
		sum = sum * 10 + i % 10;
		i /= 10;
	}
	return sum == pre_i;
}

int is_prime(int n) {
	for (int i = 2; i * i <= n; ++i) {
		if (n % i == 0) return 0;
	}
	return 1;
}

int main() {
	int flag = 0;
	int a, b;
	scanf("%d%d", &a, &b);
	for (int64_t i = 2; i <= b; ++i) {
		if (!prime[i]) prime[++prime[0]] = i;
		for (int64_t j = 1; j <= prime[0]; ++j) {
			if (i * prime[j] > b) break;
			prime[i * prime[j]] = 1;
			if (i % prime[j] == 0) break;
		}
	}
	for (int i = a; i <= b; ++i) {
		if (is_prime(i) && is_val(i)) {
			flag && printf(" ");
			printf("%d", i);
			flag = 1;
		}
	}
	return 0;
}
