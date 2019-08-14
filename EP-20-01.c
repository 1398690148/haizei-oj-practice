/*************************************************************************
    > File Name: EP-20-01.c
    > Author: liqiang
    > Mail: 1398690148@qq.com 
    > Created Time: 2019年08月14日 星期三 16时40分28秒
 ************************************************************************/

#include <stdio.h>
#define MAX_N 1000

int num[MAX_N + 5] = {0};
int main() {
	int sum = 0;
	num[0] = num[1] = 1;
	for (int i = 1; i <= 100; ++i) {
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
	for (int i = num[0]; i > 0; --i) {
		sum += num[i];
	}
	printf("%d\n", sum);
	return 0;
}
