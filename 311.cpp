/*************************************************************************
    > File Name: 311.cpp
    > Author: liqiang
    > Mail: 1398690148@qq.com 
    > Created Time: 2019年08月19日 星期一 22时32分49秒
 ************************************************************************/

#include <iostream>
using namespace std;
#define MAX_N 1000000

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

int gcd(int a, int b) {
	return (b ? gcd(b, a % b) : a);
}

int main() {
	int n, sum = 0;
	init();
	is_prime[0] = is_prime[1] = 1;
	cin >> n;
	for (int i = 2; i <= n; i++) {
		for (int j = 2; j <= n; j++) {
			int x = gcd(i, j);
			if (!is_prime[x]) sum++;
		}
	}
	cout << sum << endl;
}
