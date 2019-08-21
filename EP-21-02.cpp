/*************************************************************************
    > File Name: EP-21-02.cpp
    > Author: liqiang
    > Mail: 1398690148@qq.com 
    > Created Time: 2019年08月19日 星期一 14时56分36秒
 ************************************************************************/

#include <iostream>
#include <cmath>
using namespace std;

#define MAX_N 1000000

int prime[MAX_N + 5] = {0};
int f[MAX_N + 5] = {0};
int cnt[MAX_N + 5] = {0};
int q[MAX_N + 5] = {0};

int power(int x, int j) {
	int ans = 1;
	while (j) {
		if (j & 1) ans = ans * x;
		x = x * x;
		j >>= 1;
	}
	return ans;
}

void init() {
	for (int i = 2; i <= MAX_N; i++) {
		if (!prime[i]) {
			prime[++prime[0]] = i;
			f[i] = 2;
			cnt[i] = 1;
			q[i] = 1 + i;
		}
		for (int j = 1; j <= prime[0]; j++) {
			if (prime[j] * i > MAX_N) break;
			prime[prime[j] * i] = 1;
			if (i % prime[j] == 0) {
				f[i * prime[j]] = f[i] / (cnt[i] + 1) * (cnt[i] + 2);
				q[i * prime[j]] = q[i] / (pow(prime[j], cnt[i] + 1) - 1) * (pow(prime[j], cnt[i] + 2) - 1); 
				cnt[prime[j] * i] = cnt[i] + 1;
				break;
			} else {
				f[i * prime[j]] = f[i] * f[prime[j]];
				cnt[i * prime[j]] = 1;
				q[i * prime[j]] = q[i] * q[prime[j]];
			}
		}
	}
	return ;
}

int main() {
	int sum = 0;
	init();
	for (int i = 2; i <= MAX_N; i++) {
		q[i] -= i;
	}
	for (int i = 2; i <= MAX_N; i++) {
		if (q[i] < MAX_N && i == q[q[i]] && i != q[i]) sum += i;
	}
	cout << sum << endl;
	return 0;
}
