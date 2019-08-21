/*************************************************************************
    > File Name: EP-24-01.cpp
    > Author: liqiang
    > Mail: 1398690148@qq.com 
    > Created Time: 2019年08月16日 星期五 14时09分10秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
using namespace std;

#define MAX_N 1000000
int main() {
	int num[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	for (int i = 0; i < MAX_N - 1; i++) {
		next_permutation(num, num + 10);
	} 
	for (int i = 0; i < 10; i++) {
		cout << num[i];
	}
	return 0;
}
