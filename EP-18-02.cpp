/*************************************************************************
    > File Name: EP-18-02.cpp
    > Author: liqiang
    > Mail: 1398690148@qq.com 
    > Created Time: 2019年08月14日 星期三 19时15分05秒
 ************************************************************************/

#include <iostream>
using namespace std;
#define MAX_N 20

int val[MAX_N + 5][MAX_N + 5];

int main() {
	for (int i = 0; i < MAX_N; ++i) {
		for (int j = 0; j <= i; ++j) {
			cin >> val[i][j];
		}
	}
	for (int i = MAX_N - 2; i >= 0; --i) {
		for (int j = 0; j <= i; ++j)
			val[i][j] += max(val[i + 1][j], val[i + 1][j + 1]);
	}
	cout << val[0][0] << endl;
	return 0;
}
