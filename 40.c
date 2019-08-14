/*************************************************************************
    > File Name: 40.c
    > Author: liqiang
    > Mail: 1398690148@qq.com 
    > Created Time: 2019年08月14日 星期三 20时02分22秒
 ************************************************************************/

#include <stdio.h>
#define MAX_N 1000

int num[MAX_N + 5][MAX_N + 5] = {0};

int main() {
	int n;
	scanf("%d", &n);
	num[0][0] = num[1][0] = 1;
	num[0][1] = num[1][1] = 0;
	num[2][0] = num[2][1] = 1;
	num[3][0] = num[3][1] = 1;
	for (int i = 4; i <= n; i++) {
		num[i][0] = num[i - 1][0];
		for (int j = 1; j <= num[i][0]; ++j) {
			num[i][j] = (num[i - 2][j] + num[i - 3][j]);
		}
		for (int j = 1; j <= num[i][0]; ++j) {
			if (num[i][j] < 10) continue;
			num[i][j + 1] += num[i][j] / 10;
			num[i][j] %= 10;
			num[i][0] += (j == num[i][0]);
		}
	}
	for (int i = num[n][0]; i >= 1; --i) {
		printf("%d", num[n][i]);
	}
	return 0;
}
