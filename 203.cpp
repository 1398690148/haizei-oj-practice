/*************************************************************************
    > File Name: 203.cpp
    > Author: liqiang
    > Mail: 1398690148@163.com 
    > Created Time: 2019年08月05日 星期一 13时51分42秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
	int n, m;
	int A[10][10];
	int B[100];
	int s = 0;
	int max = 0;
	double sum = 0;
	int num = 0;
	cin >> m >> n;
	for (int i = 0; i < m; ++i)
		for (int j = 0; j < n; ++j) {
			cin >> A[i][j];
			B[s++] = A[i][j];
			sum += A[i][j];
		}
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			if(max < A[j][i]){
				 max = A[j][i];
			}
		}
		cout << max << endl;
		max = 0;
	}
	sort(B, B + s);
	int ave = round(1.0 * sum / (n * m));
	for (int i = s - 1; i >= 0; --i) {
		i != s - 1 && cout << " ";
		cout << B[i];
		if (B[i] >= ave) {
			++num;
		}
	}
	printf("\n%d\n%d", ave, num);
	return 0;
}
