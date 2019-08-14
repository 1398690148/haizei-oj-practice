/*************************************************************************
    > File Name: 453.cpp
    > Author: liqiang
    > Mail: 1398690148@qq.com 
    > Created Time: 2019年08月14日 星期三 17时57分55秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int A[10005];
	int n, k, number;
	cin >> n >> k;
	for (int i = 0; i < n; ++i) 
		cin >> A[i];
	sort(A, A + n);
	for (int i = 1; i <= n; i++) {
		if (A[i] == A[i - 1]) continue;
		number = A[i];
		--k;
		if (k < 2) break;
	}
	cout << number;
	return 0;
}
