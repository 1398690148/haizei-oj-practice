/*************************************************************************
    > File Name: EP-28.c
    > Author: liqiang
    > Mail: 1398690148@163.com 
    > Created Time: 2019年08月02日 星期五 15时37分42秒
 ************************************************************************/

#include <stdio.h>
#include <math.h>
int main() {
	int sum = 1;
	for (int i = 3; i <= 1001; i += 2) {
		sum += 4 * i * i - 6 * i + 6;
	}
	int sum1 = 1001 * 1001 * 1001 - 1 + 6 * (3 + 1001) * 499 - 8 * 500;
	printf("%d %d\n", sum, sum1);
}