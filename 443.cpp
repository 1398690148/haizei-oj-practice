/*************************************************************************
    > File Name: 443.cpp
    > Author: liqiang
    > Mail: 1398690148@qq.com 
    > Created Time: 2019年08月14日 星期三 19时50分16秒
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
	int l, m;
	int a, b, sum = 0;
	int A[10005];
	cin >> l >> m;
	for (int i = 1; i <= l; ++i) {
		A[i] = 1;
	}
	while (m--) {
		cin >> a >> b;
		for (int i = a; i <= b; ++i) {
			A[i] = 0;
		}
	}
	for (int i = 0; i <= l; ++i) {
		if (A[i]) ++sum;
	}
	cout << sum << endl;
	return 0;
}
