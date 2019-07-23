/*************************************************************************
    > File Name: 131.c
    > Author: liqiang
    > Mail: 1398690148@qq.com 
    > Created Time: 2019年07月23日 星期二 19时49分27秒
 ************************************************************************/

#include<stdio.h>

int main() {
	int cur, min = 10001, max = 0, n;
	scanf("%d", &n);
	for(int i = 0; i < n; i++) {
		scanf("%d", &cur);
		if(cur > max) {
			max = cur;
		}
		if(cur < min) {
			min = cur;
		}

	}
	printf("%d", max - min);


	return 0;
}
