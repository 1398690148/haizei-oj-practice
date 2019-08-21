/*************************************************************************
    > File Name: EP-47.cpp
    > Author: liqiang
    > Mail: 1398690148@qq.com 
    > Created Time: 2019年08月16日 星期五 19时31分03秒
 ************************************************************************/

#include <iostream>
using namespace std;

#define MAX_N 10000

int prime[MAX_N + 5] = {0};

void init() {
	for (int i = 2; i <= MAX_N; i++) {
		if (!prime[i]) prime[++prime[0]] = i;
		for (int j = 1; j <= prime[0]; j++) {
			if (i * prime[j] > MAX_N) break;
			prime[i * prime[j]] = 1;
			if (i % prime[j] == 0) break;
		}
	}
	return ;
}

bool is_val(int n) {
	int ans = 0, flag = 0, pre_n = n;
	while (1) {
		for (int i = 1; i <= prime[0] && prime[i] < pre_n; i++) {
			while (n % prime[i] == 0) {
				n /= prime[i];
				flag = 1;
			}
			flag && ans++;
			flag = 0;
		}
		if (ans == 4) return true;
		return false;
	}
}
int main() {
	init();
	int n = 646, flag = 1;
	while (1) {
		for (int i = n; i < n + 4; i++) {
			if (!is_val(i)) {
				flag = 0;
				break;
			}
		}
		if (flag) {
			cout << n << endl;
			break;
		}
		flag = 1;
		n++;
	}
	
}
