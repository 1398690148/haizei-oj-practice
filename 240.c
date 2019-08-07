/*************************************************************************
    > File Name: 240.c
    > Author: liqiang
    > Mail: 1398690148@qq.com 
    > Created Time: 2019年08月07日 星期三 16时02分11秒
 ************************************************************************/

#include <stdio.h>

void print(int x) {
	if (x == 1) {
		printf("x\n");
		return;
	}
	for (int i = 0; i < x; ++i) {
		i && printf(" ");
		printf("x");
	}
	printf("\n");
	print(x - 1);
}
int main() {
	int n;
	while (scanf("%d", &n) != EOF) {
		print(n);
		printf("-\n");
	}
}
