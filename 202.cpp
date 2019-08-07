/*************************************************************************
    > File Name: 202.cpp
    > Author: liqiang
    > Mail: 1398690148@163.com 
    > Created Time: 2019年08月02日 星期五 20时42分41秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n, ans = 0;
	int A[1000] = { 0 };
	cin >> n;
	for (int i = 0; i < n; i++) 
		cin >> A[i];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if(A[j] < A[ans]) ans = j;
		}
		i && cout << " ";
		cout << ans + 1;
		A[ans] = 301;
	}
}
