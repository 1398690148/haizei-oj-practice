/*************************************************************************
    > File Name: EP-35.c
    > Author: liqiang
    > Mail: 1398690148@qq.com 
    > Created Time: 2019年08月09日 星期五 18时00分31秒
 ************************************************************************/

#include <stdio.h>
#include <math.h>
#define MAX_N 1000000

int	prime[MAX_N + 5] = {0};
int is_Prime[MAX_N + 5] = {0};

int get_len(int x) {
	return floor(log10(x)) + 1;
}

int is_val(int x) {
	int len = get_len(x);
	int tmp = x, h = (int)pow(10, len - 1);
	for (int i = 0; i < len; ++i) {
		tmp = tmp % 10 * h + tmp / 10;
		if (is_Prime[tmp]) return 0;
	}
	return 1;
}

int main() {
	for (int i = 2; i <= MAX_N; ++i) {
		if (!is_Prime[i]) prime[++prime[0]] = i;
		for (int j = 1; j <= prime[0]; ++j) {
			if (i * prime[j] > MAX_N) break;
			is_Prime[i * prime[j]] = 1;
			if (i % prime[j] == 0) break;
		}
	}
	int sum = 0;
	for (int i = 2; i < MAX_N; ++i) {
		if (!is_val(i)) continue;
		sum += 1;
	}	
	printf("%d\n",sum);
	return 0;
}
