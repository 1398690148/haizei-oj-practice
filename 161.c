/*************************************************************************
    > File Name: 161.c
    > Author: liqiang
    > Mail: 1398690148@qq.com 
    > Created Time: 2019年07月27日 星期六 18时02分34秒
 ************************************************************************/

#include <stdio.h>
#include <math.h>

int main() {
	int x, n;
	double sum = 0;
	scanf("%d%d", &x, &n);
	printf("%.6f\n", x * pow(1.06, n));
	return 0;
}
