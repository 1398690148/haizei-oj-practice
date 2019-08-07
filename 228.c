/*************************************************************************
    > File Name: 228.c
    > Author: liqiang
    > Mail: 1398690148@qq.com 
    > Created Time: 2019年08月07日 星期三 16时46分16秒
 ************************************************************************/

#include <stdio.h>

int main() {
	int n;
	int dp[25] = {0};
	int A[20][20];
	scanf("%d", &n);
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			scanf("%d", &A[i][j]);
		}
	}
	

	return 0;
}
