/*************************************************************************
    > File Name: 467.c
    > Author: liqiang
    > Mail: 1398690148@qq.com 
    > Created Time: 2019年08月12日 星期一 20时19分59秒
 ************************************************************************/

#include <stdio.h>

int main() {
	int num[100] = {0};
	int n;
	scanf("%d", &n);
	num[0] = num[1] = 1;
	for (int i = 2; i <= n; ++i) {
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
		printf("%d", num[i]);
	}
	return 0;
}
