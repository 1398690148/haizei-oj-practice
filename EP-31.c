/*************************************************************************
    > File Name: EP-31.c
    > Author: liqiang
    > Mail: 1398690148@qq.com 
    > Created Time: 2019年08月09日 星期五 14时33分22秒
 ************************************************************************/

#include <stdio.h>
#define MAX_M 8
#define MAX_N 200

int w[MAX_M + 5] = {1, 2, 5, 10, 20, 50, 100, 200};
int f[MAX_N + 5];

int main() {
	f[0] = 1;
	for (int k = 0; k < MAX_M; ++k) {
		for (int j = 1; j <= MAX_N; ++j) {
			if (j - w[k] >= 0) f[j] += f[j - w[k]];
		}
	}
	printf("%d\n", f[MAX_N]);
	return 0;
}
