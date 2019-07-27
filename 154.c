/*************************************************************************
    > File Name: 154.c
    > Author: liqiang
    > Mail: 1398690148@qq.com 
    > Created Time: 2019年07月27日 星期六 14时15分59秒
 ************************************************************************/

#include<stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	for(int i = n; i > 0; i--) {
		for(int j = i; j > 0; j--) {
			if (j == 1) {
				printf("%d", j);
			} else {
				printf("%d ", j);
			}
		}
		printf("\n");
	}
	return 0;
	return 0;
}
