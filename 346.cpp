/*************************************************************************
    > File Name: 346.cpp
    > Author: liqiang
    > Mail: 1398690148@qq.com 
    > Created Time: 2019年08月14日 星期三 20时43分26秒X_N 50
*************************************************************************/
#include <iostream>
using namespace std;
#define MAX_N 50

int val[MAX_N + 5][MAX_N + 5];

int main() {
	int n, m;
	int val1 = 0, val2 = 0;
	cin >> n >> m;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; j++) {
			cin >> val[i][j];
		}
	}
	for (int i = n - 2; i >= 0; --i) {
		for (int j = m - 2; j >= 0; --j) {
			val1 += max(val[i + 1][j], val[i][j + 1]);
			cout << val1 << endl;
		}
	}
	cout << val1 << endl;
	return 0;
}
