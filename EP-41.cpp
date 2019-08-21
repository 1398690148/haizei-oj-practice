/*************************************************************************
    > File Name: EP-41.cpp
    > Author: liqiang
    > Mail: 1398690148@qq.com 
    > Created Time: 2019年08月19日 星期一 16时52分25秒
 ************************************************************************/

#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;
#define MAX_N 98765432

int num[10] = {0};

int is_Prime(int x) {
	for (int i = 2; i * i <= x; i++) {
		if (x % i == 0) return 0;
	}
	return 1;
}

int is_Pandigital(int x) {
	memset(num, 0, sizeof(num));
	int pre_x = x;
	while (x) {
		int a = x % 10;
		if (a == 0) return 0;
		if (num[a] > 1) return 0;
		num[a] += 1;
		x /= 10;
	}
	for (int i = 1; i <= floor(log10(pre_x)) + 1; i++) {
		if (num[i] == 1) continue;
		return 0;
	}
	return 1;
}

int main() {
	int max = 0;
	for (int i = MAX_N; i > 0; i--) {
		if (is_Prime(i) && is_Pandigital(i)) {
			max = i;
			cout << max << endl;
			break;
		}
	}
	return 0;
}
