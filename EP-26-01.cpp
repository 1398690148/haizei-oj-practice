/*************************************************************************
    > File Name: EP-26-01.cpp
    > Author: liqiang
    > Mail: 1398690148@qq.com 
    > Created Time: 2019年08月16日 星期五 15时55分48秒
 ************************************************************************/

#include <iostream>
#include <cstring>
using namespace std;

#define MAX_N 1000

int keep[MAX_N + 5];

int  get_len(int x) {
	memset(keep, 0, sizeof(keep));
	int r = 1, t = 1;
	keep[1] = 1;
	while (r) {
		r *= 10;
		r %= x;
		t += 1;
		if (keep[r]) return t - keep[r];
		keep[r] = t;
	}
	return 0;
}

int main() {
	int d = 0, len = 0;
	for (int i = 1; i < MAX_N; i++) {
		int tmp = get_len(i);
		if (tmp > len) {
			len = tmp;
			d = i;
		}
	}
	cout << d << " "<< len << endl;
	return 0;
}
