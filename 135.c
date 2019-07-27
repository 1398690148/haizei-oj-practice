/*************************************************************************
    > File Name: 135.c
    > Author: liqiang
    > Mail: 1398690148@qq.com 
    > Created Time: 2019年07月25日 星期四 19时46分38秒
 ************************************************************************/

#include<stdio.h>

int main() {
	int date[12] = {
		31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31
	};
	int t = 0;
	int sum_t = 365;
	int y, m, d;
	scanf("%d", &t);
	scanf("%d%d%d", &y, &m, &d);
	if((y % 4 == 0 && y % 100 != 0) || y % 400 == 0) {
		date[1] = 29;
		sum_t = 366; 
	}
	for(int i = 0; i < m - 1; i++) {
		t += date[i];
	}
	t += d;
	while (t > sum_t) {
		t -= sum_t;
		++y;
		if((y % 4 == 0 && y % 100 != 0) || y % 400 == 0) {
			date[1] = 29;
			sum_t = 366;
		} else {
			date[1] = 28;
			sum_t = 365;
		}
	}
	int j;
	for(j = 0; t > date[j]; j++) {
		t -= date[j];
	}
	printf("%d %d %d", y, j + 1, t);
	return 0;
}
