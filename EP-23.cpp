/*************************************************************************
    > File Name: EP-23.cpp
    > Author: liqiang
    > Mail: 1398690148@qq.com 
    > Created Time: 2019年08月19日 星期一 18时24分33秒
 ************************************************************************/

#include <iostream>
#include <cmath>
using namespace std;
#define MAX_N 28123

int prime[MAX_N + 5] = {0};
int cnt[MAX_N + 5] = {0};
int fac[MAX_N + 5] = {0};
int abundant[MAX_N + 5] = {0};

void init() {
	for (int i = 2; i <= MAX_N; i++) {
		if (!prime[i]) {
			prime[++prime[0]] = i;
			cnt[i] = 1;
			fac[i] = 1 + i;
		}
		for (int j = 1; j <= prime[0]; j++) {
			if (i * prime[j] > MAX_N) break;
			prime[i * prime[j]] = 1;
			if (i % prime[j] == 0) {
				cnt[i * prime[j]] = cnt[i] + 1;
				fac[i * prime[j]] = fac[i] / (pow(prime[j], cnt[i] + 1) - 1) * (pow(prime[j], cnt[i] + 2) - 1);
			} else {
				cnt[i * prime[j]] = 1;
				fac[i * prime[j]] = fac[i] * fac[prime[j]];
			}
			
		}
	}
	return ;
} 

int main() {
	int sum = 0;
	init();
	fac[0] = 0;
	fac[1] = 0;
	for (int i = 0; i < MAX_N; i++) {
		fac[i] -= i;
		if (fac[i] > i) fac[++fac[0]] = i;
	}
	for (int i = 1; i <= fac[0]; i++) {
		for (int j = i; j <= fac[0]; j++) {
			if (fac[i] + fac[j] > MAX_N) break;
			abundant[fac[i] + fac[j]] = 1;
		}		
	}
	for (int i = 0; i <= MAX_N; i++) {
		if (!abundant[i]) sum += i;
	}
	cout << sum << endl;
	return 0;
}
