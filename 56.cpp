/*************************************************************************
    > File Name: 56.cpp
    > Author: liqiang
    > Mail: 1398690148@qq.com 
    > Created Time: 2019年08月09日 星期五 15时22分50秒
 ************************************************************************/

#include <iostream>
#include <algorithm> 
using namespace std;

int main() {
	int x, y;
	int A[10];
	cin >> x >> y;
	for (int i = 0; i < x; ++i)
		A[i] = i + 1;
	for (int i = 0; i < y - 1; ++i){
		next_permutation(A, A + x);
	}	
	for (int i = 0; i < x; ++i)
		cout << A[i];
	cout << endl;
	return 0;
}
