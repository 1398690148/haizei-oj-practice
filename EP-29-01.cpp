/*************************************************************************
    > File Name: EP-29-01.cpp
    > Author: liqiang
    > Mail: 1398690148@qq.com 
    > Created Time: 2019年08月16日 星期五 16时26分23秒
 ************************************************************************/

#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

#define MAX_N 10000
#define MAX_M 210

int *result[MAX_N + 5];
int result_len = 0;

int find_result(int *num) {
	for (int i = 0; i < result_len; i++) {
		if (memcmp(result[i], num, sizeof(int) * MAX_M)) continue;
		return i + 1;
	}
	return 0;
}

int *calc(int a, int b) {
	int *tmp = (int *)calloc(sizeof(int), MAX_M);
	tmp[0] = tmp[1] = 1;
	for (int i = 0; i < b; i++) {
		for (int j = 1; j <= tmp[0]; j++) {
			tmp[j] *= a;
		}
		for (int j =1; j <= tmp[0]; j++) {
			if (tmp[j] < 10) continue;
			tmp[j + 1] += tmp[j] / 10;
			tmp[j] %= 10;
			tmp[0] += (j == tmp[0]);
		}
	}
	return tmp;
}

int main() {
	memset(result, 0, sizeof(result));
	for (int a = 2; a <= 100; a++) {
		for (int b = 2; b <= 100; b++) {
			int *tmp;
			tmp = calc(a, b);
			if (find_result(tmp) == 0) {
				result[result_len++] = tmp;
			} else {
				free(tmp);
			} 
		}
	}
	cout << result_len << endl;
	return 0;
}
