/*************************************************************************
    > File Name: EP-18.c
    > Author: liqiang
    > Mail: 1398690148@qq.com 
    > Created Time: 2019年08月14日 星期三 18时10分35秒
 ************************************************************************/

#include <stdio.h>
#include <string.h>
#define MAX_N 20

int val[MAX_N + 5][MAX_N + 5];
int keep[MAX_N + 5][MAX_N + 5];
int dfs(int i, int j, int n) {
	if (i + 1 == n) return val[i][j];
	if (keep[i][j]) return keep[i][j];
	int val1 = dfs(i + 1, j, n);
	int val2 = dfs(i + 1, j + 1, n);
	return keep[i][j] = (val1 > val2 ? val1 : val2) + val[i][j];
}

int main() {
	for (int i = 0; i < MAX_N; ++i) {
		for (int j = 0; j <= i; ++j) {
			scanf("%d", &val[i][j]);
		}
	}
	memset(keep, 0, sizeof(keep));
	printf("%d\n", dfs(0, 0, MAX_N));
	return 0;
}
