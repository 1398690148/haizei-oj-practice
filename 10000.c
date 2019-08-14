/*************************************************************************
    > File Name: 10000.c
    > Author: liqiang
    > Mail: 1398690148@qq.com 
    > Created Time: 2019年08月09日 星期五 19时57分30秒
 ************************************************************************/

#include <stdio.h>
#define MAX_N 100000

int num[MAX_N + 5];
int main() {
	num[0] = num[1] = 1;
	for (int i = 2; i < 10000; ++i) {
		for (int j = 1; j <= num[0]; ++j) {
			num[j] *= i;
		}
		for (int j = 1; j <= num[0]; ++j) {
			if (num[j] < 10) continue;
			num[j + 1] += num[j] / 10;
			num[j] %= 10;
			num[0] += (j == num[0]);
		}
	}
	for (int i = num[0]; i > 0; --i)
		printf("%d", num[i]);
	
	
	return 0;
}
