/*************************************************************************
    > File Name: 140.c
    > Author: liqiang
    > Mail: 1398690148@qq.com 
    > Created Time: 2019年07月25日 星期四 20时31分22秒
 ************************************************************************/

#include<stdio.h>

int main() {
	int n;
	char c = 'A';
	scanf("%d", &n);
	for(int i = 1; i <= n; i++) {
		for(int j = n - i; j > 0; j--) {
			printf(" ");
		}
		for(int k = 0; k < 2 * i - 1; k++) {
			printf("%c", c);
		}
		printf("\n");
		c = c + 1;
	}
	c = c - 2;
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= i; j++) {
			printf(" ");
		}
		for(int k = 2 * n - 1 - 2 * i; k > 0; k--) {
			printf("%c", c);
		}
		printf("\n");
		c = c - 1;
	}
	
	
	return 0;
}
