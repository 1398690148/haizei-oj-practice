/*************************************************************************
    > File Name: angle.c
    > Author: liqiang
    > Mail: 1398690148@qq.com 
    > Created Time: 2019年07月23日 星期二 19时24分13秒
 ************************************************************************/

#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main() {
	const double PI = acos(-1);
	double angle;
	bool a = true;
	scanf("%lf", &angle);
	printf("%lf", angle * PI / 180);
		
	return 0;
}
