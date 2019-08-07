/*************************************************************************
    > File Name: 201.cpp
    > Author: liqiang
    > Mail: 1398690148@163.com 
    > Created Time: 2019年08月02日 星期五 20时26分07秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n, count = 0;
	int A[100] = { 0 };
	cin >> n;
	for (int i = 0; i < n; i++) 
		cin >> A[i];
	sort(A, A + n);
	for (int i = 0; i < n; i++) {
		if(A[i] == A[i + 1]) continue;
		count++;
	}
	cout << count << endl;
	for (int i = 0; i < n; i++) {
		if (A[i] != A[i + 1]) {
			i && cout << " ";
			cout << A[i];
		}
	}
	return 0;
}
