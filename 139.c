/*************************************************************************
    > File Name: 139.c
    > Author: liqiang
    > Mail: 1398690148@qq.com 
    > Created Time: 2019年07月23日 星期二 21时08分59秒
 ************************************************************************/

#include<stdio.h>
#include <math.h>
int main() {
	int n;
	scanf("%d", &n);
	for(int i = 0; i < n; i++) {
		for(int j = n - i - 1; j > 0; j--) {
			printf(" ");
		}
		for(int k = 0; k <= i; k++) {
			printf("AA");
		}
		printf("\n");
	}
	for(int i = 0; i < n; i++) {
		for(int j = 0; j <= i; j++) {
			printf(" ");
		}
		for(int k = n -i - 1; k > 0; k--) {
			printf("AA");
		}
		printf("\n");
	}
	
	
	return 0;
}
