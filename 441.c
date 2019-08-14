/*************************************************************************
    > File Name: 441.c
    > Author: liqiang
    > Mail: 1398690148@qq.com 
    > Created Time: 2019年08月14日 星期三 19时01分25秒
 ************************************************************************/

#include <stdio.h>

int main() {
	int x, n, sum = 0;
	scanf("%d%d", &x, &n);
	for (int i = 0; i < n; ++i) {
		if (x % 7 != 0 && x % 7 != 6)
			sum += 2;
		++x;
	}
	printf("%d\n", sum);
	return 0;
}
