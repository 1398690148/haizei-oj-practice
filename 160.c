/*************************************************************************
    > File Name: 160.c
    > Author: liqiang
    > Mail: 1398690148@qq.com 
    > Created Time: 2019年07月27日 星期六 17时52分03秒
 ************************************************************************/

#include <stdio.h>
#include <math.h>
int main() {
	int r, h;
	const double PI = 3.14;
	scanf("%d%d", &r, &h);
	printf("%.2lf", (2 * r * r + PI * r * r / 2) * 2 + (PI * r + (2 * r + sqrt(8 * r * r))) * h);
	return 0;
}
