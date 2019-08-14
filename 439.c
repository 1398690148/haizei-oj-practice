/*************************************************************************
    > File Name: 439.c
    > Author: liqiang
    > Mail: 1398690148@qq.com 
    > Created Time: 2019年08月14日 星期三 18时54分25秒
 ************************************************************************/

#include <stdio.h>

int main() {
	double x, n = 2, sum = 0;
	int num = 0;
	scanf("%lf", &x);
	while (sum < x) {
		sum += n;
		n *= 0.98;
		++num;
	}
	printf("%d\n", num);
	return 0;
}
