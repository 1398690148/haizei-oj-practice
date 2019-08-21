/*************************************************************************
    > File Name: EP-21-01.cpp
    > Author: liqiang
    > Mail: 1398690148@qq.com 
    > Created Time: 2019年08月19日 星期一 14时10分14秒
 ************************************************************************/

#include <iostream>
using namespace std;
#define MAX_N 10000

int is_val(int x) {
	int sum = 0;
	for (int i = 1; i * i <= x; i++) {
		if (x % i == 0) {
			sum = sum + i + x / i;
		}
	}
	return sum - x;
}

int main() {
	int sum = 0;
	for (int i = 2; i < MAX_N; i++) {
		int result1 = is_val(i);
		int result2 = is_val(result1);
		if (i != result1 && i == result2) sum += i;
	}
	cout << "sum = " << sum << endl;
	return 0;
}
