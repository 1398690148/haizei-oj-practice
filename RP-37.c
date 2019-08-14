/*************************************************************************
    > File Name: RP-37.c
    > Author: liqiang
    > Mail: 1398690148@qq.com 
    > Created Time: 2019年08月09日 星期五 18时42分14秒
 ************************************************************************/

#include <stdio.h>
#include <math.h>
#define MAX_N 1000000

int prime[MAX_N + 5] = {0};
int is_Prime[MAX_N + 5] = {0};
void init() {
	for (int i = 2; i < MAX_N; ++i) {
		if (!prime[i]) prime[++prime[0]] = i;
		for (int j = 1; j <= prime[0]; ++j) {
			if (i * prime[j] > MAX_N) break;
			is_Prime[i * prime[j]] = 1;
			if (i % prime[j] == 0) break;
		}
	}
}

int is_val1(int x) {
	while (x) {
		if (is_Prime[x]) return 0;
		x /= 10;
	}
	return 1;
}

int is_val2(int x) {
	while (x) {
		if (is_Prime[x]) return 0;
		int len = floor(log10(x)) + 1;
		int tmp = (int)pow(10, len - 1);
		x %= tmp;
	}
	return 1;
	
}
int main() {
	int sum = 0;
	init();
	is_Prime[1] = 1;
	for (int i = 12; i < MAX_N; ++i) {
		if (is_val1(i) && is_val2(i)) {
			sum += i;
		}
	}
	printf("%d\n", sum);	
	
	return 0;
}
