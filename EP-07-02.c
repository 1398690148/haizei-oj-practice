/*************************************************************************
    > File Name: EP-07-02.c
    > Author: liqiang
    > Mail: 1398690148@qq.com 
    > Created Time: 2019年08月05日 星期一 16时05分06秒
 ************************************************************************/

#include <stdio.h>
#define MAX_N 10000

int prime[MAX_N + 5] = {0};
int main() {
	for (int i = 2; i <= MAX_N; ++i) {
		if (!prime[i])
			for (int j = 2; i * j <= MAX_N; ++j)
				prime[i * j] = i;
	}
	int n;
	while (scanf("%d", &n) != EOF) {
		printf("%d\n", prime[n]);
	}
	return 0;
}
