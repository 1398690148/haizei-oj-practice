/*************************************************************************
    > File Name: EP-18-03.cpp
    > Author: liqiang
    > Mail: 1398690148@qq.com 
    > Created Time: 2019年08月14日 星期三 19时27分07秒
 ************************************************************************/

#include <iostream>
using namespace std;
#define MAX_N 1000

int val[MAX_N + 5][MAX_N + 5];

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j <= i; ++j) {
			cin >> val[i][j];
		}
	}
	for (int i = n - 2; i >= 0; --i) {
		for (int j = 0; j <= i; ++j) {
			val[i][j] += max(val[i + 1][j], val[i + 1][j + 1]);
		}
	}
	cout << val[0][0] << endl;
	return 0;
}
