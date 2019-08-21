/*************************************************************************
    > File Name: EP-27.cpp
    > Author: liqiang
    > Mail: 1398690148@qq.com 
    > Created Time: 2019年08月19日 星期一 19时04分30秒
 ************************************************************************/

#include <iostream>
using namespace std;
#define MAX_N 10000

int prime[MAX_N + 5] = {0};
int is_prime[MAX_N + 5] = {0};

void init() {
	for (int i = 2; i <= MAX_N; i++) {
		if (!is_prime[i]) prime[++prime[0]] = i;
		for (int j = 1; j <= prime[0]; j++) {
			if (i * prime[j] > MAX_N) break;
			is_prime[i * prime[j]] = 1;
			if (i % prime[j] == 0) break;
		}
	}
	return ;
}

int quadratic(int n, int a, int b) {
	return n * n + a * n + b;
}

int main() {
	int maxa, maxb, max = 0;
	for (int a = -1000; a < 1000; a++) {
		for (int b = 1; b < 1000; b++) {
			int maxn = 0;
			for (int i = 0; i < MAX_N; i++) {
				if (quadratic(i, a, b) < 0 || quadratic(i, a, b) > MAX_N) break;
				if (is_prime[quadratic(i, a, b)]) break;
				maxn++;
			}
			if (maxn > max) {
				max = maxn;
				maxa = a;
				maxb = b;
			}
		}
	}	
	cout << maxa * maxb << endl;
	return 0;
}
