/*************************************************************************
    > File Name: 153.c
    > Author: liqiang
    > Mail: 1398690148@qq.com 
    > Created Time: 2019年07月27日 星期六 14时44分16秒
 ************************************************************************/

#include<stdio.h>

int main() {
	int y, m, d, j;
	scanf("%d%d%d", &y, &m, &d);
	if(m == 1 || m == 2) {
		--y;
		m += 12;
	}
	j = y / 100;
	y = y % 100;
	int h = (d + 26 * (m + 1) / 10 + y + y / 4 + j / 4 + 5 * j ) % 7;
	switch (h) {
		case 0: printf("6"); break;
		case 1: printf("7"); break;
		default: printf("%d", h - 1);
	}
	return 0;
}
