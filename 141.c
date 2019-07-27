/*************************************************************************
    > File Name: 141.c
    > Author: liqiang
    > Mail: 1398690148@qq.com 
    > Created Time: 2019年07月25日 星期四 20时44分04秒
 ************************************************************************/

#include<stdio.h>

int main() {
	int n;
	char c = 'A';
	scanf("%d", &n);
	for(int i = 0; i < n + 1; i++) {
		for(int j = 0; j < i; j++) {
			printf(" ");
		}
		for(int k = 0; k < n + 1 - i; k++) {
			printf("%c", c);
			c = c + 1;
		}
		c = c - 2;
		for(int k = 0; k < n - i; k++) {
			printf("%c", c);
			c = c - 1;
		}
		printf("\n");
		c = c + 2;
	}
	c = c - 2;
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n - i - 1; j++) {
			printf(" ");
		}
		for(int k = 0; k < i + 2; k++) {
			printf("%c", c);
			c = c + 1;
		}
		c = c - 2;
		for(int k = 0; k < i + 1; k++) {
			printf("%c", c);
			c = c - 1;
		}
		printf("\n");
	}
	return 0;
}
