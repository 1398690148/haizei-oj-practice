/*************************************************************************
    > File Name: EP-06-1.c
    > Author: liqiang
    > Mail: 1398690148@163.com 
    > Created Time: 2019年08月02日 星期五 15时23分12秒
 ************************************************************************/

#include <stdio.h>

int main() {
	int sum1 = 0, sum2 = 0;
	sum1 = (1 + 100) * 100 / 2;
	sum2 = (2 * 100 * 100 * 100 + 3 * 100 * 100 + 100) / 6;
	printf("%d\n", sum1 * sum1 - sum2);
	return 0;
}