/*************************************************************************
    > File Name: prac.c
    > Author: liqiang
    > Mail: 1398690148@qq.com 
    > Created Time: 2019年07月27日 星期六 19时09分51秒
 ************************************************************************/
#include <stdio.h>

int main() {
    int matrix[100][100];
    int m;
    int n;
	scanf("%d%d", &m, &n);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
	for (int i = 0; i < m / 2; i++) {
        for (int j = 0; j < n - 2 * i; j++) {
            printf("%d ", matrix[i][j]);
        }
		for (int j = i + 1; j < m - 2 * i; j++) {
			printf("%d ", matrix[j][n - i - 1]);
		}
		for (int j = n - i - 2; j >= i; j--) {
			printf("%d ", matrix[m - i - 1][j]);
		}
		for (int j = m - i - 2; j > i; j--) {
			printf("%d ", matrix[j][i]);
		}
    } 

    return 0;
}
