/*************************************************************************
    > File Name: EP-11-01.c
    > Author: liqiang
    > Mail: 1398690148@qq.com 
    > Created Time: 2019年08月07日 星期三 14时06分56秒
 ************************************************************************/
#include <stdio.h>
#define MAX_N 20

int grid[MAX_N + 5][MAX_N + 5];
int direct[4][2] = {{0, 1}, {1, 1}, {1, 0}, {1, -1}};


int calc(int x, int y) {
	int ans = 0;
	for (int k = 0; k < 4; ++k) {
		int p = 1;
		for (int step = 0; step < 4; ++step) {
			int dx = x + step * direct[k][0];
			int dy = y + step * direct[k][1];
			if (dx < 0 || dx >= MAX_N) break;
			if (dy < 0 || dy >= MAX_N) break;
			p *= grid[dx][dy];
		}
		if (p > ans) ans = p;
	}
	return ans;
}
int main() {
	int ans = 0;
	for (int i = 0; i < MAX_N; ++i) {
		for (int j = 0; j < MAX_N; ++j) {
			scanf("%d", &grid[i][j]);
		}
	}
	for (int i = 0; i < MAX_N; ++i) {
		for (int j = 0; j < MAX_N; ++j) {
			int p = calc(i, j);
			if (p > ans) ans = p;
		}
	}
	printf("%d\n", ans);
	return 0;
}
