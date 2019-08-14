/*************************************************************************
    > File Name: 33.c
    > Author: liqiang
    > Mail: 1398690148@qq.com 
    > Created Time: 2019年08月12日 星期一 14时04分03秒
 ************************************************************************/

#include <stdio.h>

int main() {
	double m, n;
	int p;
	scanf("%lf%lf%d", &m, &n, &p);
	if (p & 1) printf("%.2lf", (m + n) * 1.087 / 2);
	else printf("%.2lf", (m * 0.973 + n) / 2);
	
	
	return 0;
}
