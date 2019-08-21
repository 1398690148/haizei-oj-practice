/*************************************************************************
    > File Name: 445.cpp
    > Author: liqiang
    > Mail: 1398690148@qq.com 
    > Created Time: 2019年08月19日 星期一 19时26分36秒
 ************************************************************************/

#include <iostream>
using namespace std;

int find_sum(int *num, int x, int y, int z) {
	int sum = 0;
	for (int i = x; i <= y; i++) {
		if (num[i] > z) sum++;
	}
	return sum;
}

int main() {
	int n, sum = 0;
	int A[1005];

	cin >> n;
	for (int i = 0; i < n; i++) 
		cin >> A[i];
	for (int i = 0; i < n; i++) {
		int head = find_sum(A, 0, i - 1, A[i]);
		int tail = find_sum(A, i, n - 1, A[i]);
		if (head == tail) sum += 1;
	}
	cout << sum << endl;
	return 0;
}
