/*************************************************************************
    > File Name: 150.c
    > Author: liqiang
    > Mail: 1398690148@qq.com 
    > Created Time: 2019年07月29日 星期一 16时19分06秒
 ************************************************************************/

#include <stdio.h>

int main() {
	int n, m, temp;
	scanf("%d%d", &n, &m);
	int A[n + 5][m + 5], B[m + 5][n + 5];
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			scanf("%d", &A[i][j]);
		}
	}
	for(int i = 0; i < m; i++) {
		for(int j = 0; j < n; j++) {
			B[i][j] = A[n - j - 1][i];
		}
	}
	for(int i = 0; i < m; i++) {
		for(int j = 0; j < n; j++) {
			j && printf(" ");
			printf("%d", B[i][j]);
		}
		printf("\n");
	}
}
